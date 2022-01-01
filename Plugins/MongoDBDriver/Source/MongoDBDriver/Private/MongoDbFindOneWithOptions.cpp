#include "MongoDbFindOneWithOptions.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneWithOptions;

UMongoDbFindOneWithOptions* UMongoDbFindOneWithOptions::FindOneWithOptions(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FMongoFindOptions Options) {
    return NULL;
}

UMongoDbFindOneWithOptions::UMongoDbFindOneWithOptions() {
}

