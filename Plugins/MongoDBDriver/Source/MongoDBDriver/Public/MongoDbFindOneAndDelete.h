#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbFindOneAndDelete.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneAndDelete;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneAndDeleteDone, const FDocumentValue, Document);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneAndDeleteFailed, const FDocumentValue, Document);

UCLASS()
class UMongoDbFindOneAndDelete : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneAndDeleteDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneAndDeleteFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneAndDelete* FindOneAndDelete(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
    UMongoDbFindOneAndDelete();
};

