#include "MongoDbFindOneAndDelete.h"

class UMongoDbFindOneAndDelete;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbFindOneAndDelete* UMongoDbFindOneAndDelete::FindOneAndDelete(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbFindOneAndDelete::UMongoDbFindOneAndDelete() {
}

