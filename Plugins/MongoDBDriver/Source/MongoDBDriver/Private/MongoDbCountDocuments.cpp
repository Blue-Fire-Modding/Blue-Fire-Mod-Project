#include "MongoDbCountDocuments.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbCountDocuments;

UMongoDbCountDocuments* UMongoDbCountDocuments::CountDocuments(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbCountDocuments::UMongoDbCountDocuments() {
}

