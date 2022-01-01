#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoFindOptions.h"
#include "MongoDbFindWithOptions.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindWithOptions;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindWithOptionsDone, const FDocumentValue, Document);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindWithOptionsFailed, const FDocumentValue, Document);

UCLASS()
class UMongoDbFindWithOptions : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindWithOptionsDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindWithOptionsFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindWithOptions* FindWithOptions(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FMongoFindOptions Options);
    
    UMongoDbFindWithOptions();
};

