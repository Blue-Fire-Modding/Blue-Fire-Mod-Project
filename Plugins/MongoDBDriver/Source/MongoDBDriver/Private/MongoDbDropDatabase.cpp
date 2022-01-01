#include "MongoDbDropDatabase.h"

class UMongoDbDropDatabase;
class UDatabaseConnector;
class IDatabaseConnector;

UMongoDbDropDatabase* UMongoDbDropDatabase::DropDatabase(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName) {
    return NULL;
}

UMongoDbDropDatabase::UMongoDbDropDatabase() {
}

