#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbRenameCollection.generated.h"

class UMongoDbRenameCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbRenameCollectionDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbRenameCollectionFailed);

UCLASS()
class UMongoDbRenameCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbRenameCollectionDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbRenameCollectionFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbRenameCollection* RenameCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, const FString& NewCollectionName, bool bOverwriteExisting);
    
    UMongoDbRenameCollection();
};

