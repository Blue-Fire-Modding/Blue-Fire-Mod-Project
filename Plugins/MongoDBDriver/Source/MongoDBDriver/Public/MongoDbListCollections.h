#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbListCollections.generated.h"

class UMongoDbListCollections;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbListCollectionsDone, const TArray<FString>&, Collections);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbListCollectionsFailed, const TArray<FString>&, Collections);

UCLASS()
class UMongoDbListCollections : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbListCollectionsDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbListCollectionsFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbListCollections* ListCollectionNames(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
    UMongoDbListCollections();
};

