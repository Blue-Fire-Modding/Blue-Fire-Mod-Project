#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DatabaseData.h"
#include "MongoDbListDatabases.generated.h"

class UMongoDbListDatabases;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbListDatabasesDone, const TArray<FDatabaseData>&, Databases);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbListDatabasesFailed, const TArray<FDatabaseData>&, Databases);

UCLASS()
class UMongoDbListDatabases : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbListDatabasesDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbListDatabasesFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbListDatabases* ListDatabases(TScriptInterface<IDatabaseConnector> Connector);
    
    UMongoDbListDatabases();
};

