#include "MongoDbDropCollection.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbDropCollection;

UMongoDbDropCollection* UMongoDbDropCollection::DropCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName) {
    return NULL;
}

UMongoDbDropCollection::UMongoDbDropCollection() {
}

