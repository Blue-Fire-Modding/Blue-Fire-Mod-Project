#include "MongoDbInsertMany.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbInsertMany;

UMongoDbInsertMany* UMongoDbInsertMany::InsertMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, TArray<FDocumentValue> Value) {
    return NULL;
}

UMongoDbInsertMany::UMongoDbInsertMany() {
}

