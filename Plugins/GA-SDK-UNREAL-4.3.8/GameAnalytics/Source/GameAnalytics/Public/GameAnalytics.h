#pragma once
#include "CoreMinimal.h"
#include "EGAAdType.h"
#include "EGAAdAction.h"
#include "EGAErrorSeverity.h"
#include "UObject/Object.h"
#include "EGAProgressionStatus.h"
#include "EGAResourceFlowType.h"
#include "EGAAdError.h"
#include "GameAnalytics.generated.h"

UCLASS(BlueprintType)
class GAMEANALYTICS_API UGameAnalytics : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetCustomDimension03(const FString& CustomDimension);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomDimension02(const FString& CustomDimension);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomDimension01(const FString& CustomDimension);
    
    UFUNCTION(BlueprintCallable)
    static void OnQuit();
    
    UFUNCTION(BlueprintCallable)
    static bool IsRemoteConfigsReady();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRemoteConfigsValueAsStringWithDefaultValue(const FString& Key, const FString& DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRemoteConfigsValueAsString(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRemoteConfigsContentAsString();
    
    UFUNCTION(BlueprintCallable)
    static FString GetABTestingVariantId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetABTestingId();
    
    UFUNCTION(BlueprintCallable)
    static void AddResourceEvent(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, const FString& Progression01);
    
    UFUNCTION(BlueprintCallable)
    static void AddErrorEvent(EGAErrorSeverity Severity, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEventWithValue(const FString& EventId, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddDesignEvent(const FString& EventId);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventIOS(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndroid(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEventAndAutoFetchReceipt(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType);
    
    UFUNCTION(BlueprintCallable)
    static void AddBusinessEvent(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration);
    
    UFUNCTION(BlueprintCallable)
    static void AddAdEvent(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement);
    
    UGameAnalytics();
};

