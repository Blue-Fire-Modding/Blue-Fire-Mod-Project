#include "MongoDbFindOneAndUpdate.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneAndUpdate;

UMongoDbFindOneAndUpdate* UMongoDbFindOneAndUpdate::FindOneAndUpdate(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update) {
    return NULL;
}

UMongoDbFindOneAndUpdate::UMongoDbFindOneAndUpdate() {
}

