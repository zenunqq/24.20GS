#pragma once

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

enum class ECommonInputType : uint8
{
	MouseAndKeyboard                         = 0,
	Gamepad                                  = 1,
	Touch                                    = 2,
	Count                                    = 3,
	ECommonInputType_MAX                     = 4,
};

enum class ECommonInputMode : uint8
{
	Menu                                     = 0,
	Game                                     = 1,
	All                                      = 2,
	MAX                                      = 3,
};

enum class ECommonInputEventFlowBehavior : uint32
{
	BlockIfActive                            = 0,
	BlockIfHandled                           = 1,
	NeverBlock                               = 2,
	ECommonInputEventFlowBehavior_MAX        = 3,
};

struct FCommonInputKeyBrushConfiguration final
{
public:
	struct FKey                                   Key;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            KeyBrush;
};
static_assert(alignof(FCommonInputKeyBrushConfiguration) == 0x000010, "Wrong alignment on FCommonInputKeyBrushConfiguration");
static_assert(sizeof(FCommonInputKeyBrushConfiguration) == 0x0000E0, "Wrong size on FCommonInputKeyBrushConfiguration");
static_assert(offsetof(FCommonInputKeyBrushConfiguration, Key) == 0x000000, "Member 'FCommonInputKeyBrushConfiguration::Key' has a wrong offset!");
static_assert(offsetof(FCommonInputKeyBrushConfiguration, KeyBrush) == 0x000020, "Member 'FCommonInputKeyBrushConfiguration::KeyBrush' has a wrong offset!");

struct FCommonInputKeySetBrushConfiguration final
{
public:
	TArray<struct FKey>                           Keys;
	struct FSlateBrush                            KeyBrush;
};
static_assert(alignof(FCommonInputKeySetBrushConfiguration) == 0x000010, "Wrong alignment on FCommonInputKeySetBrushConfiguration");
static_assert(sizeof(FCommonInputKeySetBrushConfiguration) == 0x0000D0, "Wrong size on FCommonInputKeySetBrushConfiguration");
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, Keys) == 0x000000, "Member 'FCommonInputKeySetBrushConfiguration::Keys' has a wrong offset!");
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, KeyBrush) == 0x000010, "Member 'FCommonInputKeySetBrushConfiguration::KeyBrush' has a wrong offset!");

struct FInputDeviceIdentifierPair final
{
public:
	class FName                                   InputDeviceName;
	uint8                                         Pad_4[0x4];
	class FString                                 HardwareDeviceIdentifier;
};
static_assert(alignof(FInputDeviceIdentifierPair) == 0x000008, "Wrong alignment on FInputDeviceIdentifierPair");
static_assert(sizeof(FInputDeviceIdentifierPair) == 0x000018, "Wrong size on FInputDeviceIdentifierPair");
static_assert(offsetof(FInputDeviceIdentifierPair, InputDeviceName) == 0x000000, "Member 'FInputDeviceIdentifierPair::InputDeviceName' has a wrong offset!");
static_assert(offsetof(FInputDeviceIdentifierPair, HardwareDeviceIdentifier) == 0x000008, "Member 'FInputDeviceIdentifierPair::HardwareDeviceIdentifier' has a wrong offset!");

struct FCommonInputPlatformBaseData final
{
public:
	uint8                                         Pad_0[0x8];
	ECommonInputType                              DefaultInputType;
	bool                                          bSupportsMouseAndKeyboard;
	bool                                          bSupportsGamepad;
	uint8                                         Pad_B[0x1];
	class FName                                   DefaultGamepadName;
	bool                                          bCanChangeGamepadType;
	bool                                          bSupportsTouch;
	uint8                                         Pad_12[0x6];
	TArray<TSoftClassPtr<class UClass>>           ControllerData;
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;
};
static_assert(alignof(FCommonInputPlatformBaseData) == 0x000008, "Wrong alignment on FCommonInputPlatformBaseData");
static_assert(sizeof(FCommonInputPlatformBaseData) == 0x000038, "Wrong size on FCommonInputPlatformBaseData");
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultInputType) == 0x000008, "Member 'FCommonInputPlatformBaseData::DefaultInputType' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsMouseAndKeyboard) == 0x000009, "Member 'FCommonInputPlatformBaseData::bSupportsMouseAndKeyboard' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsGamepad) == 0x00000A, "Member 'FCommonInputPlatformBaseData::bSupportsGamepad' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultGamepadName) == 0x00000C, "Member 'FCommonInputPlatformBaseData::DefaultGamepadName' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bCanChangeGamepadType) == 0x000010, "Member 'FCommonInputPlatformBaseData::bCanChangeGamepadType' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsTouch) == 0x000011, "Member 'FCommonInputPlatformBaseData::bSupportsTouch' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerData) == 0x000018, "Member 'FCommonInputPlatformBaseData::ControllerData' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerDataClasses) == 0x000028, "Member 'FCommonInputPlatformBaseData::ControllerDataClasses' has a wrong offset!");

}
