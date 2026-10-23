#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"

namespace SDK
{

enum class EPlayerMappableKeySlot : uint8
{
	First                                    = 0,
	Second                                   = 1,
	Third                                    = 2,
	Fourth                                   = 3,
	Fifth                                    = 4,
	Sixth                                    = 5,
	Seventh                                  = 6,
	Unspecified                              = 7,
	Max                                      = 8,
};

enum class EInputActionValueType : uint8
{
	Boolean                                  = 0,
	Axis1D                                   = 1,
	Axis2D                                   = 2,
	Axis3D                                   = 3,
	EInputActionValueType_MAX                = 4,
};

enum class EMappingQueryResult : uint8
{
	Error_EnhancedInputNotEnabled            = 0,
	Error_InputContextNotInActiveContexts    = 1,
	Error_InvalidAction                      = 2,
	NotMappable                              = 3,
	MappingAvailable                         = 4,
	EMappingQueryResult_MAX                  = 5,
};

enum class EMappingQueryIssue : uint8
{
	NoIssue                                  = 0,
	ReservedByAction                         = 1,
	HidesExistingMapping                     = 2,
	HiddenByExistingMapping                  = 4,
	CollisionWithMappingInSameContext        = 8,
	ForcesTypePromotion                      = 16,
	ForcesTypeDemotion                       = 32,
	EMappingQueryIssue_MAX                   = 33,
};

enum class EPlayerMappableKeySettingBehaviors : uint8
{
	InheritSettingsFromAction                = 0,
	OverrideSettings                         = 1,
	IgnoreSettings                           = 2,
	EPlayerMappableKeySettingBehaviors_MAX   = 3,
};

enum class EInputMappingRebuildType : uint8
{
	None                                     = 0,
	Rebuild                                  = 1,
	RebuildWithFlush                         = 2,
	EInputMappingRebuildType_MAX             = 3,
};

enum class EDeadZoneType : uint8
{
	Axial                                    = 0,
	Radial                                   = 1,
	EDeadZoneType_MAX                        = 2,
};

enum class EFOVScalingType : uint8
{
	Standard                                 = 0,
	UE4_BackCompat                           = 1,
	EFOVScalingType_MAX                      = 2,
};

enum class EInputAxisSwizzle : uint8
{
	YXZ                                      = 0,
	ZYX                                      = 1,
	XZY                                      = 2,
	YZX                                      = 3,
	ZXY                                      = 4,
	EInputAxisSwizzle_MAX                    = 5,
};

enum class ETriggerState : uint8
{
	None                                     = 0,
	Ongoing                                  = 1,
	Triggered                                = 2,
	ETriggerState_MAX                        = 3,
};

enum class ETriggerEvent : uint8
{
	None                                     = 0,
	Triggered                                = 1,
	Started                                  = 2,
	Ongoing                                  = 4,
	Canceled                                 = 8,
	Completed                                = 16,
	ETriggerEvent_MAX                        = 17,
};

enum class ETriggerType : uint8
{
	Explicit                                 = 0,
	Implicit                                 = 1,
	Blocker                                  = 2,
	ETriggerType_MAX                         = 3,
};

enum class ETriggerEventsSupported : uint8
{
	None                                     = 0,
	Instant                                  = 1,
	Uninterruptible                          = 2,
	Ongoing                                  = 4,
	All                                      = 7,
	ETriggerEventsSupported_MAX              = 8,
};

struct alignas(0x08) FInputActionValue final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FInputActionValue) == 0x000008, "Wrong alignment on FInputActionValue");
static_assert(sizeof(FInputActionValue) == 0x000020, "Wrong size on FInputActionValue");

struct FDefaultContextSetting final
{
public:
	TSoftObjectPtr<class UInputMappingContext>    InputMappingContext;
	int32                                         Priority;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FDefaultContextSetting) == 0x000008, "Wrong alignment on FDefaultContextSetting");
static_assert(sizeof(FDefaultContextSetting) == 0x000030, "Wrong size on FDefaultContextSetting");
static_assert(offsetof(FDefaultContextSetting, InputMappingContext) == 0x000000, "Member 'FDefaultContextSetting::InputMappingContext' has a wrong offset!");
static_assert(offsetof(FDefaultContextSetting, Priority) == 0x000028, "Member 'FDefaultContextSetting::Priority' has a wrong offset!");

struct alignas(0x08) FPlayerMappableKeySlot final
{
public:
	uint8                                         Pad_0[0x8];
	int32                                         SlotNumber;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FPlayerMappableKeySlot) == 0x000008, "Wrong alignment on FPlayerMappableKeySlot");
static_assert(sizeof(FPlayerMappableKeySlot) == 0x000010, "Wrong size on FPlayerMappableKeySlot");
static_assert(offsetof(FPlayerMappableKeySlot, SlotNumber) == 0x000008, "Member 'FPlayerMappableKeySlot::SlotNumber' has a wrong offset!");

struct FPlayerMappableKeyProfileCreationArgs final
{
public:
	TSubclassOf<class UEnhancedPlayerMappableKeyProfile> ProfileType;
	struct FGameplayTag                           ProfileIdentifier;
	struct FPlatformUserId                        UserId;
	class FText                                   DisplayName;
	uint8                                         bSetAsCurrentProfile : 1;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FPlayerMappableKeyProfileCreationArgs) == 0x000008, "Wrong alignment on FPlayerMappableKeyProfileCreationArgs");
static_assert(sizeof(FPlayerMappableKeyProfileCreationArgs) == 0x000030, "Wrong size on FPlayerMappableKeyProfileCreationArgs");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, ProfileType) == 0x000000, "Member 'FPlayerMappableKeyProfileCreationArgs::ProfileType' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, ProfileIdentifier) == 0x000008, "Member 'FPlayerMappableKeyProfileCreationArgs::ProfileIdentifier' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, UserId) == 0x00000C, "Member 'FPlayerMappableKeyProfileCreationArgs::UserId' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, DisplayName) == 0x000010, "Member 'FPlayerMappableKeyProfileCreationArgs::DisplayName' has a wrong offset!");

struct FMappingQueryIssue final
{
public:
	EMappingQueryIssue                            Issue;
	uint8                                         Pad_1[0x7];
	class UInputMappingContext*                   BlockingContext;
	class UInputAction*                           BlockingAction;
};
static_assert(alignof(FMappingQueryIssue) == 0x000008, "Wrong alignment on FMappingQueryIssue");
static_assert(sizeof(FMappingQueryIssue) == 0x000018, "Wrong size on FMappingQueryIssue");
static_assert(offsetof(FMappingQueryIssue, Issue) == 0x000000, "Member 'FMappingQueryIssue::Issue' has a wrong offset!");
static_assert(offsetof(FMappingQueryIssue, BlockingContext) == 0x000008, "Member 'FMappingQueryIssue::BlockingContext' has a wrong offset!");
static_assert(offsetof(FMappingQueryIssue, BlockingAction) == 0x000010, "Member 'FMappingQueryIssue::BlockingAction' has a wrong offset!");

struct FPlayerKeyMapping final
{
public:
	class FName                                   MappingName;
	uint8                                         Pad_4[0x4];
	class FText                                   DisplayName;
	EPlayerMappableKeySlot                        Slot;
	uint8                                         bIsDirty : 1;
	uint8                                         Pad_22[0x6];
	struct FKey                                   DefaultKey;
	struct FKey                                   CurrentKey;
	struct FHardwareDeviceIdentifier              HardwareDeviceId;
	class UInputAction*                           AssociatedInputAction;
};
static_assert(alignof(FPlayerKeyMapping) == 0x000008, "Wrong alignment on FPlayerKeyMapping");
static_assert(sizeof(FPlayerKeyMapping) == 0x000070, "Wrong size on FPlayerKeyMapping");
static_assert(offsetof(FPlayerKeyMapping, MappingName) == 0x000000, "Member 'FPlayerKeyMapping::MappingName' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, DisplayName) == 0x000008, "Member 'FPlayerKeyMapping::DisplayName' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, Slot) == 0x000020, "Member 'FPlayerKeyMapping::Slot' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, DefaultKey) == 0x000028, "Member 'FPlayerKeyMapping::DefaultKey' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, CurrentKey) == 0x000040, "Member 'FPlayerKeyMapping::CurrentKey' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, HardwareDeviceId) == 0x000058, "Member 'FPlayerKeyMapping::HardwareDeviceId' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, AssociatedInputAction) == 0x000068, "Member 'FPlayerKeyMapping::AssociatedInputAction' has a wrong offset!");

struct FPlayerMappableKeyOptions final
{
public:
	class UObject*                                MetaData;
	class FName                                   Name;
	uint8                                         Pad_C[0x4];
	class FText                                   DisplayName;
	class FText                                   DisplayCategory;
};
static_assert(alignof(FPlayerMappableKeyOptions) == 0x000008, "Wrong alignment on FPlayerMappableKeyOptions");
static_assert(sizeof(FPlayerMappableKeyOptions) == 0x000040, "Wrong size on FPlayerMappableKeyOptions");
static_assert(offsetof(FPlayerMappableKeyOptions, MetaData) == 0x000000, "Member 'FPlayerMappableKeyOptions::MetaData' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, Name) == 0x000008, "Member 'FPlayerMappableKeyOptions::Name' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayName) == 0x000010, "Member 'FPlayerMappableKeyOptions::DisplayName' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayCategory) == 0x000028, "Member 'FPlayerMappableKeyOptions::DisplayCategory' has a wrong offset!");

struct FMapPlayerKeyArgs final
{
public:
	class FName                                   MappingName;
	EPlayerMappableKeySlot                        Slot;
	uint8                                         Pad_5[0x3];
	struct FKey                                   NewKey;
	class FName                                   HardwareDeviceId;
	struct FGameplayTag                           ProfileId;
	uint8                                         bCreateMatchingSlotIfNeeded : 1;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FMapPlayerKeyArgs) == 0x000008, "Wrong alignment on FMapPlayerKeyArgs");
static_assert(sizeof(FMapPlayerKeyArgs) == 0x000030, "Wrong size on FMapPlayerKeyArgs");
static_assert(offsetof(FMapPlayerKeyArgs, MappingName) == 0x000000, "Member 'FMapPlayerKeyArgs::MappingName' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, Slot) == 0x000004, "Member 'FMapPlayerKeyArgs::Slot' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, NewKey) == 0x000008, "Member 'FMapPlayerKeyArgs::NewKey' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, HardwareDeviceId) == 0x000020, "Member 'FMapPlayerKeyArgs::HardwareDeviceId' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, ProfileId) == 0x000024, "Member 'FMapPlayerKeyArgs::ProfileId' has a wrong offset!");

struct FKeyMappingRow final
{
public:
	TSet<struct FPlayerKeyMapping>                Mappings;
};
static_assert(alignof(FKeyMappingRow) == 0x000008, "Wrong alignment on FKeyMappingRow");
static_assert(sizeof(FKeyMappingRow) == 0x000050, "Wrong size on FKeyMappingRow");
static_assert(offsetof(FKeyMappingRow, Mappings) == 0x000000, "Member 'FKeyMappingRow::Mappings' has a wrong offset!");

struct FEnhancedActionKeyMapping final
{
public:
	TArray<class UInputTrigger*>                  Triggers;
	TArray<class UInputModifier*>                 Modifiers;
	class UInputAction*                           Action;
	struct FKey                                   Key;
	uint8                                         bShouldBeIgnored : 1;
	EPlayerMappableKeySettingBehaviors            SettingBehavior;
	uint8                                         Pad_42[0x6];
	class UPlayerMappableKeySettings*             PlayerMappableKeySettings;
};
static_assert(alignof(FEnhancedActionKeyMapping) == 0x000008, "Wrong alignment on FEnhancedActionKeyMapping");
static_assert(sizeof(FEnhancedActionKeyMapping) == 0x000050, "Wrong size on FEnhancedActionKeyMapping");
static_assert(offsetof(FEnhancedActionKeyMapping, Triggers) == 0x000000, "Member 'FEnhancedActionKeyMapping::Triggers' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Modifiers) == 0x000010, "Member 'FEnhancedActionKeyMapping::Modifiers' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Action) == 0x000020, "Member 'FEnhancedActionKeyMapping::Action' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Key) == 0x000028, "Member 'FEnhancedActionKeyMapping::Key' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, SettingBehavior) == 0x000041, "Member 'FEnhancedActionKeyMapping::SettingBehavior' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, PlayerMappableKeySettings) == 0x000048, "Member 'FEnhancedActionKeyMapping::PlayerMappableKeySettings' has a wrong offset!");

struct FBlueprintEnhancedInputActionBinding final
{
public:
	class UInputAction*                           InputAction;
	ETriggerEvent                                 TriggerEvent;
	uint8                                         Pad_9[0x3];
	class FName                                   FunctionNameToBind;
};
static_assert(alignof(FBlueprintEnhancedInputActionBinding) == 0x000008, "Wrong alignment on FBlueprintEnhancedInputActionBinding");
static_assert(sizeof(FBlueprintEnhancedInputActionBinding) == 0x000010, "Wrong size on FBlueprintEnhancedInputActionBinding");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, InputAction) == 0x000000, "Member 'FBlueprintEnhancedInputActionBinding::InputAction' has a wrong offset!");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, TriggerEvent) == 0x000008, "Member 'FBlueprintEnhancedInputActionBinding::TriggerEvent' has a wrong offset!");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, FunctionNameToBind) == 0x00000C, "Member 'FBlueprintEnhancedInputActionBinding::FunctionNameToBind' has a wrong offset!");

struct FModifyContextOptions final
{
public:
	uint8                                         bIgnoreAllPressedKeysUntilRelease : 1;
	uint8                                         bForceImmediately : 1;
};
static_assert(alignof(FModifyContextOptions) == 0x000001, "Wrong alignment on FModifyContextOptions");
static_assert(sizeof(FModifyContextOptions) == 0x000001, "Wrong size on FModifyContextOptions");

struct alignas(0x08) FInjectedInputArray final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FInjectedInputArray) == 0x000008, "Wrong alignment on FInjectedInputArray");
static_assert(sizeof(FInjectedInputArray) == 0x000010, "Wrong size on FInjectedInputArray");

struct FInputActionInstance final
{
public:
	class UInputAction*                           SourceAction;
	uint8                                         Pad_8[0xB];
	ETriggerEvent                                 TriggerEvent;
	float                                         LastTriggeredWorldTime;
	TArray<class UInputTrigger*>                  Triggers;
	TArray<class UInputModifier*>                 Modifiers;
	uint8                                         Pad_38[0x20];
	float                                         ElapsedProcessedTime;
	float                                         ElapsedTriggeredTime;
};
static_assert(alignof(FInputActionInstance) == 0x000008, "Wrong alignment on FInputActionInstance");
static_assert(sizeof(FInputActionInstance) == 0x000060, "Wrong size on FInputActionInstance");
static_assert(offsetof(FInputActionInstance, SourceAction) == 0x000000, "Member 'FInputActionInstance::SourceAction' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, TriggerEvent) == 0x000013, "Member 'FInputActionInstance::TriggerEvent' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, LastTriggeredWorldTime) == 0x000014, "Member 'FInputActionInstance::LastTriggeredWorldTime' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, Triggers) == 0x000018, "Member 'FInputActionInstance::Triggers' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, Modifiers) == 0x000028, "Member 'FInputActionInstance::Modifiers' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, ElapsedProcessedTime) == 0x000058, "Member 'FInputActionInstance::ElapsedProcessedTime' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, ElapsedTriggeredTime) == 0x00005C, "Member 'FInputActionInstance::ElapsedTriggeredTime' has a wrong offset!");

struct FBlueprintInputDebugKeyDelegateBinding final
{
public:
	struct FInputChord                            InputChord;
	EInputEvent                                   InputKeyEvent;
	uint8                                         Pad_21[0x3];
	class FName                                   FunctionNameToBind;
	bool                                          bExecuteWhenPaused;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FBlueprintInputDebugKeyDelegateBinding) == 0x000008, "Wrong alignment on FBlueprintInputDebugKeyDelegateBinding");
static_assert(sizeof(FBlueprintInputDebugKeyDelegateBinding) == 0x000030, "Wrong size on FBlueprintInputDebugKeyDelegateBinding");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputChord) == 0x000000, "Member 'FBlueprintInputDebugKeyDelegateBinding::InputChord' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputKeyEvent) == 0x000020, "Member 'FBlueprintInputDebugKeyDelegateBinding::InputKeyEvent' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, FunctionNameToBind) == 0x000024, "Member 'FBlueprintInputDebugKeyDelegateBinding::FunctionNameToBind' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, bExecuteWhenPaused) == 0x000028, "Member 'FBlueprintInputDebugKeyDelegateBinding::bExecuteWhenPaused' has a wrong offset!");

struct FInputComboStepData final
{
public:
	class UInputAction*                           ComboStepAction;
	uint8                                         ComboStepCompletionStates;
	uint8                                         Pad_9[0x3];
	float                                         TimeToPressKey;
};
static_assert(alignof(FInputComboStepData) == 0x000008, "Wrong alignment on FInputComboStepData");
static_assert(sizeof(FInputComboStepData) == 0x000010, "Wrong size on FInputComboStepData");
static_assert(offsetof(FInputComboStepData, ComboStepAction) == 0x000000, "Member 'FInputComboStepData::ComboStepAction' has a wrong offset!");
static_assert(offsetof(FInputComboStepData, ComboStepCompletionStates) == 0x000008, "Member 'FInputComboStepData::ComboStepCompletionStates' has a wrong offset!");
static_assert(offsetof(FInputComboStepData, TimeToPressKey) == 0x00000C, "Member 'FInputComboStepData::TimeToPressKey' has a wrong offset!");

struct FInputCancelAction final
{
public:
	class UInputAction*                           CancelAction;
	uint8                                         CancellationStates;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FInputCancelAction) == 0x000008, "Wrong alignment on FInputCancelAction");
static_assert(sizeof(FInputCancelAction) == 0x000010, "Wrong size on FInputCancelAction");
static_assert(offsetof(FInputCancelAction, CancelAction) == 0x000000, "Member 'FInputCancelAction::CancelAction' has a wrong offset!");
static_assert(offsetof(FInputCancelAction, CancellationStates) == 0x000008, "Member 'FInputCancelAction::CancellationStates' has a wrong offset!");

}
