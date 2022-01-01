#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbDropDatabase.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbDropDatabase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDropDatabaseDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbDropDatabaseFailed);

UCLASS()
class UMongoDbDropDatabase : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbDropDatabaseDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbDropDatabaseFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbDropDatabase* DropDatabase(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
    UMongoDbDropDatabase();
};

