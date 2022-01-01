#include "MongoDbRenameCollection.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbRenameCollection;

UMongoDbRenameCollection* UMongoDbRenameCollection::RenameCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, const FString& NewCollectionName, bool bOverwriteExisting) {
    return NULL;
}

UMongoDbRenameCollection::UMongoDbRenameCollection() {
}

