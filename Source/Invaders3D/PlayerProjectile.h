// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerProjectile.generated.h"

UCLASS()
class INVADERS3D_API APlayerProjectile : public AActor
{
	GENERATED_BODY()

	// Collision Stuff
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	class USphereComponent* CollisionComp;

	// Movement stuff
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* ProjectileMovement;

	// Mesh, so you can see it
	UPROPERTY(VisibleAnywhere, Category = Visual)
	class UStaticMeshComponent* ProjectileMesh;

	// Constructor
	APlayerProjectile(const FObjectInitializer& ObjInit);

public:
	void InitVel(const FVector& FireDir);
	
public:	
	// Sets default values for this actor's properties
	APlayerProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
