// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Classes/Kismet/GameplayStatics.h"
#include "TankAimingCompnent.generated.h"

class UTankBarrel; //Forward Declaration
class UTankTurret; 

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingCompnent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingCompnent();

	void SetBarrelReference(UTankBarrel * BarrelToSet);

	void SetTurretReference(UTankTurret * TurretToSet);

protected:

public:	
	//TODO add SetTurretReference
	void AimAt(FVector HitLocation, float LaunchSpeed);

private:
	UTankBarrel * Barrel = nullptr;

	void MoveBarrelTowards(FVector AimDirection);

	UTankTurret * Turret = nullptr;
};
