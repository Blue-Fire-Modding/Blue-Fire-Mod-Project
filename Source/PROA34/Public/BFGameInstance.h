#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EBPLoginStatus.h"
#include "BFGameInstance.generated.h"

UCLASS(NonTransient)
class PROA34_API UBFGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString PlayerNickname;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsUserLogged;
    
    UPROPERTY(BlueprintReadWrite)
    bool ForceLogin;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentControllerIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 AmountUsersLogged;
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementStat(const FString& Stat, int32 Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerUserLoginChanged(bool isLogin, int32 UserId, int32 UserIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerLogoutComplete(int32 LocalUserNum, bool bWasSuccessful);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerLogout();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerLoginChanged(int32 PlayerNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerGameSessionIDChanged(const FString& sessionData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerDisconectedEvent(int32 Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerConnectedEvent(int32 Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NativeOnPhysicalControllerConnectionEvent(bool IsConnected, int32 PlatformUserId, int32 GameUserId, int32 ControllerIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NativeOnPhysicalButtonPressedEvent(int32 ControllerIndex, int32 GameUserId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NativeOnLoginUICloseEvent(int32 LocalPlayerNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NativeOnControllerPairingEvent(int32 ControllerIndex, int32 NewUserId, int32 OldUserId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetXboxType();
    
    UFUNCTION(BlueprintCallable)
    FString GetOnlineId();
    
    UBFGameInstance();
};

