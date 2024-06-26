

#include "BoxTriggerComponent.h"
#include "MoveComponent.h"

UBoxTriggerComponent::UBoxTriggerComponent() : moveComponent(nullptr), newOverlap(false)
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UBoxTriggerComponent::BeginPlay()
{
    Super::BeginPlay();

    OnComponentBeginOverlap.AddDynamic(this, &UBoxTriggerComponent::OnOverlapBegin);
    OnComponentEndOverlap.AddDynamic(this, &UBoxTriggerComponent::OnOverlapEnd);
}


void UBoxTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!newOverlap) return;
    
    GetOverlappingComponents(overlappingComponents);

    for (UPrimitiveComponent* component : overlappingComponents)
    {
        if (component->GetOwner()->ActorHasTag("UnlocksDoors") && !(component->GetOwner()->ActorHasTag("Grabbed"))) // this check is needed so that we don't unlock
        {                                                                                                         // if the component is still grabbed
            component->SetSimulatePhysics(false);
            component->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
            SetupMoveComponentToMove();
            newOverlap = false;
            break;
        }
    }
}

void UBoxTriggerComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor == GetOwner()) return;

    if (!OtherActor->ActorHasTag("UnlocksDoors")) return;  // redundant check but better performance
 
    newOverlap = true;
}

void UBoxTriggerComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor == GetOwner()) return;

    if (!OtherActor->ActorHasTag("UnlocksDoors")) return;  // redundant check but better performance

    if (newOverlap) return;

    SetupMoveComponentToMove();
}

void UBoxTriggerComponent::SetupMoveComponentToMove()
{
    if (!moveComponent) return;
    
    moveComponent->InverseDirection();
    moveComponent->ShouldMove();
}


void UBoxTriggerComponent::SetMoveComponent(UMoveComponent* moveComponentIn)
{
    moveComponent = moveComponentIn;
}
