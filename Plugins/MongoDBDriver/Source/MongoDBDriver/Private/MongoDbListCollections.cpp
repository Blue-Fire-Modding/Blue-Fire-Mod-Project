#include "MongoDbListCollections.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbListCollections;

UMongoDbListCollections* UMongoDbListCollections::ListCollectionNames(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName) {
    return NULL;
}

UMongoDbListCollections::UMongoDbListCollections() {
}

