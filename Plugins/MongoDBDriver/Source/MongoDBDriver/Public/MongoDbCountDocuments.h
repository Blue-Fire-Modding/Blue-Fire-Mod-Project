#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbCountDocuments.generated.h"

class UMongoDbCountDocuments;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbCountDocumentsDone, const int64, Count);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbCountDocumentsFailed, const int64, Count);

UCLASS()
class UMongoDbCountDocuments : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbCountDocumentsDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbCountDocumentsFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbCountDocuments* CountDocuments(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
    UMongoDbCountDocuments();
};

