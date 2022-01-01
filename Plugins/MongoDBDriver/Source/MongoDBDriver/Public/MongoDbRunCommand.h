#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbRunCommand.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbRunCommand;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbRunCommandDone, const FDocumentValue, Document);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbRunCommandFailed, const FDocumentValue, Document);

UCLASS()
class UMongoDbRunCommand : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbRunCommandDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbRunCommandFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbRunCommand* RunCommand(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, FDocumentValue Command);
    
    UMongoDbRunCommand();
};

