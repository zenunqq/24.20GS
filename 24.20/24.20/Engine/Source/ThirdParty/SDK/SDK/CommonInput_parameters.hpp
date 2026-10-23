#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct CommonInputBaseControllerData_GetRegisteredGamepads final
{
public:
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(CommonInputBaseControllerData_GetRegisteredGamepads) == 0x000008, "Wrong alignment on CommonInputBaseControllerData_GetRegisteredGamepads");
static_assert(sizeof(CommonInputBaseControllerData_GetRegisteredGamepads) == 0x000010, "Wrong size on CommonInputBaseControllerData_GetRegisteredGamepads");
static_assert(offsetof(CommonInputBaseControllerData_GetRegisteredGamepads, ReturnValue) == 0x000000, "Member 'CommonInputBaseControllerData_GetRegisteredGamepads::ReturnValue' has a wrong offset!");

struct CommonInputSubsystem_SetCurrentInputType final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(CommonInputSubsystem_SetCurrentInputType) == 0x000001, "Wrong alignment on CommonInputSubsystem_SetCurrentInputType");
static_assert(sizeof(CommonInputSubsystem_SetCurrentInputType) == 0x000001, "Wrong size on CommonInputSubsystem_SetCurrentInputType");
static_assert(offsetof(CommonInputSubsystem_SetCurrentInputType, NewInputType) == 0x000000, "Member 'CommonInputSubsystem_SetCurrentInputType::NewInputType' has a wrong offset!");

struct CommonInputSubsystem_SetGamepadInputType final
{
public:
	class FName                                   InGamepadInputType;
};
static_assert(alignof(CommonInputSubsystem_SetGamepadInputType) == 0x000004, "Wrong alignment on CommonInputSubsystem_SetGamepadInputType");
static_assert(sizeof(CommonInputSubsystem_SetGamepadInputType) == 0x000004, "Wrong size on CommonInputSubsystem_SetGamepadInputType");
static_assert(offsetof(CommonInputSubsystem_SetGamepadInputType, InGamepadInputType) == 0x000000, "Member 'CommonInputSubsystem_SetGamepadInputType::InGamepadInputType' has a wrong offset!");

struct CommonInputSubsystem_GetCurrentGamepadName final
{
public:
	class FName                                   ReturnValue;
};
static_assert(alignof(CommonInputSubsystem_GetCurrentGamepadName) == 0x000004, "Wrong alignment on CommonInputSubsystem_GetCurrentGamepadName");
static_assert(sizeof(CommonInputSubsystem_GetCurrentGamepadName) == 0x000004, "Wrong size on CommonInputSubsystem_GetCurrentGamepadName");
static_assert(offsetof(CommonInputSubsystem_GetCurrentGamepadName, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_GetCurrentGamepadName::ReturnValue' has a wrong offset!");

struct CommonInputSubsystem_GetCurrentInputType final
{
public:
	ECommonInputType                              ReturnValue;
};
static_assert(alignof(CommonInputSubsystem_GetCurrentInputType) == 0x000001, "Wrong alignment on CommonInputSubsystem_GetCurrentInputType");
static_assert(sizeof(CommonInputSubsystem_GetCurrentInputType) == 0x000001, "Wrong size on CommonInputSubsystem_GetCurrentInputType");
static_assert(offsetof(CommonInputSubsystem_GetCurrentInputType, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_GetCurrentInputType::ReturnValue' has a wrong offset!");

struct CommonInputSubsystem_GetDefaultInputType final
{
public:
	ECommonInputType                              ReturnValue;
};
static_assert(alignof(CommonInputSubsystem_GetDefaultInputType) == 0x000001, "Wrong alignment on CommonInputSubsystem_GetDefaultInputType");
static_assert(sizeof(CommonInputSubsystem_GetDefaultInputType) == 0x000001, "Wrong size on CommonInputSubsystem_GetDefaultInputType");
static_assert(offsetof(CommonInputSubsystem_GetDefaultInputType, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_GetDefaultInputType::ReturnValue' has a wrong offset!");

struct CommonInputSubsystem_IsInputMethodActive final
{
public:
	ECommonInputType                              InputMethod;
	bool                                          ReturnValue;
};
static_assert(alignof(CommonInputSubsystem_IsInputMethodActive) == 0x000001, "Wrong alignment on CommonInputSubsystem_IsInputMethodActive");
static_assert(sizeof(CommonInputSubsystem_IsInputMethodActive) == 0x000002, "Wrong size on CommonInputSubsystem_IsInputMethodActive");
static_assert(offsetof(CommonInputSubsystem_IsInputMethodActive, InputMethod) == 0x000000, "Member 'CommonInputSubsystem_IsInputMethodActive::InputMethod' has a wrong offset!");
static_assert(offsetof(CommonInputSubsystem_IsInputMethodActive, ReturnValue) == 0x000001, "Member 'CommonInputSubsystem_IsInputMethodActive::ReturnValue' has a wrong offset!");

struct CommonInputSubsystem_IsUsingPointerInput final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CommonInputSubsystem_IsUsingPointerInput) == 0x000001, "Wrong alignment on CommonInputSubsystem_IsUsingPointerInput");
static_assert(sizeof(CommonInputSubsystem_IsUsingPointerInput) == 0x000001, "Wrong size on CommonInputSubsystem_IsUsingPointerInput");
static_assert(offsetof(CommonInputSubsystem_IsUsingPointerInput, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_IsUsingPointerInput::ReturnValue' has a wrong offset!");

struct CommonInputSubsystem_ShouldShowInputKeys final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CommonInputSubsystem_ShouldShowInputKeys) == 0x000001, "Wrong alignment on CommonInputSubsystem_ShouldShowInputKeys");
static_assert(sizeof(CommonInputSubsystem_ShouldShowInputKeys) == 0x000001, "Wrong size on CommonInputSubsystem_ShouldShowInputKeys");
static_assert(offsetof(CommonInputSubsystem_ShouldShowInputKeys, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_ShouldShowInputKeys::ReturnValue' has a wrong offset!");

}
