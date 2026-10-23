#pragma once

#include "Basic.hpp"

#include "CommonUI_structs.hpp"

namespace SDK
{

enum class EOperation : uint8
{
	Intro                                    = 0,
	Outro                                    = 1,
	Push                                     = 2,
	Pop                                      = 3,
	Invalid                                  = 4,
	EOperation_MAX                           = 5,
};

enum class ECommonPlatformType : uint8
{
	PC                                       = 0,
	Mac                                      = 1,
	PS4                                      = 2,
	XBox                                     = 3,
	IOS                                      = 4,
	Android                                  = 5,
	Switch                                   = 6,
	XSX                                      = 7,
	PS5                                      = 8,
	Count                                    = 9,
	ECommonPlatformType_MAX                  = 10,
};

enum class ECommonGamepadType : uint8
{
	XboxOneController                        = 0,
	PS4Controller                            = 1,
	SwitchController                         = 2,
	GenericController                        = 3,
	XboxSeriesXController                    = 4,
	PS5Controller                            = 5,
	Count                                    = 6,
	ECommonGamepadType_MAX                   = 7,
};

struct FOperation final
{
public:
	EOperation                                    Operation;
	uint8                                         Pad_1[0x7];
	class UCommonActivatablePanelLegacy*          Panel;
	bool                                          bIntroPanel;
	bool                                          bActivatePanel;
	bool                                          bOutroPanelBelow;
	uint8                                         Pad_13[0x15];
};
static_assert(alignof(FOperation) == 0x000008, "Wrong alignment on FOperation");
static_assert(sizeof(FOperation) == 0x000028, "Wrong size on FOperation");
static_assert(offsetof(FOperation, Operation) == 0x000000, "Member 'FOperation::Operation' has a wrong offset!");
static_assert(offsetof(FOperation, Panel) == 0x000008, "Member 'FOperation::Panel' has a wrong offset!");
static_assert(offsetof(FOperation, bIntroPanel) == 0x000010, "Member 'FOperation::bIntroPanel' has a wrong offset!");
static_assert(offsetof(FOperation, bActivatePanel) == 0x000011, "Member 'FOperation::bActivatePanel' has a wrong offset!");
static_assert(offsetof(FOperation, bOutroPanelBelow) == 0x000012, "Member 'FOperation::bOutroPanelBelow' has a wrong offset!");

struct FCommonInputActionData final : public FCommonInputActionDataBase
{
public:
	TMap<ECommonGamepadType, struct FCommonInputTypeInfo> GamepadInputTypeInfoOverrides;
	struct FCommonInputTypeInfo                   GamepadInputTypeInfos[0x6];
};
static_assert(alignof(FCommonInputActionData) == 0x000010, "Wrong alignment on FCommonInputActionData");
static_assert(sizeof(FCommonInputActionData) == 0x0008C0, "Wrong size on FCommonInputActionData");
static_assert(offsetof(FCommonInputActionData, GamepadInputTypeInfoOverrides) == 0x000330, "Member 'FCommonInputActionData::GamepadInputTypeInfoOverrides' has a wrong offset!");
static_assert(offsetof(FCommonInputActionData, GamepadInputTypeInfos) == 0x000380, "Member 'FCommonInputActionData::GamepadInputTypeInfos' has a wrong offset!");

}
