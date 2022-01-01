#include "GameAnalytics.h"

void UGameAnalytics::SetCustomDimension03(const FString& CustomDimension) {
}

void UGameAnalytics::SetCustomDimension02(const FString& CustomDimension) {
}

void UGameAnalytics::SetCustomDimension01(const FString& CustomDimension) {
}

void UGameAnalytics::OnQuit() {
}

bool UGameAnalytics::IsRemoteConfigsReady() {
    return false;
}

FString UGameAnalytics::GetRemoteConfigsValueAsStringWithDefaultValue(const FString& Key, const FString& DefaultValue) {
    return TEXT("");
}

FString UGameAnalytics::GetRemoteConfigsValueAsString(const FString& Key) {
    return TEXT("");
}

FString UGameAnalytics::GetRemoteConfigsContentAsString() {
    return TEXT("");
}

FString UGameAnalytics::GetABTestingVariantId() {
    return TEXT("");
}

FString UGameAnalytics::GetABTestingId() {
    return TEXT("");
}

void UGameAnalytics::AddResourceEvent(EGAResourceFlowType FlowType, const FString& Currency, float Amount, const FString& ItemType, const FString& ItemId) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03, int32 Score) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, const FString& Progression03) {
}

void UGameAnalytics::AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02, int32 Score) {
}

void UGameAnalytics::AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, const FString& Progression01, const FString& Progression02) {
}

void UGameAnalytics::AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, const FString& Progression01, int32 Score) {
}

void UGameAnalytics::AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, const FString& Progression01) {
}

void UGameAnalytics::AddErrorEvent(EGAErrorSeverity Severity, const FString& Message) {
}

void UGameAnalytics::AddDesignEventWithValue(const FString& EventId, float Value) {
}

void UGameAnalytics::AddDesignEvent(const FString& EventId) {
}

void UGameAnalytics::AddBusinessEventIOS(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt) {
}

void UGameAnalytics::AddBusinessEventAndroid(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType, const FString& Receipt, const FString& Signature) {
}

void UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType) {
}

void UGameAnalytics::AddBusinessEvent(const FString& Currency, int32 Amount, const FString& ItemType, const FString& ItemId, const FString& CartType) {
}

void UGameAnalytics::AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, EGAAdError noAdReason) {
}

void UGameAnalytics::AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement, int64 Duration) {
}

void UGameAnalytics::AddAdEvent(EGAAdAction Action, EGAAdType adType, const FString& adSdkName, const FString& adPlacement) {
}

UGameAnalytics::UGameAnalytics() {
}

