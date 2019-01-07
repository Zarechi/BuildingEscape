// Fill out your copyright notice in the Description page of Project Settings.

#include "GetPositionComponent.h" 
#include <string>

using namespace std;

// Sets default values for this component's properties
UGetPositionComponent::UGetPositionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGetPositionComponent::BeginPlay()
{
	Super::BeginPlay();

	FVector ActorPos = GetOwner()->GetTransform().GetLocation();
	FName ActorName = GetOwner()->GetFName();

	UE_LOG(LogTemp, Warning, TEXT("%s.Location(%s)"), *ActorName.ToString(), *ActorPos.ToString());
	// ...
	
}


// Called every frame
void UGetPositionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}

