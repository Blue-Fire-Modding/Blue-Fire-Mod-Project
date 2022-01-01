#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbCreateIndex.generated.h"

class UMongoDbCreateIndex;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbCreateIndexDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbCreateIndexFailed);

UCLASS()
class UMongoDbCreateIndex : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbCreateIndexDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbCreateIndexFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbCreateIndex* CreateIndex(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Keys, FDocumentValue IndexOptions);
    
    UMongoDbCreateIndex();
};

