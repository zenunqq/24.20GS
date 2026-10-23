#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CreativeVideoPlayerRuntime_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UCreativeVideoPlayerFullscreenGameplayAbility final : public UFortGameplayAbility
{
public:
	TSubclassOf<class UGameplayEffect>            NoCollisionGameplayEffectClass;
	TSubclassOf<class UGameplayEffect>            NoDamageGameplayEffectClass;
	TArray<TSubclassOf<class UGameplayEffect>>    AnimationStateGameplayEffectClasses;
	TSubclassOf<class UUserWidget>                FullscreenWidgetClass;
	ECreativeVideoPlayerFullscreenEffects         FullscreenEffects;
	bool                                          bPromptToConfirmFullscreen;
	bool                                          bIsDismissable;
	uint8                                         Pad_B53[0x5];
	class UFortInputComponent*                    OverrideMovementInputComponent;
	class UFortInputComponent*                    SelectFullscreenModeInputComponent;
	TArray<struct FActiveGameplayEffectHandle>    ActiveGameplayEffects;
	ECreativeVideoPlayerFullscreenEffects         RequestedFullscreenEffects;
	uint8                                         Pad_B79[0x7];
	class UUserWidget*                            VideoPlayerWidget;
	bool                                          bActivatedFullscreen;
	uint8                                         Pad_B89[0x7];

public:
	void ClientLeaveFullscreenVideo();
	void ClientTransitionToFullscreenVideo();
	void EnterFullscreenState();
	void EnterFullscreenStateWithOptions(const struct FCreativeVideoPlayerFullscreenOptions& Options);
	void ExitFullscreenState();
	void HandleEnterFullscreenActionPressed();
	void HandleEnterFullscreenActionReleased();
	void OnFullscreenUIEnds();
	void ServerEnterFullscreenMode();
	void ServerLeaveFullscreenMode();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeVideoPlayerFullscreenGameplayAbility">();
	}
	static class UCreativeVideoPlayerFullscreenGameplayAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeVideoPlayerFullscreenGameplayAbility>();
	}
};
static_assert(alignof(UCreativeVideoPlayerFullscreenGameplayAbility) == 0x000008, "Wrong alignment on UCreativeVideoPlayerFullscreenGameplayAbility");
static_assert(sizeof(UCreativeVideoPlayerFullscreenGameplayAbility) == 0x000B90, "Wrong size on UCreativeVideoPlayerFullscreenGameplayAbility");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, NoCollisionGameplayEffectClass) == 0x000B28, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::NoCollisionGameplayEffectClass' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, NoDamageGameplayEffectClass) == 0x000B30, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::NoDamageGameplayEffectClass' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, AnimationStateGameplayEffectClasses) == 0x000B38, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::AnimationStateGameplayEffectClasses' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, FullscreenWidgetClass) == 0x000B48, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::FullscreenWidgetClass' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, FullscreenEffects) == 0x000B50, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::FullscreenEffects' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, bPromptToConfirmFullscreen) == 0x000B51, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::bPromptToConfirmFullscreen' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, bIsDismissable) == 0x000B52, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::bIsDismissable' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, OverrideMovementInputComponent) == 0x000B58, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::OverrideMovementInputComponent' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, SelectFullscreenModeInputComponent) == 0x000B60, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::SelectFullscreenModeInputComponent' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, ActiveGameplayEffects) == 0x000B68, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::ActiveGameplayEffects' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, RequestedFullscreenEffects) == 0x000B78, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::RequestedFullscreenEffects' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, VideoPlayerWidget) == 0x000B80, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::VideoPlayerWidget' has a wrong offset!");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, bActivatedFullscreen) == 0x000B88, "Member 'UCreativeVideoPlayerFullscreenGameplayAbility::bActivatedFullscreen' has a wrong offset!");

class UCreativeVideoPlayerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ShutdownFullscreenVideoMode(class AController* Controller);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeVideoPlayerFunctionLibrary">();
	}
	static class UCreativeVideoPlayerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeVideoPlayerFunctionLibrary>();
	}
};
static_assert(alignof(UCreativeVideoPlayerFunctionLibrary) == 0x000008, "Wrong alignment on UCreativeVideoPlayerFunctionLibrary");
static_assert(sizeof(UCreativeVideoPlayerFunctionLibrary) == 0x000028, "Wrong size on UCreativeVideoPlayerFunctionLibrary");

class UCreativeVideoPlayerWorldSubsystem final : public UWorldSubsystem
{
public:
	TMulticastInlineDelegate<void(class APlayerController* TargetPlayer, bool bIsClosing)> OnNotifyFullscreenChange;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeVideoPlayerWorldSubsystem">();
	}
	static class UCreativeVideoPlayerWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeVideoPlayerWorldSubsystem>();
	}
};
static_assert(alignof(UCreativeVideoPlayerWorldSubsystem) == 0x000008, "Wrong alignment on UCreativeVideoPlayerWorldSubsystem");
static_assert(sizeof(UCreativeVideoPlayerWorldSubsystem) == 0x000040, "Wrong size on UCreativeVideoPlayerWorldSubsystem");
static_assert(offsetof(UCreativeVideoPlayerWorldSubsystem, OnNotifyFullscreenChange) == 0x000030, "Member 'UCreativeVideoPlayerWorldSubsystem::OnNotifyFullscreenChange' has a wrong offset!");

}
