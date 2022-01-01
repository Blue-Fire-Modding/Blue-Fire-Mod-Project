#include "RobiFunctionLibrary.h"

class UObject;
class AActor;

bool URobiFunctionLibrary::IsRobiValid(const UObject* Object) {
	return false;
}

bool URobiFunctionLibrary::IsInFrustum(const AActor* Actor) {
	return false;
}

URobiFunctionLibrary::URobiFunctionLibrary() {
}