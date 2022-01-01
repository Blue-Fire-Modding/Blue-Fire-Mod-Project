#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbDeleteMany.generated.h"

class UMongoDbDeleteMany;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDeleteManyDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDeleteManyFailed);

UCLASS()
class UMongoDbDeleteMany : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbDeleteManyDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbDeleteManyFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbDeleteMany* DeleteMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
    UMongoDbDeleteMany();
};

