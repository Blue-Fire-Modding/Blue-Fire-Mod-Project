#include "MongoDbDeleteOne.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbDeleteOne;

UMongoDbDeleteOne* UMongoDbDeleteOne::DeleteOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbDeleteOne::UMongoDbDeleteOne() {
}

