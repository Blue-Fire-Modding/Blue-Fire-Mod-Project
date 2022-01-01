#pragma once
#include "CoreMinimal.h"
#include "DocumentValue.h"
#include "MongoFindOptions.generated.h"

USTRUCT(BlueprintType)
struct MONGODBDRIVER_API FMongoFindOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowPartialResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BatchSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDocumentValue Collation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDocumentValue Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDocumentValue Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int64 MaxAwaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int64 MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNoCursorTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDocumentValue Projection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReturnKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowRecordId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int64 Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDocumentValue Sort;
    
    FMongoFindOptions();
};

