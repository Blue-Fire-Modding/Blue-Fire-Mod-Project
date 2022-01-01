#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatabaseConnector.h"
#include "MongoPool.generated.h"

class UMongoPool;

UCLASS(BlueprintType)
class MONGODBDRIVER_API UMongoPool : public UObject, public IDatabaseConnector {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UMongoPool* CreatePoolFromURI(const FString& Uri, const int32 PoolSize, const FString& PemFile, const FString& PemPassword, const FString& CaFile, const FString& CaDir, const FString& CrlFile, bool bAllowInvalidCertificate, bool bSslEnabled);
    
    UFUNCTION(BlueprintPure)
    static UMongoPool* CreatePoolForAtlas(const FString& Protocole, const FString& Domain, const FString& DatabaseName, const FString& Username, const FString& Password, const int32 MinPoolSize, const int32 MaxPoolSize, const FString& AdditionalParameters);
    
    UFUNCTION(BlueprintPure)
    static UMongoPool* CreatePool(const FString& Protocole, const FString& Address, const int32 Port, const int32 MinPoolSize, const int32 MaxPoolSize, const FString& AdditionalParameters);
    
    UMongoPool();
    
    // Fix for true pure virtual functions not being implemented
};

