

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DefaultPlayerController.generated.h"

/**
 * 
 */

class UInputAction;
class UInputMappingContext;


UCLASS()
class DUNGEON_API ADefaultPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	ADefaultPlayerController();

	virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
	UInputAction* grabAction;

	UPROPERTY(EditAnywhere)
	UInputMappingContext* defaultMapping;

	APawn* pawnControlled;

	virtual void HandleGrab();
};
