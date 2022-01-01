#include "MongoDbUpdateMany.h"

class UMongoDbUpdateMany;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbUpdateMany* UMongoDbUpdateMany::UpdateMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update) {
    return NULL;
}

UMongoDbUpdateMany::UMongoDbUpdateMany() {
}

