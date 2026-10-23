#pragma once

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ECommonNumericType : uint8
{
	Number                                   = 0,
	Percentage                               = 1,
	Seconds                                  = 2,
	Distance                                 = 3,
	ECommonNumericType_MAX                   = 4,
};

enum class ERichTextInlineIconDisplayMode : uint8
{
	IconOnly                                 = 0,
	TextOnly                                 = 1,
	IconAndText                              = 2,
	MAX                                      = 3,
};

enum class EInputActionState : uint8
{
	Enabled                                  = 0,
	Disabled                                 = 1,
	Hidden                                   = 2,
	HiddenAndDisabled                        = 3,
	EInputActionState_MAX                    = 4,
};

enum class ECommonSwitcherTransition : uint8
{
	FadeOnly                                 = 0,
	Horizontal                               = 1,
	Vertical                                 = 2,
	Zoom                                     = 3,
	ECommonSwitcherTransition_MAX            = 4,
};

enum class ETransitionCurve : uint8
{
	Linear                                   = 0,
	QuadIn                                   = 1,
	QuadOut                                  = 2,
	QuadInOut                                = 3,
	CubicIn                                  = 4,
	CubicOut                                 = 5,
	CubicInOut                               = 6,
	ETransitionCurve_MAX                     = 7,
};

struct FCommonNumberFormattingOptions final
{
public:
	ERoundingMode                                 RoundingMode;
	bool                                          UseGrouping;
	uint8                                         Pad_2[0x2];
	int32                                         MinimumIntegralDigits;
	int32                                         MaximumIntegralDigits;
	int32                                         MinimumFractionalDigits;
	int32                                         MaximumFractionalDigits;
};
static_assert(alignof(FCommonNumberFormattingOptions) == 0x000004, "Wrong alignment on FCommonNumberFormattingOptions");
static_assert(sizeof(FCommonNumberFormattingOptions) == 0x000014, "Wrong size on FCommonNumberFormattingOptions");
static_assert(offsetof(FCommonNumberFormattingOptions, RoundingMode) == 0x000000, "Member 'FCommonNumberFormattingOptions::RoundingMode' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, UseGrouping) == 0x000001, "Member 'FCommonNumberFormattingOptions::UseGrouping' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MinimumIntegralDigits) == 0x000004, "Member 'FCommonNumberFormattingOptions::MinimumIntegralDigits' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MaximumIntegralDigits) == 0x000008, "Member 'FCommonNumberFormattingOptions::MaximumIntegralDigits' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MinimumFractionalDigits) == 0x00000C, "Member 'FCommonNumberFormattingOptions::MinimumFractionalDigits' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MaximumFractionalDigits) == 0x000010, "Member 'FCommonNumberFormattingOptions::MaximumFractionalDigits' has a wrong offset!");

struct FUITag : public FGameplayTag
{
};
static_assert(alignof(FUITag) == 0x000004, "Wrong alignment on FUITag");
static_assert(sizeof(FUITag) == 0x000004, "Wrong size on FUITag");

struct FCommonRegisteredTabInfo final
{
public:
	int32                                         TabIndex;
	uint8                                         Pad_4[0x4];
	class UCommonButtonBase*                      TabButton;
	class UWidget*                                ContentInstance;
};
static_assert(alignof(FCommonRegisteredTabInfo) == 0x000008, "Wrong alignment on FCommonRegisteredTabInfo");
static_assert(sizeof(FCommonRegisteredTabInfo) == 0x000018, "Wrong size on FCommonRegisteredTabInfo");
static_assert(offsetof(FCommonRegisteredTabInfo, TabIndex) == 0x000000, "Member 'FCommonRegisteredTabInfo::TabIndex' has a wrong offset!");
static_assert(offsetof(FCommonRegisteredTabInfo, TabButton) == 0x000008, "Member 'FCommonRegisteredTabInfo::TabButton' has a wrong offset!");
static_assert(offsetof(FCommonRegisteredTabInfo, ContentInstance) == 0x000010, "Member 'FCommonRegisteredTabInfo::ContentInstance' has a wrong offset!");

struct FCommonInputActionHandlerData final
{
public:
	struct FDataTableRowHandle                    InputActionRow;
	EInputActionState                             State;
	uint8                                         Pad_11[0xF];
};
static_assert(alignof(FCommonInputActionHandlerData) == 0x000008, "Wrong alignment on FCommonInputActionHandlerData");
static_assert(sizeof(FCommonInputActionHandlerData) == 0x000020, "Wrong size on FCommonInputActionHandlerData");
static_assert(offsetof(FCommonInputActionHandlerData, InputActionRow) == 0x000000, "Member 'FCommonInputActionHandlerData::InputActionRow' has a wrong offset!");
static_assert(offsetof(FCommonInputActionHandlerData, State) == 0x000010, "Member 'FCommonInputActionHandlerData::State' has a wrong offset!");

struct FUIActionTag final : public FUITag
{
};
static_assert(alignof(FUIActionTag) == 0x000004, "Wrong alignment on FUIActionTag");
static_assert(sizeof(FUIActionTag) == 0x000004, "Wrong size on FUIActionTag");

struct FCommonButtonStyleOptionalSlateSound final
{
public:
	bool                                          bHasSound;
	uint8                                         Pad_1[0x7];
	struct FSlateSound                            sound;
};
static_assert(alignof(FCommonButtonStyleOptionalSlateSound) == 0x000008, "Wrong alignment on FCommonButtonStyleOptionalSlateSound");
static_assert(sizeof(FCommonButtonStyleOptionalSlateSound) == 0x000020, "Wrong size on FCommonButtonStyleOptionalSlateSound");
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, bHasSound) == 0x000000, "Member 'FCommonButtonStyleOptionalSlateSound::bHasSound' has a wrong offset!");
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, sound) == 0x000008, "Member 'FCommonButtonStyleOptionalSlateSound::sound' has a wrong offset!");

struct FRichTextIconData final : public FTableRowBase
{
public:
	class FText                                   DisplayName;
	TSoftObjectPtr<class UObject>                 ResourceObject;
	struct FVector2D                              ImageSize;
};
static_assert(alignof(FRichTextIconData) == 0x000008, "Wrong alignment on FRichTextIconData");
static_assert(sizeof(FRichTextIconData) == 0x000058, "Wrong size on FRichTextIconData");
static_assert(offsetof(FRichTextIconData, DisplayName) == 0x000008, "Member 'FRichTextIconData::DisplayName' has a wrong offset!");
static_assert(offsetof(FRichTextIconData, ResourceObject) == 0x000020, "Member 'FRichTextIconData::ResourceObject' has a wrong offset!");
static_assert(offsetof(FRichTextIconData, ImageSize) == 0x000048, "Member 'FRichTextIconData::ImageSize' has a wrong offset!");

struct FCommonInputTypeInfo final
{
public:
	struct FKey                                   Key;
	EInputActionState                             OverrrideState;
	bool                                          bActionRequiresHold;
	uint8                                         Pad_1A[0x2];
	float                                         HoldTime;
	struct FSlateBrush                            OverrideBrush;
};
static_assert(alignof(FCommonInputTypeInfo) == 0x000010, "Wrong alignment on FCommonInputTypeInfo");
static_assert(sizeof(FCommonInputTypeInfo) == 0x0000E0, "Wrong size on FCommonInputTypeInfo");
static_assert(offsetof(FCommonInputTypeInfo, Key) == 0x000000, "Member 'FCommonInputTypeInfo::Key' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, OverrrideState) == 0x000018, "Member 'FCommonInputTypeInfo::OverrrideState' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, bActionRequiresHold) == 0x000019, "Member 'FCommonInputTypeInfo::bActionRequiresHold' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, HoldTime) == 0x00001C, "Member 'FCommonInputTypeInfo::HoldTime' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, OverrideBrush) == 0x000020, "Member 'FCommonInputTypeInfo::OverrideBrush' has a wrong offset!");

struct FCommonInputActionDataBase : public FTableRowBase
{
public:
	class FText                                   DisplayName;
	class FText                                   HoldDisplayName;
	int32                                         NavBarPriority;
	uint8                                         Pad_3C[0x4];
	struct FCommonInputTypeInfo                   KeyboardInputTypeInfo;
	struct FCommonInputTypeInfo                   DefaultGamepadInputTypeInfo;
	TMap<class FName, struct FCommonInputTypeInfo> GamepadInputOverrides;
	struct FCommonInputTypeInfo                   TouchInputTypeInfo;
};
static_assert(alignof(FCommonInputActionDataBase) == 0x000010, "Wrong alignment on FCommonInputActionDataBase");
static_assert(sizeof(FCommonInputActionDataBase) == 0x000330, "Wrong size on FCommonInputActionDataBase");
static_assert(offsetof(FCommonInputActionDataBase, DisplayName) == 0x000008, "Member 'FCommonInputActionDataBase::DisplayName' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, HoldDisplayName) == 0x000020, "Member 'FCommonInputActionDataBase::HoldDisplayName' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, NavBarPriority) == 0x000038, "Member 'FCommonInputActionDataBase::NavBarPriority' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, KeyboardInputTypeInfo) == 0x000040, "Member 'FCommonInputActionDataBase::KeyboardInputTypeInfo' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, DefaultGamepadInputTypeInfo) == 0x000120, "Member 'FCommonInputActionDataBase::DefaultGamepadInputTypeInfo' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, GamepadInputOverrides) == 0x000200, "Member 'FCommonInputActionDataBase::GamepadInputOverrides' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, TouchInputTypeInfo) == 0x000250, "Member 'FCommonInputActionDataBase::TouchInputTypeInfo' has a wrong offset!");

struct FUIActionKeyMapping final
{
public:
	struct FKey                                   Key;
	float                                         HoldTime;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FUIActionKeyMapping) == 0x000008, "Wrong alignment on FUIActionKeyMapping");
static_assert(sizeof(FUIActionKeyMapping) == 0x000020, "Wrong size on FUIActionKeyMapping");
static_assert(offsetof(FUIActionKeyMapping, Key) == 0x000000, "Member 'FUIActionKeyMapping::Key' has a wrong offset!");
static_assert(offsetof(FUIActionKeyMapping, HoldTime) == 0x000018, "Member 'FUIActionKeyMapping::HoldTime' has a wrong offset!");

struct FUIInputAction final
{
public:
	struct FUIActionTag                           ActionTag;
	uint8                                         Pad_4[0x4];
	class FText                                   DefaultDisplayName;
	TArray<struct FUIActionKeyMapping>            KeyMappings;
};
static_assert(alignof(FUIInputAction) == 0x000008, "Wrong alignment on FUIInputAction");
static_assert(sizeof(FUIInputAction) == 0x000030, "Wrong size on FUIInputAction");
static_assert(offsetof(FUIInputAction, ActionTag) == 0x000000, "Member 'FUIInputAction::ActionTag' has a wrong offset!");
static_assert(offsetof(FUIInputAction, DefaultDisplayName) == 0x000008, "Member 'FUIInputAction::DefaultDisplayName' has a wrong offset!");
static_assert(offsetof(FUIInputAction, KeyMappings) == 0x000020, "Member 'FUIInputAction::KeyMappings' has a wrong offset!");

struct FCommonAnalogCursorSettings final
{
public:
	int32                                         PreprocessorPriority;
	bool                                          bEnableCursorAcceleration;
	uint8                                         Pad_5[0x3];
	float                                         CursorAcceleration;
	float                                         CursorMaxSpeed;
	float                                         CursorDeadZone;
	float                                         HoverSlowdownFactor;
	float                                         ScrollDeadZone;
	float                                         ScrollUpdatePeriod;
	float                                         ScrollMultiplier;
};
static_assert(alignof(FCommonAnalogCursorSettings) == 0x000004, "Wrong alignment on FCommonAnalogCursorSettings");
static_assert(sizeof(FCommonAnalogCursorSettings) == 0x000024, "Wrong size on FCommonAnalogCursorSettings");
static_assert(offsetof(FCommonAnalogCursorSettings, PreprocessorPriority) == 0x000000, "Member 'FCommonAnalogCursorSettings::PreprocessorPriority' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, bEnableCursorAcceleration) == 0x000004, "Member 'FCommonAnalogCursorSettings::bEnableCursorAcceleration' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorAcceleration) == 0x000008, "Member 'FCommonAnalogCursorSettings::CursorAcceleration' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorMaxSpeed) == 0x00000C, "Member 'FCommonAnalogCursorSettings::CursorMaxSpeed' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorDeadZone) == 0x000010, "Member 'FCommonAnalogCursorSettings::CursorDeadZone' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, HoverSlowdownFactor) == 0x000014, "Member 'FCommonAnalogCursorSettings::HoverSlowdownFactor' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollDeadZone) == 0x000018, "Member 'FCommonAnalogCursorSettings::ScrollDeadZone' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollUpdatePeriod) == 0x00001C, "Member 'FCommonAnalogCursorSettings::ScrollUpdatePeriod' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollMultiplier) == 0x000020, "Member 'FCommonAnalogCursorSettings::ScrollMultiplier' has a wrong offset!");

}
