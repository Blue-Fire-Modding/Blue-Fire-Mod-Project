#pragma once
#include "CoreMinimal.h"
#include "EGAResourceFlowType.generated.h"

UENUM()
enum class EGAResourceFlowType : uint8 {
    undefined,
    source,
    sink,
};

