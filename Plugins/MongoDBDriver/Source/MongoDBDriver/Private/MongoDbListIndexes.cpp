#include "MongoDbListIndexes.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbListIndexes;

UMongoDbListIndexes* UMongoDbListIndexes::ListIndexes(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName) {
    return NULL;
}

UMongoDbListIndexes::UMongoDbListIndexes() {
}

