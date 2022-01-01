#include "MongoDbRunCommand.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbRunCommand;

UMongoDbRunCommand* UMongoDbRunCommand::RunCommand(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, FDocumentValue Command) {
    return NULL;
}

UMongoDbRunCommand::UMongoDbRunCommand() {
}

