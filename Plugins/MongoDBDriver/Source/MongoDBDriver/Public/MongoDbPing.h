#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbPing.generated.h"

class UMongoDbPing;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbPingDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbPingFailed);

UCLASS()
class UMongoDbPing : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbPingDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbPingFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbPing* Ping(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
    UMongoDbPing();
};

