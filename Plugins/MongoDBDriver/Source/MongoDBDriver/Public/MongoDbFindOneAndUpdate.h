#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbFindOneAndUpdate.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneAndUpdate;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneAndUpdateDone, const FDocumentValue, Document);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneAndUpdateFailed, const FDocumentValue, Document);

UCLASS()
class UMongoDbFindOneAndUpdate : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneAndUpdateDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneAndUpdateFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneAndUpdate* FindOneAndUpdate(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update);
    
    UMongoDbFindOneAndUpdate();
};

