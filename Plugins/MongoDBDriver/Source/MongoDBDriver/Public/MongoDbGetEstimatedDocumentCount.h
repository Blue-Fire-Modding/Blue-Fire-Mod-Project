#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbGetEstimatedDocumentCount.generated.h"

class UMongoDbGetEstimatedDocumentCount;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbGetEstimatedDocumentCountDone, const int64, Count);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbGetEstimatedDocumentCountFailed, const int64, Count);

UCLASS()
class UMongoDbGetEstimatedDocumentCount : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbGetEstimatedDocumentCountDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbGetEstimatedDocumentCountFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbGetEstimatedDocumentCount* GetEstimatedDocumentCount(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
    UMongoDbGetEstimatedDocumentCount();
};

