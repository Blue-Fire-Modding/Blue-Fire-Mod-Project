#pragma once
#include "CoreMinimal.h"
#include "ObjectId.h"
#include "MongoInsertResult.generated.h"

USTRUCT(BlueprintType)
struct MONGODBDRIVER_API FMongoInsertResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FObjectId InsertedId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InsertedCount;
    
    FMongoInsertResult();
};

