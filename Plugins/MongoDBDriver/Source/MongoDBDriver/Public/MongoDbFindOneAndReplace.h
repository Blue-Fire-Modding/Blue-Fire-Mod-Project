#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbFindOneAndReplace.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneAndReplace;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneAndReplaceDone, const FDocumentValue, Document);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneAndReplaceFailed, const FDocumentValue, Document);

UCLASS()
class UMongoDbFindOneAndReplace : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneAndReplaceDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneAndReplaceFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneAndReplace* FindOneAndReplace(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Replacement);
    
    UMongoDbFindOneAndReplace();
};

