

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GrabComponent.generated.h"


class UPhysicsHandleComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEON_API UGrabComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	
	UGrabComponent();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	float sweepDistance;
	float grabDistance;
	FName grabbedTag;

	UPhysicsHandleComponent* physicsHandleComponent;

	virtual void Sweep(FHitResult& outHitResult);

public:

	virtual void Grab();
	virtual void Release();
};
