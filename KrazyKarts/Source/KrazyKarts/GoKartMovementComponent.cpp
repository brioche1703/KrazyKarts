// Fill out your copyright notice in the Description page of Project Settings.


#include "GoKartMovementComponent.h"

#include "DrawDebugHelpers.h"
#include "GameFramework/GameStateBase.h"

FString GetEnumText(ENetRole Role)
{
	switch (Role)
	{
	case ROLE_None: 
		return "None";
		break;
	case ROLE_SimulatedProxy: 
		return "Simulated Proxy";
		break;
	case ROLE_AutonomousProxy: 
		return "Autonomous Proxy";
		break;
	case ROLE_Authority: 
		return "Authority";
		break;
	case ROLE_MAX: 
		return "MAX";
		break;
	default: 
		return "ERROR";
	}
}

// Sets default values for this component's properties
UGoKartMovementComponent::UGoKartMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGoKartMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGoKartMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (GetOwnerRole() == ROLE_AutonomousProxy || GetOwner()->GetRemoteRole() == ROLE_SimulatedProxy) {
		LastMove = CreateMove(DeltaTime);
		SimulateMove(LastMove);
	}
}

void UGoKartMovementComponent::SimulateMove(const FGoKartMove& Move) {
	FVector Force = GetOwner()->GetActorForwardVector() * MaxDrivingForce * Move.Throttle;
	Force += GetAirResistance();
	Force += GetRollingResistance();

	const FVector Acceleration = Force / Mass;

	Velocity = Velocity + Acceleration * Move.DeltaTime;

	ApplyRotation(Move.DeltaTime, Move.SteeringThrow);
	UpdateLocationFromVelocity(Move.DeltaTime);

	DrawDebugString(GetWorld(), FVector(0, 0, 100),
		GetEnumText(GetOwner()->GetLocalRole()), GetOwner(), FColor::White, Move.DeltaTime);
}

FGoKartMove UGoKartMovementComponent::CreateMove(float DeltaTime)
{
		FGoKartMove Move;
		Move.DeltaTime = DeltaTime;
		Move.Time = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
		Move.SteeringThrow = SteeringThrow;
		Move.Throttle = Throttle;
		return Move;
}

void UGoKartMovementComponent::UpdateLocationFromVelocity(float DeltaTime) {
	FVector Translation = Velocity * DeltaTime * 100.0f;

	FHitResult HitResult;
	GetOwner()->AddActorWorldOffset(Translation, true, &HitResult);
	if (HitResult.IsValidBlockingHit()) {
		Velocity = FVector::ZeroVector;
	}
}

void UGoKartMovementComponent::ApplyRotation(float DeltaTime, float SteeringThrowIn) {
	float RotationAngle = (FVector::DotProduct(GetOwner()->GetActorForwardVector(), Velocity) * DeltaTime) / MinTurningRadius * SteeringThrowIn;
	FQuat RotationDelta(GetOwner()->GetActorUpVector(), RotationAngle);
	Velocity = RotationDelta.RotateVector(Velocity);

	GetOwner()->AddActorWorldRotation(RotationDelta);
}

FVector UGoKartMovementComponent::GetAirResistance()
{
	return -Velocity.GetSafeNormal() * Velocity.SizeSquared() * DragCoefficient;
}

FVector UGoKartMovementComponent::GetRollingResistance()
{
	const float AccelerationDueToGravity = -GetWorld()->GetGravityZ() / 100.0f;
	const float NormalForce = Mass * AccelerationDueToGravity;
	return -Velocity.GetSafeNormal() * RollingResistanceCoefficient * NormalForce;
}

