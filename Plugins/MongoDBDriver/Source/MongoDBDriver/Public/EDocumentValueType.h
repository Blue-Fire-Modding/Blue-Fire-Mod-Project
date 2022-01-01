#pragma once
#include "CoreMinimal.h"
#include "EDocumentValueType.generated.h"

UENUM()
enum class EDocumentValueType : uint8 {
    Int32,
    Int64,
    Float,
    String,
    Boolean,
    Array,
    ObjectId,
    Json,
    Map,
    Null,
    Undefined,
};

