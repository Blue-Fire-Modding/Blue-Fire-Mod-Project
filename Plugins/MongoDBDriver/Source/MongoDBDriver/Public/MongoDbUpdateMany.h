#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbUpdateMany.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbUpdateMany;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbUpdateManyDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbUpdateManyFailed);

UCLASS()
class UMongoDbUpdateMany : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbUpdateManyDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbUpdateManyFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbUpdateMany* UpdateMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update);
    
    UMongoDbUpdateMany();
};

