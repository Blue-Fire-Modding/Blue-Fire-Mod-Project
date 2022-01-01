#include "MongoDbFindOne.h"

class UMongoDbFindOne;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbFindOne* UMongoDbFindOne::FindOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbFindOne::UMongoDbFindOne() {
}

