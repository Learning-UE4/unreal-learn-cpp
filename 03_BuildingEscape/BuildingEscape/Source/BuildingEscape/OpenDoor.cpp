// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "Engine.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// Get the owning actor
	AActor* Owner = GetOwner();

	// Get the rotation
	FRotator OwnerRotation = Owner->GetActorRotation();

	// Create a new rotation
	FRotator NewRotation = FRotator(0.0f, -70.0f, 0.0f);

	// Set door rotation
	Owner->SetActorRotation(NewRotation);

}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

