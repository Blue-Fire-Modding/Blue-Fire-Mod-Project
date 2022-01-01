#include "C_VoidMaker_Actor.h"

class UStaticMeshComponent;
class AActor;
class USplineComponent;

void AC_VoidMaker_Actor::SetCollisionByPlayerLocation(float PlayerVectorLenght, UStaticMeshComponent* TargetMeshComponent) {
}

void AC_VoidMaker_Actor::MoveActorWithOutLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType) {
}

void AC_VoidMaker_Actor::MoveActorWithLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType) {
}

void AC_VoidMaker_Actor::MoveActorComplexNoLoop(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType) {
}

void AC_VoidMaker_Actor::MoveActorComplex(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType) {
}

AC_VoidMaker_Actor::AC_VoidMaker_Actor() {
	this->DistanceInSpline = 0.00f;
	this->bInReverse = false;
}