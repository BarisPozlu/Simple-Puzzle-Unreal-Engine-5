

#include "GrabComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


UGrabComponent::UGrabComponent() : sweepDistance(100), grabDistance(100), grabbedTag("Grabbed"), physicsHandleComponent(nullptr)
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UGrabComponent::BeginPlay()
{
	Super::BeginPlay();

	physicsHandleComponent = GetOwner()->GetComponentByClass<UPhysicsHandleComponent>();
}


void UGrabComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (!physicsHandleComponent || !physicsHandleComponent->GetGrabbedComponent()) return;
	physicsHandleComponent->SetTargetLocationAndRotation(GetComponentLocation() + grabDistance * GetForwardVector(), GetComponentRotation());
}

void UGrabComponent::Sweep(FHitResult& outHitResult)
{
	FVector currentLocation = GetComponentLocation();
	
	GetWorld()->SweepSingleByChannel( 
	outHitResult,
	currentLocation, 
	currentLocation + GetForwardVector() * sweepDistance, 
	FQuat::Identity, 
	ECC_GameTraceChannel2, 
	FCollisionShape::MakeSphere(100));
}

void UGrabComponent::Grab()
{	
	FHitResult hitResult;
	Sweep(hitResult);

	UPrimitiveComponent* hitComponent = hitResult.GetComponent();

	if (!hitComponent) return;

	hitComponent->SetSimulatePhysics(true);
	hitComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	hitComponent->WakeAllRigidBodies();
	hitComponent->GetOwner()->Tags.Add(grabbedTag);
	physicsHandleComponent->GrabComponentAtLocationWithRotation(hitComponent, NAME_None, hitResult.ImpactPoint, GetComponentRotation());
}

void UGrabComponent::Release()
{
	UPrimitiveComponent* grabbedComponent = physicsHandleComponent->GetGrabbedComponent();
	grabbedComponent->WakeAllRigidBodies();
	grabbedComponent->GetOwner()->Tags.Remove(grabbedTag);
	physicsHandleComponent->ReleaseComponent();
}
