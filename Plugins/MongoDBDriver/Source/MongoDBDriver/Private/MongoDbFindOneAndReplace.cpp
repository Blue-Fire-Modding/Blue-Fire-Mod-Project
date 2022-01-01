#include "MongoDbFindOneAndReplace.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneAndReplace;

UMongoDbFindOneAndReplace* UMongoDbFindOneAndReplace::FindOneAndReplace(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Replacement) {
    return NULL;
}

UMongoDbFindOneAndReplace::UMongoDbFindOneAndReplace() {
}

