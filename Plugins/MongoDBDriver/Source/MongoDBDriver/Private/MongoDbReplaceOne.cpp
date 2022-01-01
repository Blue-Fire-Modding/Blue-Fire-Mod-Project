#include "MongoDbReplaceOne.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbReplaceOne;

UMongoDbReplaceOne* UMongoDbReplaceOne::ReplaceOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Replacement) {
    return NULL;
}

UMongoDbReplaceOne::UMongoDbReplaceOne() {
}

