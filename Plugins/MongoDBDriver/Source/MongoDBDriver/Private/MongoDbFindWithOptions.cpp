#include "MongoDbFindWithOptions.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindWithOptions;

UMongoDbFindWithOptions* UMongoDbFindWithOptions::FindWithOptions(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FMongoFindOptions Options) {
    return NULL;
}

UMongoDbFindWithOptions::UMongoDbFindWithOptions() {
}

