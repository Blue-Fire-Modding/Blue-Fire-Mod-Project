#include "MongoDbInsertOne.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbInsertOne;

UMongoDbInsertOne* UMongoDbInsertOne::InsertOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Value) {
    return NULL;
}

UMongoDbInsertOne::UMongoDbInsertOne() {
}

