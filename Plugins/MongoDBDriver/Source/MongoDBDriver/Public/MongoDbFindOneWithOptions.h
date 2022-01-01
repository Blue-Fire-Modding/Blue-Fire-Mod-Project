#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoFindOptions.h"
#include "MongoDbFindOneWithOptions.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneWithOptions;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneWithOptionsDone, const FDocumentValue, Document);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneWithOptionsFailed, const FDocumentValue, Document);

UCLASS()
class UMongoDbFindOneWithOptions : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneWithOptionsDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneWithOptionsFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneWithOptions* FindOneWithOptions(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FMongoFindOptions Options);
    
    UMongoDbFindOneWithOptions();
};

