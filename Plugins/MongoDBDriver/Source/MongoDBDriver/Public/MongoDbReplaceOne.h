#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbReplaceOne.generated.h"

class UMongoDbReplaceOne;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbReplaceOneDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbReplaceOneFailed);

UCLASS()
class UMongoDbReplaceOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbReplaceOneDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbReplaceOneFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbReplaceOne* ReplaceOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Replacement);
    
    UMongoDbReplaceOne();
};

