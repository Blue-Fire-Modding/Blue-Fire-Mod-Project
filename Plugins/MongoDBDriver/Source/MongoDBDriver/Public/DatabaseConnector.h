#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DatabaseConnector.generated.h"

UINTERFACE(MinimalAPI)
class UDatabaseConnector : public UInterface {
    GENERATED_BODY()
};

class IDatabaseConnector : public IInterface {
    GENERATED_BODY()
public:
};

