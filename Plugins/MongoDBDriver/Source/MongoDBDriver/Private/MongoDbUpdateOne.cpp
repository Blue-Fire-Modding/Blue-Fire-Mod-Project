#include "MongoDbUpdateOne.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbUpdateOne;

UMongoDbUpdateOne* UMongoDbUpdateOne::UpdateOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update) {
    return NULL;
}

UMongoDbUpdateOne::UMongoDbUpdateOne() {
}

