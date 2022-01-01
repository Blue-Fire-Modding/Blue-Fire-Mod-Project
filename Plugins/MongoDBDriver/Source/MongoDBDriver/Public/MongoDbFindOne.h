#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbFindOne.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOne;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneDone, const FDocumentValue, Document);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbFindOneFailed, const FDocumentValue, Document);

UCLASS()
class UMongoDbFindOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbFindOneFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOne* FindOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
    UMongoDbFindOne();
};

