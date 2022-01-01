#pragma once
#include "CoreMinimal.h"
#include "EMongoReadConcernLevel.h"
#include "DatabaseReadConcern.generated.h"

USTRUCT(BlueprintType)
struct MONGODBDRIVER_API FDatabaseReadConcern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMongoReadConcernLevel Level;
    
    FDatabaseReadConcern();
};

