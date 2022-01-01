#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DocumentValue.h"
#include "ObjectId.h"
#include "EDocumentValueType.h"
#include "MongoBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UMongoBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static uint8 ToUint8(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static FString ToString(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static FObjectId ToObjectId(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static TMap<FString, FDocumentValue> ToMap(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static FString ToJson(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static int64 ToInt64(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static int32 ToInt32(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static float ToFloat(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static bool ToBool(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static TArray<FDocumentValue> ToArray(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchOnType(const FDocumentValue& DocumentValue, EDocumentValueType& Branches);
    
    UFUNCTION(BlueprintPure)
    static FString ObjectIdToString(const FObjectId& ObjectId);
    
    UFUNCTION(BlueprintPure)
    static FObjectId MakeObjectId(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static bool IsUndefined(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static bool IsNull(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static EDocumentValueType GetType(const FDocumentValue& DocumentValue);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromUint8(uint8 Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromString(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromObjectId(const FObjectId& Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromNull();
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromMap(const TMap<FString, FDocumentValue>& Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromJSON(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromInt64(int64 Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromInt32(int32 Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromFloat(float Value);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromBool(bool bValue);
    
    UFUNCTION(BlueprintPure)
    static FDocumentValue FromArray(const TArray<FDocumentValue>& Value);
    
    UMongoBlueprintLibrary();
};

