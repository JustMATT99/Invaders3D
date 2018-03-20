// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerProjectile.h"
#include "Components/SphereComponent.h"


APlayerProjectile::APlayerProjectile(const FObjectInitializer& ObjInit)
	: Super(ObjInit) 
{
	CollisionComp = ObjInit.CreateDefaultSubobject<USphereComponent>(this, TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(15.0f);
	RootComponent = CollisionComp;
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

