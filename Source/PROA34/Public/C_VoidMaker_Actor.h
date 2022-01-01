#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_VoidMaker_Actor.generated.h"

class USplineComponent;
class UStaticMeshComponent;

UCLASS()
class PROA34_API AC_VoidMaker_Actor : public AActor {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	float DistanceInSpline;
    
	UPROPERTY()
	bool bInReverse;
    
	UFUNCTION(BlueprintCallable)
	void SetCollisionByPlayerLocation(float PlayerVectorLenght, UStaticMeshComponent* TargetMeshComponent);
    
	UFUNCTION(BlueprintCallable)
	void MoveActorWithOutLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    
	UFUNCTION(BlueprintCallable)
	void MoveActorWithLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    
	UFUNCTION(BlueprintCallable)
	void MoveActorComplexNoLoop(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
    
	UFUNCTION(BlueprintCallable)
	void MoveActorComplex(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
    
	AC_VoidMaker_Actor();
};