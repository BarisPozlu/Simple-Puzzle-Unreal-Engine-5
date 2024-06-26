

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoxTriggerComponent.generated.h"

class UMoveComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEON_API UBoxTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()

public:

	UBoxTriggerComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:

	virtual void BeginPlay();
	virtual void SetupMoveComponentToMove();

	UFUNCTION() 
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult);

	UFUNCTION() 
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
	virtual void SetMoveComponent(UMoveComponent* moveComponentIn);

private:

	UMoveComponent* moveComponent;
	TArray<UPrimitiveComponent*> overlappingComponents;
	bool newOverlap;
};
