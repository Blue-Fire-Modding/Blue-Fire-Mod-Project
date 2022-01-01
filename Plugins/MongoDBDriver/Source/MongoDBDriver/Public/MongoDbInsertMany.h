#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbInsertMany.generated.h"

class UMongoDbInsertMany;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbInsertManyDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMongoDbInsertManyFailed);

UCLASS()
class UMongoDbInsertMany : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbInsertManyDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbInsertManyFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbInsertMany* InsertMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, TArray<FDocumentValue> Value);
    
    UMongoDbInsertMany();
};

