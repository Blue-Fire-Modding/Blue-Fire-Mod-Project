#include "MongoDbFind.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFind;

UMongoDbFind* UMongoDbFind::Find(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbFind::UMongoDbFind() {
}

