#pragma once
#include "CoreMinimal.h"
#include "EGAAdAction.generated.h"

UENUM()
enum class EGAAdAction : uint8 {
    undefined,
    clicked,
    show,
    failedshow,
    rewardreceived,
    request,
    loaded,
};

