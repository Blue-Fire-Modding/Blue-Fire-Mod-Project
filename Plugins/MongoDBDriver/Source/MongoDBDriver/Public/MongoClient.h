#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatabaseConnector.h"
#include "MongoClient.generated.h"

class UMongoClient;

UCLASS(BlueprintType)
class MONGODBDRIVER_API UMongoClient : public UObject, public IDatabaseConnector {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UMongoClient* CreateClient(const FString& Protocole, const FString& Address, int32 Port, const FString& AdditionalParameters);
    
    UMongoClient();
    
    // Fix for true pure virtual functions not being implemented
};

