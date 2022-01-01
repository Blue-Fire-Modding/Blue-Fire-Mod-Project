#include "MongoDbCreateIndex.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbCreateIndex;

UMongoDbCreateIndex* UMongoDbCreateIndex::CreateIndex(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Keys, FDocumentValue IndexOptions) {
    return NULL;
}

UMongoDbCreateIndex::UMongoDbCreateIndex() {
}

