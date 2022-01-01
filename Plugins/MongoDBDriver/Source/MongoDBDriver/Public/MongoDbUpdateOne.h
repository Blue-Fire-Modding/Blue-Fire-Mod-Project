#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbUpdateOne.generated.h"

class UMongoDbUpdateOne;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbUpdateOneDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbUpdateOneFailed);

UCLASS()
class UMongoDbUpdateOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbUpdateOneDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbUpdateOneFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbUpdateOne* UpdateOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update);
    
    UMongoDbUpdateOne();
};

