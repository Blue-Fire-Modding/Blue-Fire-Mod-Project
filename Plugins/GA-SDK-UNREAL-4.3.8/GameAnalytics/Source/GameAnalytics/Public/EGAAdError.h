#pragma once
#include "CoreMinimal.h"
#include "EGAAdError.generated.h"

UENUM()
enum class EGAAdError : uint8 {
    undefined,
    unknown,
    offline,
    nofill,
    internalerror,
    invalidrequest,
    unabletoprecache,
};

