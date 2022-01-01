#include "MongoPool.h"

class UMongoPool;

UMongoPool* UMongoPool::CreatePoolFromURI(const FString& Uri, const int32 PoolSize, const FString& PemFile, const FString& PemPassword, const FString& CaFile, const FString& CaDir, const FString& CrlFile, bool bAllowInvalidCertificate, bool bSslEnabled) {
    return NULL;
}

UMongoPool* UMongoPool::CreatePoolForAtlas(const FString& Protocole, const FString& Domain, const FString& DatabaseName, const FString& Username, const FString& Password, const int32 MinPoolSize, const int32 MaxPoolSize, const FString& AdditionalParameters) {
    return NULL;
}

UMongoPool* UMongoPool::CreatePool(const FString& Protocole, const FString& Address, const int32 Port, const int32 MinPoolSize, const int32 MaxPoolSize, const FString& AdditionalParameters) {
    return NULL;
}

UMongoPool::UMongoPool() {
}

