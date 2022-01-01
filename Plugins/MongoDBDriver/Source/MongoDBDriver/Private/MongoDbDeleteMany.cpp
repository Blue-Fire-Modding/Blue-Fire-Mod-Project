#include "MongoDbDeleteMany.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbDeleteMany;

UMongoDbDeleteMany* UMongoDbDeleteMany::DeleteMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter) {
    return NULL;
}

UMongoDbDeleteMany::UMongoDbDeleteMany() {
}

