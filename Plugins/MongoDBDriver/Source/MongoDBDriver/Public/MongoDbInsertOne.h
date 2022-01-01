#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoInsertResult.h"
#include "DocumentValue.h"
#include "MongoDbInsertOne.generated.h"

class UMongoDbInsertOne;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbInsertOneDone, const FMongoInsertResult&, Result);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbInsertOneFailed, const FMongoInsertResult&, Result);

UCLASS()
class UMongoDbInsertOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbInsertOneDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbInsertOneFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbInsertOne* InsertOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Value);
    
    UMongoDbInsertOne();
};

