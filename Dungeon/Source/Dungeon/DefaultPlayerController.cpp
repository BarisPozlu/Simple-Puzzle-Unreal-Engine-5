

#include "DefaultPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GrabComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


ADefaultPlayerController::ADefaultPlayerController() : pawnControlled(nullptr)
{

}


void ADefaultPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);

    enhancedInputComponent->BindAction(grabAction, ETriggerEvent::Triggered, this, &ADefaultPlayerController::HandleGrab);

    UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
    subsystem->ClearAllMappings();
    subsystem->AddMappingContext(defaultMapping, 0);
}

void ADefaultPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
    pawnControlled = GetPawn();
}

void ADefaultPlayerController::HandleGrab()
{
    UGrabComponent* grabComponent = pawnControlled->GetComponentByClass<UGrabComponent>();
    if (!grabComponent) return;

    UPhysicsHandleComponent* physicsHandleComponent = pawnControlled->GetComponentByClass<UPhysicsHandleComponent>();
    if (!physicsHandleComponent) return;

    if (physicsHandleComponent->GetGrabbedComponent())
    {
        grabComponent->Release();
        return;
    }

    grabComponent->Grab();
}
