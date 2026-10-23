#pragma once

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "EnhancedInput_structs.hpp"
#include "DeveloperSettings_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UEnhancedPlayerMappableKeyProfile final : public UObject
{
public:
	struct FGameplayTag                           ProfileIdentifier;
	struct FPlatformUserId                        OwningUserId;
	class FText                                   DisplayName;
	TMap<class FName, struct FKeyMappingRow>      PlayerMappedKeys;

public:
	void ResetMappingToDefault(const class FName InMappingName);
	void ResetToDefault();
	void SetDisplayName(const class FText& NewDisplayName);

	void DumpProfileToLog() const;
	int32 GetMappedKeysInRow(const class FName MappingName, TArray<struct FKey>* OutKeys) const;
	int32 GetMappingNamesForKey(const struct FKey& InKey, TArray<class FName>* OutMappingNames) const;
	const TMap<class FName, struct FKeyMappingRow> GetPlayerMappingRows() const;
	const class FText GetProfileDisplayName() const;
	const struct FGameplayTag GetProfileIdentifer() const;
	void K2_FindKeyMapping(struct FPlayerKeyMapping* OutKeyMapping, const struct FMapPlayerKeyArgs& InArgs) const;
	class FString ToString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedPlayerMappableKeyProfile">();
	}
	static class UEnhancedPlayerMappableKeyProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedPlayerMappableKeyProfile>();
	}
};
static_assert(alignof(UEnhancedPlayerMappableKeyProfile) == 0x000008, "Wrong alignment on UEnhancedPlayerMappableKeyProfile");
static_assert(sizeof(UEnhancedPlayerMappableKeyProfile) == 0x000098, "Wrong size on UEnhancedPlayerMappableKeyProfile");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, ProfileIdentifier) == 0x000028, "Member 'UEnhancedPlayerMappableKeyProfile::ProfileIdentifier' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, OwningUserId) == 0x00002C, "Member 'UEnhancedPlayerMappableKeyProfile::OwningUserId' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, DisplayName) == 0x000030, "Member 'UEnhancedPlayerMappableKeyProfile::DisplayName' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, PlayerMappedKeys) == 0x000048, "Member 'UEnhancedPlayerMappableKeyProfile::PlayerMappedKeys' has a wrong offset!");

class UEnhancedInputUserSettings final : public USaveGame
{
public:
	TMulticastInlineDelegate<void(class UEnhancedInputUserSettings* Settings)> OnSettingsChanged;
	TMulticastInlineDelegate<void()>              OnSettingsApplied;
	uint8                                         Pad_48[0x20];
	struct FGameplayTag                           CurrentProfileIdentifier;
	uint8                                         Pad_6C[0x4];
	TMap<struct FGameplayTag, class UEnhancedPlayerMappableKeyProfile*> SavedKeyProfiles;
	TWeakObjectPtr<class UEnhancedPlayerInput>    OwningPlayerInput;
	TSet<class UInputMappingContext*>             RegisteredMappingContexts;

public:
	void ApplySettings();
	void AsyncSaveSettings();
	class UEnhancedPlayerMappableKeyProfile* CreateNewKeyProfile(const struct FPlayerMappableKeyProfileCreationArgs& InArgs);
	void MapPlayerKey(const struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason);
	bool RegisterInputMappingContext(class UInputMappingContext* IMC);
	bool RegisterInputMappingContexts(const TSet<class UInputMappingContext*>& MappingContexts);
	void SaveSettings();
	bool SetKeyProfile(const struct FGameplayTag& InProfileId);
	void UnMapPlayerKey(const struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason);
	bool UnregisterInputMappingContext(const class UInputMappingContext* IMC);
	bool UnregisterInputMappingContexts(const TSet<class UInputMappingContext*>& MappingContexts);

	const TSet<struct FPlayerKeyMapping> FindMappingsInRow(const class FName MappingName) const;
	class UEnhancedPlayerMappableKeyProfile* GetCurrentKeyProfile() const;
	const struct FGameplayTag GetCurrentKeyProfileIdentifier() const;
	class UEnhancedPlayerMappableKeyProfile* GetKeyProfileWithIdentifier(const struct FGameplayTag& ProfileId) const;
	bool IsMappingContextRegistered(const class UInputMappingContext* IMC) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputUserSettings">();
	}
	static class UEnhancedInputUserSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputUserSettings>();
	}
};
static_assert(alignof(UEnhancedInputUserSettings) == 0x000008, "Wrong alignment on UEnhancedInputUserSettings");
static_assert(sizeof(UEnhancedInputUserSettings) == 0x000118, "Wrong size on UEnhancedInputUserSettings");
static_assert(offsetof(UEnhancedInputUserSettings, OnSettingsChanged) == 0x000028, "Member 'UEnhancedInputUserSettings::OnSettingsChanged' has a wrong offset!");
static_assert(offsetof(UEnhancedInputUserSettings, OnSettingsApplied) == 0x000038, "Member 'UEnhancedInputUserSettings::OnSettingsApplied' has a wrong offset!");
static_assert(offsetof(UEnhancedInputUserSettings, CurrentProfileIdentifier) == 0x000068, "Member 'UEnhancedInputUserSettings::CurrentProfileIdentifier' has a wrong offset!");
static_assert(offsetof(UEnhancedInputUserSettings, SavedKeyProfiles) == 0x000070, "Member 'UEnhancedInputUserSettings::SavedKeyProfiles' has a wrong offset!");
static_assert(offsetof(UEnhancedInputUserSettings, OwningPlayerInput) == 0x0000C0, "Member 'UEnhancedInputUserSettings::OwningPlayerInput' has a wrong offset!");
static_assert(offsetof(UEnhancedInputUserSettings, RegisteredMappingContexts) == 0x0000C8, "Member 'UEnhancedInputUserSettings::RegisteredMappingContexts' has a wrong offset!");

class UEnhancedInputActionDelegateBinding final : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputActionDelegateBinding">();
	}
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputActionDelegateBinding>();
	}
};
static_assert(alignof(UEnhancedInputActionDelegateBinding) == 0x000008, "Wrong alignment on UEnhancedInputActionDelegateBinding");
static_assert(sizeof(UEnhancedInputActionDelegateBinding) == 0x000038, "Wrong size on UEnhancedInputActionDelegateBinding");
static_assert(offsetof(UEnhancedInputActionDelegateBinding, InputActionDelegateBindings) == 0x000028, "Member 'UEnhancedInputActionDelegateBinding::InputActionDelegateBindings' has a wrong offset!");

class UEnhancedInputActionValueBinding final : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputActionValueBinding">();
	}
	static class UEnhancedInputActionValueBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputActionValueBinding>();
	}
};
static_assert(alignof(UEnhancedInputActionValueBinding) == 0x000008, "Wrong alignment on UEnhancedInputActionValueBinding");
static_assert(sizeof(UEnhancedInputActionValueBinding) == 0x000038, "Wrong size on UEnhancedInputActionValueBinding");
static_assert(offsetof(UEnhancedInputActionValueBinding, InputActionValueBindings) == 0x000028, "Member 'UEnhancedInputActionValueBinding::InputActionValueBindings' has a wrong offset!");

class UEnhancedInputComponent final : public UInputComponent
{
public:
	uint8                                         Pad_128[0x38];

public:
	struct FInputActionValue GetBoundActionValue(const class UInputAction* Action) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputComponent">();
	}
	static class UEnhancedInputComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputComponent>();
	}
};
static_assert(alignof(UEnhancedInputComponent) == 0x000008, "Wrong alignment on UEnhancedInputComponent");
static_assert(sizeof(UEnhancedInputComponent) == 0x000160, "Wrong size on UEnhancedInputComponent");

class UEnhancedInputDeveloperSettings final : public UDeveloperSettingsBackedByCVars
{
public:
	TArray<struct FDefaultContextSetting>         DefaultMappingContexts;
	TArray<struct FDefaultContextSetting>         DefaultWorldSubsystemMappingContexts;
	struct FPerPlatformSettings                   PlatformSettings;
	TSoftClassPtr<class UClass>                   UserSettingsClass;
	TSoftClassPtr<class UClass>                   DefaultPlayerMappableKeyProfileClass;
	TSoftClassPtr<class UClass>                   DefaultWorldInputClass;
	uint8                                         bEnableUserSettings : 1;
	uint8                                         bEnableDefaultMappingContexts : 1;
	uint8                                         bShouldOnlyTriggerLastActionInChord : 1;
	uint8                                         bLogOnDeprecatedConfigUsed : 1;
	uint8                                         bEnableWorldSubsystem : 1;
	uint8                                         bShouldLogAllWorldSubsystemInputs : 1;
	uint8                                         Pad_D9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputDeveloperSettings">();
	}
	static class UEnhancedInputDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputDeveloperSettings>();
	}
};
static_assert(alignof(UEnhancedInputDeveloperSettings) == 0x000008, "Wrong alignment on UEnhancedInputDeveloperSettings");
static_assert(sizeof(UEnhancedInputDeveloperSettings) == 0x0000E0, "Wrong size on UEnhancedInputDeveloperSettings");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultMappingContexts) == 0x000030, "Member 'UEnhancedInputDeveloperSettings::DefaultMappingContexts' has a wrong offset!");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultWorldSubsystemMappingContexts) == 0x000040, "Member 'UEnhancedInputDeveloperSettings::DefaultWorldSubsystemMappingContexts' has a wrong offset!");
static_assert(offsetof(UEnhancedInputDeveloperSettings, PlatformSettings) == 0x000050, "Member 'UEnhancedInputDeveloperSettings::PlatformSettings' has a wrong offset!");
static_assert(offsetof(UEnhancedInputDeveloperSettings, UserSettingsClass) == 0x000060, "Member 'UEnhancedInputDeveloperSettings::UserSettingsClass' has a wrong offset!");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultPlayerMappableKeyProfileClass) == 0x000088, "Member 'UEnhancedInputDeveloperSettings::DefaultPlayerMappableKeyProfileClass' has a wrong offset!");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultWorldInputClass) == 0x0000B0, "Member 'UEnhancedInputDeveloperSettings::DefaultWorldInputClass' has a wrong offset!");

class UEnhancedInputLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, EInputActionValueType* Type);
	static double Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue);
	static struct FVector2D Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue);
	static struct FVector Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue);
	static bool Conv_InputActionValueToBool(const struct FInputActionValue& InValue);
	static class FString Conv_InputActionValueToString(const struct FInputActionValue& ActionValue);
	static struct FInputActionValue GetBoundActionValue(class AActor* Actor, const class UInputAction* Action);
	static struct FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();
	static struct FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();
	static class FName GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	static class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	static struct FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();
	static struct FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();
	static bool IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
	static struct FInputActionValue MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& MatchValueType);
	static struct FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType);
	static void RequestRebuildControlMappingsUsingContext(const class UInputMappingContext* Context, bool bForceImmediately);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputLibrary">();
	}
	static class UEnhancedInputLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputLibrary>();
	}
};
static_assert(alignof(UEnhancedInputLibrary) == 0x000008, "Wrong alignment on UEnhancedInputLibrary");
static_assert(sizeof(UEnhancedInputLibrary) == 0x000028, "Wrong size on UEnhancedInputLibrary");

class UEnhancedInputPlatformData final : public UObject
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;

public:
	const class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputPlatformData">();
	}
	static class UEnhancedInputPlatformData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputPlatformData>();
	}
};
static_assert(alignof(UEnhancedInputPlatformData) == 0x000008, "Wrong alignment on UEnhancedInputPlatformData");
static_assert(sizeof(UEnhancedInputPlatformData) == 0x000078, "Wrong size on UEnhancedInputPlatformData");
static_assert(offsetof(UEnhancedInputPlatformData, MappingContextRedirects) == 0x000028, "Member 'UEnhancedInputPlatformData::MappingContextRedirects' has a wrong offset!");

class UEnhancedInputPlatformSettings final : public UPlatformSettings
{
public:
	TArray<TSoftClassPtr<class UClass>>           InputData;
	TArray<TSubclassOf<class UEnhancedInputPlatformData>> InputDataClasses;
	bool                                          bShouldLogMappingContextRedirects;
	uint8                                         Pad_61[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputPlatformSettings">();
	}
	static class UEnhancedInputPlatformSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputPlatformSettings>();
	}
};
static_assert(alignof(UEnhancedInputPlatformSettings) == 0x000008, "Wrong alignment on UEnhancedInputPlatformSettings");
static_assert(sizeof(UEnhancedInputPlatformSettings) == 0x000068, "Wrong size on UEnhancedInputPlatformSettings");
static_assert(offsetof(UEnhancedInputPlatformSettings, InputData) == 0x000040, "Member 'UEnhancedInputPlatformSettings::InputData' has a wrong offset!");
static_assert(offsetof(UEnhancedInputPlatformSettings, InputDataClasses) == 0x000050, "Member 'UEnhancedInputPlatformSettings::InputDataClasses' has a wrong offset!");
static_assert(offsetof(UEnhancedInputPlatformSettings, bShouldLogMappingContextRedirects) == 0x000060, "Member 'UEnhancedInputPlatformSettings::bShouldLogMappingContextRedirects' has a wrong offset!");

class IEnhancedInputSubsystemInterface final : public IInterface
{
public:
	void AddMappingContext(const class UInputMappingContext* MappingContext, int32 Priority, const struct FModifyContextOptions& Options);
	void AddPlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
	void ClearAllMappings();
	void InjectInputForAction(const class UInputAction* Action, const struct FInputActionValue& RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	void InjectInputForPlayerMapping(const class FName MappingName, const struct FInputActionValue& RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	void InjectInputVectorForAction(const class UInputAction* Action, const struct FVector& Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	void InjectInputVectorForPlayerMapping(const class FName MappingName, const struct FVector& Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	int32 K2_AddPlayerMappedKeyInSlot(const class FName MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options);
	int32 K2_RemovePlayerMappedKeyInSlot(const class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options);
	void OnUserKeyProfileChanged(const class UEnhancedPlayerMappableKeyProfile* InNewProfile);
	void OnUserSettingsChanged(class UEnhancedInputUserSettings* Settings);
	EMappingQueryResult QueryMapKeyInActiveContextSet(const class UInputMappingContext* InputContext, const class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
	EMappingQueryResult QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, const class UInputMappingContext* InputContext, const class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
	void RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options);
	int32 RemoveAllPlayerMappedKeysForMapping(const class FName MappingName, const struct FModifyContextOptions& Options);
	void RemoveMappingContext(const class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options);
	void RemovePlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
	void RequestRebuildControlMappings(const struct FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);

	TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings() const;
	TArray<struct FKey> GetAllPlayerMappedKeys(const class FName MappingName) const;
	class UEnhancedInputUserSettings* GetUserSettings() const;
	bool HasMappingContext(const class UInputMappingContext* MappingContext, int32* OutFoundPriority) const;
	struct FKey K2_GetPlayerMappedKeyInSlot(const class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot) const;
	TArray<struct FKey> QueryKeysMappedToAction(const class UInputAction* Action) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputSubsystemInterface">();
	}
	static class IEnhancedInputSubsystemInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IEnhancedInputSubsystemInterface>();
	}
};
static_assert(alignof(IEnhancedInputSubsystemInterface) == 0x000008, "Wrong alignment on IEnhancedInputSubsystemInterface");
static_assert(sizeof(IEnhancedInputSubsystemInterface) == 0x000028, "Wrong size on IEnhancedInputSubsystemInterface");

class UEnhancedInputLocalPlayerSubsystem final : public ULocalPlayerSubsystem
{
public:
	uint8                                         Pad_30[0x1A0];
	TMulticastInlineDelegate<void()>              ControlMappingsRebuiltDelegate;
	class UEnhancedInputUserSettings*             UserSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputLocalPlayerSubsystem">();
	}
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputLocalPlayerSubsystem>();
	}
};
static_assert(alignof(UEnhancedInputLocalPlayerSubsystem) == 0x000008, "Wrong alignment on UEnhancedInputLocalPlayerSubsystem");
static_assert(sizeof(UEnhancedInputLocalPlayerSubsystem) == 0x0001E8, "Wrong size on UEnhancedInputLocalPlayerSubsystem");
static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, ControlMappingsRebuiltDelegate) == 0x0001D0, "Member 'UEnhancedInputLocalPlayerSubsystem::ControlMappingsRebuiltDelegate' has a wrong offset!");
static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, UserSettings) == 0x0001E0, "Member 'UEnhancedInputLocalPlayerSubsystem::UserSettings' has a wrong offset!");

class UEnhancedInputWorldSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x1A0];
	class UEnhancedPlayerInput*                   PlayerInput;
	uint8                                         Pad_1D8[0x10];
	TArray<TWeakObjectPtr<class UInputComponent>> CurrentInputStack;

public:
	void AddActorInputComponent(class AActor* Actor);
	bool RemoveActorInputComponent(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputWorldSubsystem">();
	}
	static class UEnhancedInputWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputWorldSubsystem>();
	}
};
static_assert(alignof(UEnhancedInputWorldSubsystem) == 0x000008, "Wrong alignment on UEnhancedInputWorldSubsystem");
static_assert(sizeof(UEnhancedInputWorldSubsystem) == 0x0001F8, "Wrong size on UEnhancedInputWorldSubsystem");
static_assert(offsetof(UEnhancedInputWorldSubsystem, PlayerInput) == 0x0001D0, "Member 'UEnhancedInputWorldSubsystem::PlayerInput' has a wrong offset!");
static_assert(offsetof(UEnhancedInputWorldSubsystem, CurrentInputStack) == 0x0001E8, "Member 'UEnhancedInputWorldSubsystem::CurrentInputStack' has a wrong offset!");

class UEnhancedPlayerInput : public UPlayerInput
{
public:
	TMap<class UInputMappingContext*, int32>      AppliedInputContexts;
	TArray<struct FEnhancedActionKeyMapping>      EnhancedActionMappings;
	uint8                                         Pad_4F8[0x50];
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;
	uint8                                         Pad_598[0xA0];
	TMap<struct FKey, struct FVector>             KeysPressedThisTick;
	TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;
	TSet<class UInputAction*>                     LastInjectedActions;
	uint8                                         Pad_728[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedPlayerInput">();
	}
	static class UEnhancedPlayerInput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedPlayerInput>();
	}
};
static_assert(alignof(UEnhancedPlayerInput) == 0x000008, "Wrong alignment on UEnhancedPlayerInput");
static_assert(sizeof(UEnhancedPlayerInput) == 0x000740, "Wrong size on UEnhancedPlayerInput");
static_assert(offsetof(UEnhancedPlayerInput, AppliedInputContexts) == 0x000498, "Member 'UEnhancedPlayerInput::AppliedInputContexts' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerInput, EnhancedActionMappings) == 0x0004E8, "Member 'UEnhancedPlayerInput::EnhancedActionMappings' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerInput, ActionInstanceData) == 0x000548, "Member 'UEnhancedPlayerInput::ActionInstanceData' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerInput, KeysPressedThisTick) == 0x000638, "Member 'UEnhancedPlayerInput::KeysPressedThisTick' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerInput, InputsInjectedThisTick) == 0x000688, "Member 'UEnhancedPlayerInput::InputsInjectedThisTick' has a wrong offset!");
static_assert(offsetof(UEnhancedPlayerInput, LastInjectedActions) == 0x0006D8, "Member 'UEnhancedPlayerInput::LastInjectedActions' has a wrong offset!");

class UInputAction final : public UDataAsset
{
public:
	class FText                                   ActionDescription;
	bool                                          bConsumeInput;
	bool                                          bTriggerWhenPaused;
	bool                                          bReserveAllMappings;
	EInputActionValueType                         ValueType;
	uint8                                         Pad_4C[0x4];
	TArray<class UInputTrigger*>                  Triggers;
	TArray<class UInputModifier*>                 Modifiers;
	class UPlayerMappableKeySettings*             PlayerMappableKeySettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputAction">();
	}
	static class UInputAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputAction>();
	}
};
static_assert(alignof(UInputAction) == 0x000008, "Wrong alignment on UInputAction");
static_assert(sizeof(UInputAction) == 0x000078, "Wrong size on UInputAction");
static_assert(offsetof(UInputAction, ActionDescription) == 0x000030, "Member 'UInputAction::ActionDescription' has a wrong offset!");
static_assert(offsetof(UInputAction, bConsumeInput) == 0x000048, "Member 'UInputAction::bConsumeInput' has a wrong offset!");
static_assert(offsetof(UInputAction, bTriggerWhenPaused) == 0x000049, "Member 'UInputAction::bTriggerWhenPaused' has a wrong offset!");
static_assert(offsetof(UInputAction, bReserveAllMappings) == 0x00004A, "Member 'UInputAction::bReserveAllMappings' has a wrong offset!");
static_assert(offsetof(UInputAction, ValueType) == 0x00004B, "Member 'UInputAction::ValueType' has a wrong offset!");
static_assert(offsetof(UInputAction, Triggers) == 0x000050, "Member 'UInputAction::Triggers' has a wrong offset!");
static_assert(offsetof(UInputAction, Modifiers) == 0x000060, "Member 'UInputAction::Modifiers' has a wrong offset!");
static_assert(offsetof(UInputAction, PlayerMappableKeySettings) == 0x000070, "Member 'UInputAction::PlayerMappableKeySettings' has a wrong offset!");

class UInputDebugKeyDelegateBinding final : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputDebugKeyDelegateBinding">();
	}
	static class UInputDebugKeyDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputDebugKeyDelegateBinding>();
	}
};
static_assert(alignof(UInputDebugKeyDelegateBinding) == 0x000008, "Wrong alignment on UInputDebugKeyDelegateBinding");
static_assert(sizeof(UInputDebugKeyDelegateBinding) == 0x000038, "Wrong size on UInputDebugKeyDelegateBinding");
static_assert(offsetof(UInputDebugKeyDelegateBinding, InputDebugKeyDelegateBindings) == 0x000028, "Member 'UInputDebugKeyDelegateBinding::InputDebugKeyDelegateBindings' has a wrong offset!");

class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>      Mappings;
	class FText                                   ContextDescription;

public:
	struct FEnhancedActionKeyMapping MapKey(const class UInputAction* Action, const struct FKey& ToKey);
	void UnmapAction(const class UInputAction* Action);
	void UnmapAll();
	void UnmapAllKeysFromAction(const class UInputAction* Action);
	void UnmapKey(const class UInputAction* Action, const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputMappingContext">();
	}
	static class UInputMappingContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputMappingContext>();
	}
};
static_assert(alignof(UInputMappingContext) == 0x000008, "Wrong alignment on UInputMappingContext");
static_assert(sizeof(UInputMappingContext) == 0x000058, "Wrong size on UInputMappingContext");
static_assert(offsetof(UInputMappingContext, Mappings) == 0x000030, "Member 'UInputMappingContext::Mappings' has a wrong offset!");
static_assert(offsetof(UInputMappingContext, ContextDescription) == 0x000040, "Member 'UInputMappingContext::ContextDescription' has a wrong offset!");

class UInputModifier : public UObject
{
public:
	struct FLinearColor GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue) const;
	struct FInputActionValue ModifyRaw(const class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifier">();
	}
	static class UInputModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifier>();
	}
};
static_assert(alignof(UInputModifier) == 0x000008, "Wrong alignment on UInputModifier");
static_assert(sizeof(UInputModifier) == 0x000028, "Wrong size on UInputModifier");

class UInputModifierDeadZone final : public UInputModifier
{
public:
	float                                         LowerThreshold;
	float                                         UpperThreshold;
	EDeadZoneType                                 Type;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierDeadZone">();
	}
	static class UInputModifierDeadZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierDeadZone>();
	}
};
static_assert(alignof(UInputModifierDeadZone) == 0x000008, "Wrong alignment on UInputModifierDeadZone");
static_assert(sizeof(UInputModifierDeadZone) == 0x000038, "Wrong size on UInputModifierDeadZone");
static_assert(offsetof(UInputModifierDeadZone, LowerThreshold) == 0x000028, "Member 'UInputModifierDeadZone::LowerThreshold' has a wrong offset!");
static_assert(offsetof(UInputModifierDeadZone, UpperThreshold) == 0x00002C, "Member 'UInputModifierDeadZone::UpperThreshold' has a wrong offset!");
static_assert(offsetof(UInputModifierDeadZone, Type) == 0x000030, "Member 'UInputModifierDeadZone::Type' has a wrong offset!");

class UInputModifierScalar final : public UInputModifier
{
public:
	struct FVector                                Scalar;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierScalar">();
	}
	static class UInputModifierScalar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierScalar>();
	}
};
static_assert(alignof(UInputModifierScalar) == 0x000008, "Wrong alignment on UInputModifierScalar");
static_assert(sizeof(UInputModifierScalar) == 0x000040, "Wrong size on UInputModifierScalar");
static_assert(offsetof(UInputModifierScalar, Scalar) == 0x000028, "Member 'UInputModifierScalar::Scalar' has a wrong offset!");

class UInputModifierScaleByDeltaTime final : public UInputModifier
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierScaleByDeltaTime">();
	}
	static class UInputModifierScaleByDeltaTime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierScaleByDeltaTime>();
	}
};
static_assert(alignof(UInputModifierScaleByDeltaTime) == 0x000008, "Wrong alignment on UInputModifierScaleByDeltaTime");
static_assert(sizeof(UInputModifierScaleByDeltaTime) == 0x000028, "Wrong size on UInputModifierScaleByDeltaTime");

class UInputModifierNegate final : public UInputModifier
{
public:
	bool                                          bX;
	bool                                          bY;
	bool                                          bZ;
	uint8                                         Pad_2B[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierNegate">();
	}
	static class UInputModifierNegate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierNegate>();
	}
};
static_assert(alignof(UInputModifierNegate) == 0x000008, "Wrong alignment on UInputModifierNegate");
static_assert(sizeof(UInputModifierNegate) == 0x000030, "Wrong size on UInputModifierNegate");
static_assert(offsetof(UInputModifierNegate, bX) == 0x000028, "Member 'UInputModifierNegate::bX' has a wrong offset!");
static_assert(offsetof(UInputModifierNegate, bY) == 0x000029, "Member 'UInputModifierNegate::bY' has a wrong offset!");
static_assert(offsetof(UInputModifierNegate, bZ) == 0x00002A, "Member 'UInputModifierNegate::bZ' has a wrong offset!");

class UInputModifierSmooth final : public UInputModifier
{
public:
	uint8                                         Pad_28[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierSmooth">();
	}
	static class UInputModifierSmooth* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierSmooth>();
	}
};
static_assert(alignof(UInputModifierSmooth) == 0x000008, "Wrong alignment on UInputModifierSmooth");
static_assert(sizeof(UInputModifierSmooth) == 0x000058, "Wrong size on UInputModifierSmooth");

class UInputModifierResponseCurveExponential final : public UInputModifier
{
public:
	struct FVector                                CurveExponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierResponseCurveExponential">();
	}
	static class UInputModifierResponseCurveExponential* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierResponseCurveExponential>();
	}
};
static_assert(alignof(UInputModifierResponseCurveExponential) == 0x000008, "Wrong alignment on UInputModifierResponseCurveExponential");
static_assert(sizeof(UInputModifierResponseCurveExponential) == 0x000040, "Wrong size on UInputModifierResponseCurveExponential");
static_assert(offsetof(UInputModifierResponseCurveExponential, CurveExponent) == 0x000028, "Member 'UInputModifierResponseCurveExponential::CurveExponent' has a wrong offset!");

class UInputModifierResponseCurveUser final : public UInputModifier
{
public:
	class UCurveFloat*                            ResponseX;
	class UCurveFloat*                            ResponseY;
	class UCurveFloat*                            ResponseZ;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierResponseCurveUser">();
	}
	static class UInputModifierResponseCurveUser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierResponseCurveUser>();
	}
};
static_assert(alignof(UInputModifierResponseCurveUser) == 0x000008, "Wrong alignment on UInputModifierResponseCurveUser");
static_assert(sizeof(UInputModifierResponseCurveUser) == 0x000040, "Wrong size on UInputModifierResponseCurveUser");
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseX) == 0x000028, "Member 'UInputModifierResponseCurveUser::ResponseX' has a wrong offset!");
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseY) == 0x000030, "Member 'UInputModifierResponseCurveUser::ResponseY' has a wrong offset!");
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseZ) == 0x000038, "Member 'UInputModifierResponseCurveUser::ResponseZ' has a wrong offset!");

class UInputModifierFOVScaling final : public UInputModifier
{
public:
	float                                         FOVScale;
	EFOVScalingType                               FOVScalingType;
	uint8                                         Pad_2D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierFOVScaling">();
	}
	static class UInputModifierFOVScaling* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierFOVScaling>();
	}
};
static_assert(alignof(UInputModifierFOVScaling) == 0x000008, "Wrong alignment on UInputModifierFOVScaling");
static_assert(sizeof(UInputModifierFOVScaling) == 0x000030, "Wrong size on UInputModifierFOVScaling");
static_assert(offsetof(UInputModifierFOVScaling, FOVScale) == 0x000028, "Member 'UInputModifierFOVScaling::FOVScale' has a wrong offset!");
static_assert(offsetof(UInputModifierFOVScaling, FOVScalingType) == 0x00002C, "Member 'UInputModifierFOVScaling::FOVScalingType' has a wrong offset!");

class UInputModifierToWorldSpace final : public UInputModifier
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierToWorldSpace">();
	}
	static class UInputModifierToWorldSpace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierToWorldSpace>();
	}
};
static_assert(alignof(UInputModifierToWorldSpace) == 0x000008, "Wrong alignment on UInputModifierToWorldSpace");
static_assert(sizeof(UInputModifierToWorldSpace) == 0x000028, "Wrong size on UInputModifierToWorldSpace");

class UInputModifierSwizzleAxis final : public UInputModifier
{
public:
	EInputAxisSwizzle                             Order;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputModifierSwizzleAxis">();
	}
	static class UInputModifierSwizzleAxis* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputModifierSwizzleAxis>();
	}
};
static_assert(alignof(UInputModifierSwizzleAxis) == 0x000008, "Wrong alignment on UInputModifierSwizzleAxis");
static_assert(sizeof(UInputModifierSwizzleAxis) == 0x000030, "Wrong size on UInputModifierSwizzleAxis");
static_assert(offsetof(UInputModifierSwizzleAxis, Order) == 0x000028, "Member 'UInputModifierSwizzleAxis::Order' has a wrong offset!");

class UInputTrigger : public UObject
{
public:
	float                                         ActuationThreshold;
	bool                                          bShouldAlwaysTick;
	uint8                                         Pad_2D[0x3];
	struct FInputActionValue                      LastValue;

public:
	ETriggerState UpdateState(const class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime);

	ETriggerType GetTriggerType() const;
	bool IsActuated(const struct FInputActionValue& ForValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTrigger">();
	}
	static class UInputTrigger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTrigger>();
	}
};
static_assert(alignof(UInputTrigger) == 0x000008, "Wrong alignment on UInputTrigger");
static_assert(sizeof(UInputTrigger) == 0x000050, "Wrong size on UInputTrigger");
static_assert(offsetof(UInputTrigger, ActuationThreshold) == 0x000028, "Member 'UInputTrigger::ActuationThreshold' has a wrong offset!");
static_assert(offsetof(UInputTrigger, bShouldAlwaysTick) == 0x00002C, "Member 'UInputTrigger::bShouldAlwaysTick' has a wrong offset!");
static_assert(offsetof(UInputTrigger, LastValue) == 0x000030, "Member 'UInputTrigger::LastValue' has a wrong offset!");

class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                         HeldDuration;
	bool                                          bAffectedByTimeDilation;
	uint8                                         Pad_55[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerTimedBase">();
	}
	static class UInputTriggerTimedBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerTimedBase>();
	}
};
static_assert(alignof(UInputTriggerTimedBase) == 0x000008, "Wrong alignment on UInputTriggerTimedBase");
static_assert(sizeof(UInputTriggerTimedBase) == 0x000058, "Wrong size on UInputTriggerTimedBase");
static_assert(offsetof(UInputTriggerTimedBase, HeldDuration) == 0x000050, "Member 'UInputTriggerTimedBase::HeldDuration' has a wrong offset!");
static_assert(offsetof(UInputTriggerTimedBase, bAffectedByTimeDilation) == 0x000054, "Member 'UInputTriggerTimedBase::bAffectedByTimeDilation' has a wrong offset!");

class UInputTriggerDown final : public UInputTrigger
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerDown">();
	}
	static class UInputTriggerDown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerDown>();
	}
};
static_assert(alignof(UInputTriggerDown) == 0x000008, "Wrong alignment on UInputTriggerDown");
static_assert(sizeof(UInputTriggerDown) == 0x000050, "Wrong size on UInputTriggerDown");

class UInputTriggerPressed final : public UInputTrigger
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerPressed">();
	}
	static class UInputTriggerPressed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerPressed>();
	}
};
static_assert(alignof(UInputTriggerPressed) == 0x000008, "Wrong alignment on UInputTriggerPressed");
static_assert(sizeof(UInputTriggerPressed) == 0x000050, "Wrong size on UInputTriggerPressed");

class UInputTriggerReleased final : public UInputTrigger
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerReleased">();
	}
	static class UInputTriggerReleased* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerReleased>();
	}
};
static_assert(alignof(UInputTriggerReleased) == 0x000008, "Wrong alignment on UInputTriggerReleased");
static_assert(sizeof(UInputTriggerReleased) == 0x000050, "Wrong size on UInputTriggerReleased");

class UInputTriggerHold final : public UInputTriggerTimedBase
{
public:
	uint8                                         Pad_58[0x4];
	float                                         HoldTimeThreshold;
	bool                                          bIsOneShot;
	uint8                                         Pad_61[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerHold">();
	}
	static class UInputTriggerHold* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerHold>();
	}
};
static_assert(alignof(UInputTriggerHold) == 0x000008, "Wrong alignment on UInputTriggerHold");
static_assert(sizeof(UInputTriggerHold) == 0x000068, "Wrong size on UInputTriggerHold");
static_assert(offsetof(UInputTriggerHold, HoldTimeThreshold) == 0x00005C, "Member 'UInputTriggerHold::HoldTimeThreshold' has a wrong offset!");
static_assert(offsetof(UInputTriggerHold, bIsOneShot) == 0x000060, "Member 'UInputTriggerHold::bIsOneShot' has a wrong offset!");

class UInputTriggerHoldAndRelease final : public UInputTriggerTimedBase
{
public:
	float                                         HoldTimeThreshold;
	uint8                                         Pad_5C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerHoldAndRelease">();
	}
	static class UInputTriggerHoldAndRelease* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerHoldAndRelease>();
	}
};
static_assert(alignof(UInputTriggerHoldAndRelease) == 0x000008, "Wrong alignment on UInputTriggerHoldAndRelease");
static_assert(sizeof(UInputTriggerHoldAndRelease) == 0x000060, "Wrong size on UInputTriggerHoldAndRelease");
static_assert(offsetof(UInputTriggerHoldAndRelease, HoldTimeThreshold) == 0x000058, "Member 'UInputTriggerHoldAndRelease::HoldTimeThreshold' has a wrong offset!");

class UInputTriggerTap final : public UInputTriggerTimedBase
{
public:
	float                                         TapReleaseTimeThreshold;
	uint8                                         Pad_5C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerTap">();
	}
	static class UInputTriggerTap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerTap>();
	}
};
static_assert(alignof(UInputTriggerTap) == 0x000008, "Wrong alignment on UInputTriggerTap");
static_assert(sizeof(UInputTriggerTap) == 0x000060, "Wrong size on UInputTriggerTap");
static_assert(offsetof(UInputTriggerTap, TapReleaseTimeThreshold) == 0x000058, "Member 'UInputTriggerTap::TapReleaseTimeThreshold' has a wrong offset!");

class UInputTriggerPulse final : public UInputTriggerTimedBase
{
public:
	uint8                                         Pad_58[0x4];
	bool                                          bTriggerOnStart;
	uint8                                         Pad_5D[0x3];
	float                                         Interval;
	int32                                         TriggerLimit;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerPulse">();
	}
	static class UInputTriggerPulse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerPulse>();
	}
};
static_assert(alignof(UInputTriggerPulse) == 0x000008, "Wrong alignment on UInputTriggerPulse");
static_assert(sizeof(UInputTriggerPulse) == 0x000068, "Wrong size on UInputTriggerPulse");
static_assert(offsetof(UInputTriggerPulse, bTriggerOnStart) == 0x00005C, "Member 'UInputTriggerPulse::bTriggerOnStart' has a wrong offset!");
static_assert(offsetof(UInputTriggerPulse, Interval) == 0x000060, "Member 'UInputTriggerPulse::Interval' has a wrong offset!");
static_assert(offsetof(UInputTriggerPulse, TriggerLimit) == 0x000064, "Member 'UInputTriggerPulse::TriggerLimit' has a wrong offset!");

class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                           ChordAction;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerChordAction">();
	}
	static class UInputTriggerChordAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerChordAction>();
	}
};
static_assert(alignof(UInputTriggerChordAction) == 0x000008, "Wrong alignment on UInputTriggerChordAction");
static_assert(sizeof(UInputTriggerChordAction) == 0x000058, "Wrong size on UInputTriggerChordAction");
static_assert(offsetof(UInputTriggerChordAction, ChordAction) == 0x000050, "Member 'UInputTriggerChordAction::ChordAction' has a wrong offset!");

class UInputTriggerChordBlocker final : public UInputTriggerChordAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerChordBlocker">();
	}
	static class UInputTriggerChordBlocker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerChordBlocker>();
	}
};
static_assert(alignof(UInputTriggerChordBlocker) == 0x000008, "Wrong alignment on UInputTriggerChordBlocker");
static_assert(sizeof(UInputTriggerChordBlocker) == 0x000058, "Wrong size on UInputTriggerChordBlocker");

class UInputTriggerCombo final : public UInputTrigger
{
public:
	int32                                         CurrentComboStepIndex;
	float                                         CurrentTimeBetweenComboSteps;
	TArray<struct FInputComboStepData>            ComboActions;
	TArray<struct FInputCancelAction>             InputCancelActions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputTriggerCombo">();
	}
	static class UInputTriggerCombo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTriggerCombo>();
	}
};
static_assert(alignof(UInputTriggerCombo) == 0x000008, "Wrong alignment on UInputTriggerCombo");
static_assert(sizeof(UInputTriggerCombo) == 0x000078, "Wrong size on UInputTriggerCombo");
static_assert(offsetof(UInputTriggerCombo, CurrentComboStepIndex) == 0x000050, "Member 'UInputTriggerCombo::CurrentComboStepIndex' has a wrong offset!");
static_assert(offsetof(UInputTriggerCombo, CurrentTimeBetweenComboSteps) == 0x000054, "Member 'UInputTriggerCombo::CurrentTimeBetweenComboSteps' has a wrong offset!");
static_assert(offsetof(UInputTriggerCombo, ComboActions) == 0x000058, "Member 'UInputTriggerCombo::ComboActions' has a wrong offset!");
static_assert(offsetof(UInputTriggerCombo, InputCancelActions) == 0x000068, "Member 'UInputTriggerCombo::InputCancelActions' has a wrong offset!");

class UPlayerMappableInputConfig final : public UPrimaryDataAsset
{
public:
	class FName                                   ConfigName;
	uint8                                         Pad_34[0x4];
	class FText                                   ConfigDisplayName;
	bool                                          bIsDeprecated;
	uint8                                         Pad_51[0x7];
	class UObject*                                MetaData;
	TMap<class UInputMappingContext*, int32>      Contexts;

public:
	void ResetToDefault();

	const class FName GetConfigName() const;
	const class FText GetDisplayName() const;
	TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(const class UInputAction* InAction) const;
	struct FEnhancedActionKeyMapping GetMappingByName(const class FName MappingName) const;
	const TMap<class UInputMappingContext*, int32> GetMappingContexts() const;
	class UObject* GetMetadata() const;
	TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys() const;
	const bool IsDeprecated() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerMappableInputConfig">();
	}
	static class UPlayerMappableInputConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerMappableInputConfig>();
	}
};
static_assert(alignof(UPlayerMappableInputConfig) == 0x000008, "Wrong alignment on UPlayerMappableInputConfig");
static_assert(sizeof(UPlayerMappableInputConfig) == 0x0000B0, "Wrong size on UPlayerMappableInputConfig");
static_assert(offsetof(UPlayerMappableInputConfig, ConfigName) == 0x000030, "Member 'UPlayerMappableInputConfig::ConfigName' has a wrong offset!");
static_assert(offsetof(UPlayerMappableInputConfig, ConfigDisplayName) == 0x000038, "Member 'UPlayerMappableInputConfig::ConfigDisplayName' has a wrong offset!");
static_assert(offsetof(UPlayerMappableInputConfig, bIsDeprecated) == 0x000050, "Member 'UPlayerMappableInputConfig::bIsDeprecated' has a wrong offset!");
static_assert(offsetof(UPlayerMappableInputConfig, MetaData) == 0x000058, "Member 'UPlayerMappableInputConfig::MetaData' has a wrong offset!");
static_assert(offsetof(UPlayerMappableInputConfig, Contexts) == 0x000060, "Member 'UPlayerMappableInputConfig::Contexts' has a wrong offset!");

class UPlayerMappableKeySettings : public UObject
{
public:
	class UObject*                                MetaData;
	class FName                                   Name_0;
	uint8                                         Pad_34[0x4];
	class FText                                   DisplayName;
	class FText                                   DisplayCategory;
	struct FGameplayTagContainer                  SupportedKeyProfiles;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerMappableKeySettings">();
	}
	static class UPlayerMappableKeySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerMappableKeySettings>();
	}
};
static_assert(alignof(UPlayerMappableKeySettings) == 0x000008, "Wrong alignment on UPlayerMappableKeySettings");
static_assert(sizeof(UPlayerMappableKeySettings) == 0x000088, "Wrong size on UPlayerMappableKeySettings");
static_assert(offsetof(UPlayerMappableKeySettings, MetaData) == 0x000028, "Member 'UPlayerMappableKeySettings::MetaData' has a wrong offset!");
static_assert(offsetof(UPlayerMappableKeySettings, Name_0) == 0x000030, "Member 'UPlayerMappableKeySettings::Name_0' has a wrong offset!");
static_assert(offsetof(UPlayerMappableKeySettings, DisplayName) == 0x000038, "Member 'UPlayerMappableKeySettings::DisplayName' has a wrong offset!");
static_assert(offsetof(UPlayerMappableKeySettings, DisplayCategory) == 0x000050, "Member 'UPlayerMappableKeySettings::DisplayCategory' has a wrong offset!");
static_assert(offsetof(UPlayerMappableKeySettings, SupportedKeyProfiles) == 0x000068, "Member 'UPlayerMappableKeySettings::SupportedKeyProfiles' has a wrong offset!");

}
