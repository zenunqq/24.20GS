#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UCommonInputActionDomain final : public UDataAsset
{
public:
	ECommonInputEventFlowBehavior                 Behavior;
	ECommonInputEventFlowBehavior                 InnerBehavior;
	bool                                          bUseActionDomainDesiredInputConfig;
	ECommonInputMode                              InputMode;
	EMouseCaptureMode                             MouseCaptureMode;
	uint8                                         Pad_3B[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputActionDomain">();
	}
	static class UCommonInputActionDomain* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputActionDomain>();
	}
};
static_assert(alignof(UCommonInputActionDomain) == 0x000008, "Wrong alignment on UCommonInputActionDomain");
static_assert(sizeof(UCommonInputActionDomain) == 0x000040, "Wrong size on UCommonInputActionDomain");
static_assert(offsetof(UCommonInputActionDomain, Behavior) == 0x000030, "Member 'UCommonInputActionDomain::Behavior' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, InnerBehavior) == 0x000034, "Member 'UCommonInputActionDomain::InnerBehavior' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, bUseActionDomainDesiredInputConfig) == 0x000038, "Member 'UCommonInputActionDomain::bUseActionDomainDesiredInputConfig' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, InputMode) == 0x000039, "Member 'UCommonInputActionDomain::InputMode' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, MouseCaptureMode) == 0x00003A, "Member 'UCommonInputActionDomain::MouseCaptureMode' has a wrong offset!");

class UCommonInputActionDomainTable final : public UDataAsset
{
public:
	TArray<class UCommonInputActionDomain*>       ActionDomains;
	ECommonInputMode                              InputMode;
	EMouseCaptureMode                             MouseCaptureMode;
	uint8                                         Pad_42[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputActionDomainTable">();
	}
	static class UCommonInputActionDomainTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputActionDomainTable>();
	}
};
static_assert(alignof(UCommonInputActionDomainTable) == 0x000008, "Wrong alignment on UCommonInputActionDomainTable");
static_assert(sizeof(UCommonInputActionDomainTable) == 0x000048, "Wrong size on UCommonInputActionDomainTable");
static_assert(offsetof(UCommonInputActionDomainTable, ActionDomains) == 0x000030, "Member 'UCommonInputActionDomainTable::ActionDomains' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomainTable, InputMode) == 0x000040, "Member 'UCommonInputActionDomainTable::InputMode' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomainTable, MouseCaptureMode) == 0x000041, "Member 'UCommonInputActionDomainTable::MouseCaptureMode' has a wrong offset!");

class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                    DefaultClickAction;
	struct FDataTableRowHandle                    DefaultBackAction;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIInputData">();
	}
	static class UCommonUIInputData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIInputData>();
	}
};
static_assert(alignof(UCommonUIInputData) == 0x000008, "Wrong alignment on UCommonUIInputData");
static_assert(sizeof(UCommonUIInputData) == 0x000048, "Wrong size on UCommonUIInputData");
static_assert(offsetof(UCommonUIInputData, DefaultClickAction) == 0x000028, "Member 'UCommonUIInputData::DefaultClickAction' has a wrong offset!");
static_assert(offsetof(UCommonUIInputData, DefaultBackAction) == 0x000038, "Member 'UCommonUIInputData::DefaultBackAction' has a wrong offset!");

class UCommonInputBaseControllerData : public UObject
{
public:
	ECommonInputType                              InputType;
	uint8                                         Pad_29[0x3];
	class FName                                   GamepadName;
	class FText                                   GamepadDisplayName;
	class FText                                   GamepadCategory;
	class FText                                   GamepadPlatformName;
	TArray<struct FInputDeviceIdentifierPair>     GamepadHardwareIdMapping;
	TSoftObjectPtr<class UTexture2D>              ControllerTexture;
	TSoftObjectPtr<class UTexture2D>              ControllerButtonMaskTexture;
	TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;

public:
	static const TArray<class FName> GetRegisteredGamepads();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputBaseControllerData">();
	}
	static class UCommonInputBaseControllerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputBaseControllerData>();
	}
};
static_assert(alignof(UCommonInputBaseControllerData) == 0x000008, "Wrong alignment on UCommonInputBaseControllerData");
static_assert(sizeof(UCommonInputBaseControllerData) == 0x0000F8, "Wrong size on UCommonInputBaseControllerData");
static_assert(offsetof(UCommonInputBaseControllerData, InputType) == 0x000028, "Member 'UCommonInputBaseControllerData::InputType' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadName) == 0x00002C, "Member 'UCommonInputBaseControllerData::GamepadName' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadDisplayName) == 0x000030, "Member 'UCommonInputBaseControllerData::GamepadDisplayName' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadCategory) == 0x000048, "Member 'UCommonInputBaseControllerData::GamepadCategory' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadPlatformName) == 0x000060, "Member 'UCommonInputBaseControllerData::GamepadPlatformName' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadHardwareIdMapping) == 0x000078, "Member 'UCommonInputBaseControllerData::GamepadHardwareIdMapping' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerTexture) == 0x000088, "Member 'UCommonInputBaseControllerData::ControllerTexture' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerButtonMaskTexture) == 0x0000B0, "Member 'UCommonInputBaseControllerData::ControllerButtonMaskTexture' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushDataMap) == 0x0000D8, "Member 'UCommonInputBaseControllerData::InputBrushDataMap' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushKeySets) == 0x0000E8, "Member 'UCommonInputBaseControllerData::InputBrushKeySets' has a wrong offset!");

class UCommonInputPlatformSettings final : public UPlatformSettings
{
public:
	ECommonInputType                              DefaultInputType;
	bool                                          bSupportsMouseAndKeyboard;
	bool                                          bSupportsTouch;
	bool                                          bSupportsGamepad;
	class FName                                   DefaultGamepadName;
	bool                                          bCanChangeGamepadType;
	uint8                                         Pad_49[0x7];
	TArray<TSoftClassPtr<class UClass>>           ControllerData;
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputPlatformSettings">();
	}
	static class UCommonInputPlatformSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputPlatformSettings>();
	}
};
static_assert(alignof(UCommonInputPlatformSettings) == 0x000008, "Wrong alignment on UCommonInputPlatformSettings");
static_assert(sizeof(UCommonInputPlatformSettings) == 0x000070, "Wrong size on UCommonInputPlatformSettings");
static_assert(offsetof(UCommonInputPlatformSettings, DefaultInputType) == 0x000040, "Member 'UCommonInputPlatformSettings::DefaultInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsMouseAndKeyboard) == 0x000041, "Member 'UCommonInputPlatformSettings::bSupportsMouseAndKeyboard' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsTouch) == 0x000042, "Member 'UCommonInputPlatformSettings::bSupportsTouch' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsGamepad) == 0x000043, "Member 'UCommonInputPlatformSettings::bSupportsGamepad' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, DefaultGamepadName) == 0x000044, "Member 'UCommonInputPlatformSettings::DefaultGamepadName' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bCanChangeGamepadType) == 0x000048, "Member 'UCommonInputPlatformSettings::bCanChangeGamepadType' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, ControllerData) == 0x000050, "Member 'UCommonInputPlatformSettings::ControllerData' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, ControllerDataClasses) == 0x000060, "Member 'UCommonInputPlatformSettings::ControllerDataClasses' has a wrong offset!");

class UCommonInputSettings final : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UClass>                   InputData;
	struct FPerPlatformSettings                   PlatformInput;
	TMap<class FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData;
	bool                                          bEnableInputMethodThrashingProtection;
	uint8                                         Pad_B9[0x3];
	int32                                         InputMethodThrashingLimit;
	double                                        InputMethodThrashingWindowInSeconds;
	double                                        InputMethodThrashingCooldownInSeconds;
	bool                                          bAllowOutOfFocusDeviceInput;
	bool                                          bEnableDefaultInputConfig;
	bool                                          bEnableEnhancedInputSupport;
	uint8                                         Pad_D3[0x5];
	TSoftObjectPtr<class UCommonInputActionDomainTable> ActionDomainTable;
	uint8                                         Pad_100[0x8];
	TSubclassOf<class UCommonUIInputData>         InputDataClass;
	class UCommonInputActionDomainTable*          ActionDomainTablePtr;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputSettings">();
	}
	static class UCommonInputSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputSettings>();
	}
};
static_assert(alignof(UCommonInputSettings) == 0x000008, "Wrong alignment on UCommonInputSettings");
static_assert(sizeof(UCommonInputSettings) == 0x000118, "Wrong size on UCommonInputSettings");
static_assert(offsetof(UCommonInputSettings, InputData) == 0x000030, "Member 'UCommonInputSettings::InputData' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, PlatformInput) == 0x000058, "Member 'UCommonInputSettings::PlatformInput' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, CommonInputPlatformData) == 0x000068, "Member 'UCommonInputSettings::CommonInputPlatformData' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bEnableInputMethodThrashingProtection) == 0x0000B8, "Member 'UCommonInputSettings::bEnableInputMethodThrashingProtection' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingLimit) == 0x0000BC, "Member 'UCommonInputSettings::InputMethodThrashingLimit' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingWindowInSeconds) == 0x0000C0, "Member 'UCommonInputSettings::InputMethodThrashingWindowInSeconds' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingCooldownInSeconds) == 0x0000C8, "Member 'UCommonInputSettings::InputMethodThrashingCooldownInSeconds' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bAllowOutOfFocusDeviceInput) == 0x0000D0, "Member 'UCommonInputSettings::bAllowOutOfFocusDeviceInput' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bEnableDefaultInputConfig) == 0x0000D1, "Member 'UCommonInputSettings::bEnableDefaultInputConfig' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bEnableEnhancedInputSupport) == 0x0000D2, "Member 'UCommonInputSettings::bEnableEnhancedInputSupport' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, ActionDomainTable) == 0x0000D8, "Member 'UCommonInputSettings::ActionDomainTable' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputDataClass) == 0x000108, "Member 'UCommonInputSettings::InputDataClass' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, ActionDomainTablePtr) == 0x000110, "Member 'UCommonInputSettings::ActionDomainTablePtr' has a wrong offset!");

class UCommonInputSubsystem final : public ULocalPlayerSubsystem
{
public:
	uint8                                         Pad_30[0x28];
	TMulticastInlineDelegate<void(ECommonInputType bNewInputType)> OnInputMethodChanged;
	int32                                         NumberOfInputMethodChangesRecently;
	uint8                                         Pad_6C[0x4];
	double                                        LastInputMethodChangeTime;
	double                                        LastTimeInputMethodThrashingBegan;
	ECommonInputType                              LastInputType;
	ECommonInputType                              CurrentInputType;
	uint8                                         Pad_82[0x2];
	class FName                                   GamepadInputType;
	TMap<class FName, ECommonInputType>           CurrentInputLocks;
	uint8                                         Pad_D8[0x18];
	class UCommonInputActionDomainTable*          ActionDomainTable;
	bool                                          bIsGamepadSimulatedClick;
	uint8                                         Pad_F9[0x7];

public:
	void SetCurrentInputType(ECommonInputType NewInputType);
	void SetGamepadInputType(const class FName InGamepadInputType);

	const class FName GetCurrentGamepadName() const;
	ECommonInputType GetCurrentInputType() const;
	ECommonInputType GetDefaultInputType() const;
	bool IsInputMethodActive(ECommonInputType InputMethod) const;
	bool IsUsingPointerInput() const;
	bool ShouldShowInputKeys() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputSubsystem">();
	}
	static class UCommonInputSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputSubsystem>();
	}
};
static_assert(alignof(UCommonInputSubsystem) == 0x000008, "Wrong alignment on UCommonInputSubsystem");
static_assert(sizeof(UCommonInputSubsystem) == 0x000100, "Wrong size on UCommonInputSubsystem");
static_assert(offsetof(UCommonInputSubsystem, OnInputMethodChanged) == 0x000058, "Member 'UCommonInputSubsystem::OnInputMethodChanged' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, NumberOfInputMethodChangesRecently) == 0x000068, "Member 'UCommonInputSubsystem::NumberOfInputMethodChangesRecently' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastInputMethodChangeTime) == 0x000070, "Member 'UCommonInputSubsystem::LastInputMethodChangeTime' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastTimeInputMethodThrashingBegan) == 0x000078, "Member 'UCommonInputSubsystem::LastTimeInputMethodThrashingBegan' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastInputType) == 0x000080, "Member 'UCommonInputSubsystem::LastInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputType) == 0x000081, "Member 'UCommonInputSubsystem::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, GamepadInputType) == 0x000084, "Member 'UCommonInputSubsystem::GamepadInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputLocks) == 0x000088, "Member 'UCommonInputSubsystem::CurrentInputLocks' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, ActionDomainTable) == 0x0000F0, "Member 'UCommonInputSubsystem::ActionDomainTable' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, bIsGamepadSimulatedClick) == 0x0000F8, "Member 'UCommonInputSubsystem::bIsGamepadSimulatedClick' has a wrong offset!");

}
