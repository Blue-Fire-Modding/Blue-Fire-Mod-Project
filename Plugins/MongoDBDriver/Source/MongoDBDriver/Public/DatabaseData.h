#pragma once
#include "CoreMinimal.h"
#include "DatabaseData.generated.h"

USTRUCT(BlueprintType)
struct MONGODBDRIVER_API FDatabaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SizeOnDisk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasAnyData;
    
    FDatabaseData();
};

