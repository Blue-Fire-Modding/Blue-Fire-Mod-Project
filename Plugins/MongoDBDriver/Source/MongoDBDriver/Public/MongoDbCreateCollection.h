#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbCreateCollection.generated.h"

class UMongoDbCreateCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbCreateCollectionDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbCreateCollectionFailed);

UCLASS()
class UMongoDbCreateCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbCreateCollectionDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbCreateCollectionFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbCreateCollection* CreateCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
    UMongoDbCreateCollection();
};

