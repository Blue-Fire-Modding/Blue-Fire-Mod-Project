#include "MongoDbCreateCollection.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbCreateCollection;

UMongoDbCreateCollection* UMongoDbCreateCollection::CreateCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName) {
    return NULL;
}

UMongoDbCreateCollection::UMongoDbCreateCollection() {
}

