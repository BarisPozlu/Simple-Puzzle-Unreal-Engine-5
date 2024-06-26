

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEON_API UMoveComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UMoveComponent();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(EditAnywhere)
	float distanceToMove;

	UPROPERTY(EditAnywhere)
	FVector velocity;

	FVector startLocation;
	FVector endLocation;
	AActor* owner;
	
	bool shouldMove;

	virtual void Move(float deltaTime);

public:

	virtual void ShouldMove();
	virtual void InverseDirection();
};
