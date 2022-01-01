#include "MongoDbGetEstimatedDocumentCount.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbGetEstimatedDocumentCount;

UMongoDbGetEstimatedDocumentCount* UMongoDbGetEstimatedDocumentCount::GetEstimatedDocumentCount(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName) {
    return NULL;
}

UMongoDbGetEstimatedDocumentCount::UMongoDbGetEstimatedDocumentCount() {
}

