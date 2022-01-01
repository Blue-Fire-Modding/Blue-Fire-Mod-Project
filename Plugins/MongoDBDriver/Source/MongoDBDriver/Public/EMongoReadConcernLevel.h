#pragma once
#include "CoreMinimal.h"
#include "EMongoReadConcernLevel.generated.h"

UENUM(BlueprintType)
enum class EMongoReadConcernLevel : uint8 {
    Local,
    Majority,
    Linearizable,
    ServerDefault,
    Unknown,
    Available,
    Snapshot,
};

