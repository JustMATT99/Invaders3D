// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"



APlayerProjectile::APlayerProjectile(const FObjectInitializer& ObjInit)
	: Super(ObjInit) 
{
	CollisionComp = ObjInit.CreateDefaultSubobject<USphereComponent>(this, TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(15.0f);
	RootComponent = CollisionComp;

	ProjectileMovement = ObjInit.CreateDefaultSubobject<UProjectileMovementComponent>(this, TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bShouldBounce = false;

	ProjectileMesh = ObjInit.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("ProjectileMesh"));

}

// Sets default values
APlayerProjectile::APlayerProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerProjectile::InitVel(const FVector& FireDir) 
{
	if (ProjectileMovement) 
	{
		// Set initial direction, dont wanna shoot yourself, do you?
		ProjectileMovement->Velocity = FireDir * ProjectileMovement->InitialSpeed;
	}
}

