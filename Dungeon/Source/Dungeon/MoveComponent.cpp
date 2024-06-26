

#include "MoveComponent.h"


UMoveComponent::UMoveComponent() : distanceToMove(500), velocity(0, 0, -100), shouldMove(false)
{
	PrimaryComponentTick.bCanEverTick = true;
}



void UMoveComponent::BeginPlay()
{
	Super::BeginPlay();
	owner = GetOwner();
	startLocation = owner->GetActorLocation();
	endLocation = startLocation + velocity.GetSafeNormal() * distanceToMove;
	InverseDirection();
}



void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!shouldMove) return;

	Move(DeltaTime);

}

void UMoveComponent::Move(float deltaTime)
{
	FVector newLocation = owner->GetActorLocation() + velocity * deltaTime;

	if (FVector::Dist(newLocation, startLocation) > distanceToMove)
	{
		newLocation = endLocation;
		shouldMove = false;
	}
	owner->SetActorLocation(newLocation);
}

void UMoveComponent::InverseDirection()
{
	FVector temp = startLocation;
	startLocation = endLocation;
	endLocation = temp;
	velocity = -1 * velocity;
}

void UMoveComponent::ShouldMove()
{
	shouldMove = true;
}
