#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CopyAndPasteOnClipboard.generated.h"

UCLASS(BlueprintType)
class PROA34_API UCopyAndPasteOnClipboard : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintCallable)
    static FString PasteCodeFromClipboard();
    
    UFUNCTION(BlueprintCallable)
    static void CopyCodeToClipboard(const FString& code);
    
public:
    UCopyAndPasteOnClipboard();
};