#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MongoDbAsyncNodeBase.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbAsyncNodeBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TScriptInterface<IDatabaseConnector> m_Connector;
    
public:
    UMongoDbAsyncNodeBase();
};

