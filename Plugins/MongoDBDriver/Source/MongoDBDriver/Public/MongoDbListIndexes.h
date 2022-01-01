#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DatabaseIndex.h"
#include "MongoDbListIndexes.generated.h"

class UMongoDbListIndexes;
class UDatabaseConnector;
class IDatabaseConnector;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbListIndexesDone, const TArray<FDatabaseIndex>&, Indexes);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMongoDbListIndexesFailed, const TArray<FDatabaseIndex>&, Indexes);

UCLASS()
class UMongoDbListIndexes : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMongoDbListIndexesDone Done;
    
    UPROPERTY(BlueprintAssignable)
    FMongoDbListIndexesFailed Failed;
    
    UFUNCTION(BlueprintCallable)
    static UMongoDbListIndexes* ListIndexes(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
    UMongoDbListIndexes();
};

