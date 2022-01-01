#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbDropCollection.generated.h"

class UMongoDbDropCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDropCollectionDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDropCollectionFailed);

UCLASS()
class UMongoDbDropCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbDropCollectionDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbDropCollectionFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbDropCollection* DropCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
    UMongoDbDropCollection();
};

