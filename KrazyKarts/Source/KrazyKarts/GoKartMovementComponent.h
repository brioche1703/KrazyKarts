// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GoKartMovementComponent.generated.h"

USTRUCT()
struct FGoKartMove
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	float Throttle;
	UPROPERTY()
	float SteeringThrow;
	UPROPERTY()
	float DeltaTime;
	UPROPERTY()
	float Time;

	bool IsValid() const
	{
		return FMath::Abs(Throttle) <= 1 && FMath::Abs(SteeringThrow) <= 1;
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KRAZYKARTS_API UGoKartMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGoKartMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	FGoKartMove GetLastMove() const { return LastMove; }
	FVector GetVelocity() const { return Velocity; }
	void SetVelocity(const FVector Val) { Velocity = Val; }
	float GetThrottle() const { return Throttle; }
	void SetThrottle(const float Val) { Throttle = Val; }
	float GetSteeringThrow() const { return SteeringThrow; }
	void SetSteeringThrow(const float Val) { SteeringThrow = Val; }
	void SimulateMove(const FGoKartMove& Move);

private:
	FGoKartMove CreateMove(float DeltaTime);
	void UpdateLocationFromVelocity(float DeltaTime);
	void ApplyRotation(float DeltaTime, float SteeringThrow);
	FVector GetAirResistance();
	FVector GetRollingResistance();

private:
	UPROPERTY(EditAnywhere)
	float Mass = 1000.0f;

	UPROPERTY(EditAnywhere)
	float MaxDrivingForce = 10000.0f;
	UPROPERTY(EditAnywhere)
	float DragCoefficient = 16.0f;
	UPROPERTY(EditAnywhere)
	float RollingResistanceCoefficient = 0.01f;
	UPROPERTY(EditAnywhere)
	float MinTurningRadius = 10.0f;

	FVector Velocity;
	float Throttle;
	float SteeringThrow;
	
	FGoKartMove LastMove;
};
