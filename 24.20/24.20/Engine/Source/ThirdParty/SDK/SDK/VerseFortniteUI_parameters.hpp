#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct VerseFortniteUIFrameworkButton_Base_ServerClick final
{
public:
	class APlayerController*                      PlayerController;
};
static_assert(alignof(VerseFortniteUIFrameworkButton_Base_ServerClick) == 0x000008, "Wrong alignment on VerseFortniteUIFrameworkButton_Base_ServerClick");
static_assert(sizeof(VerseFortniteUIFrameworkButton_Base_ServerClick) == 0x000008, "Wrong size on VerseFortniteUIFrameworkButton_Base_ServerClick");
static_assert(offsetof(VerseFortniteUIFrameworkButton_Base_ServerClick, PlayerController) == 0x000000, "Member 'VerseFortniteUIFrameworkButton_Base_ServerClick::PlayerController' has a wrong offset!");

struct VerseFortniteUIFrameworkButton_Base_SetText final
{
public:
	class FText                                   Text_0;
};
static_assert(alignof(VerseFortniteUIFrameworkButton_Base_SetText) == 0x000008, "Wrong alignment on VerseFortniteUIFrameworkButton_Base_SetText");
static_assert(sizeof(VerseFortniteUIFrameworkButton_Base_SetText) == 0x000018, "Wrong size on VerseFortniteUIFrameworkButton_Base_SetText");
static_assert(offsetof(VerseFortniteUIFrameworkButton_Base_SetText, Text_0) == 0x000000, "Member 'VerseFortniteUIFrameworkButton_Base_SetText::Text_0' has a wrong offset!");

struct VerseFortniteUIFrameworkButton_Base_GetText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(VerseFortniteUIFrameworkButton_Base_GetText) == 0x000008, "Wrong alignment on VerseFortniteUIFrameworkButton_Base_GetText");
static_assert(sizeof(VerseFortniteUIFrameworkButton_Base_GetText) == 0x000018, "Wrong size on VerseFortniteUIFrameworkButton_Base_GetText");
static_assert(offsetof(VerseFortniteUIFrameworkButton_Base_GetText, ReturnValue) == 0x000000, "Member 'VerseFortniteUIFrameworkButton_Base_GetText::ReturnValue' has a wrong offset!");

struct VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted final
{
public:
	class FText                                   InText;
	ETextCommit                                   InCommitMethod;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted) == 0x000008, "Wrong alignment on VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted");
static_assert(sizeof(VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted) == 0x000020, "Wrong size on VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted");
static_assert(offsetof(VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted, InText) == 0x000000, "Member 'VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted::InText' has a wrong offset!");
static_assert(offsetof(VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted, InCommitMethod) == 0x000018, "Member 'VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted::InCommitMethod' has a wrong offset!");

struct VerseFortniteUIFrameworkText_Base_ServerTextCommitted final
{
public:
	class APlayerController*                      PlayerController;
	class FText                                   NewText;
};
static_assert(alignof(VerseFortniteUIFrameworkText_Base_ServerTextCommitted) == 0x000008, "Wrong alignment on VerseFortniteUIFrameworkText_Base_ServerTextCommitted");
static_assert(sizeof(VerseFortniteUIFrameworkText_Base_ServerTextCommitted) == 0x000020, "Wrong size on VerseFortniteUIFrameworkText_Base_ServerTextCommitted");
static_assert(offsetof(VerseFortniteUIFrameworkText_Base_ServerTextCommitted, PlayerController) == 0x000000, "Member 'VerseFortniteUIFrameworkText_Base_ServerTextCommitted::PlayerController' has a wrong offset!");
static_assert(offsetof(VerseFortniteUIFrameworkText_Base_ServerTextCommitted, NewText) == 0x000008, "Member 'VerseFortniteUIFrameworkText_Base_ServerTextCommitted::NewText' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged final
{
public:
	float                                         InNewValue;
	int32                                         InValueID;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged) == 0x000008, "Wrong size on VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged, InNewValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged::InNewValue' has a wrong offset!");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged, InValueID) == 0x000004, "Member 'VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged::InValueID' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_HandleValueChanged final
{
public:
	float                                         NewValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_HandleValueChanged) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_HandleValueChanged");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_HandleValueChanged) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_HandleValueChanged");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_HandleValueChanged, NewValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_HandleValueChanged::NewValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_ServerValueChanged final
{
public:
	class APlayerController*                      PlayerController;
	float                                         InNewValue;
	int32                                         InValueID;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_ServerValueChanged) == 0x000008, "Wrong alignment on VerseFortniteUIFrameworkSlider_ServerValueChanged");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_ServerValueChanged) == 0x000010, "Wrong size on VerseFortniteUIFrameworkSlider_ServerValueChanged");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_ServerValueChanged, PlayerController) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_ServerValueChanged::PlayerController' has a wrong offset!");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_ServerValueChanged, InNewValue) == 0x000008, "Member 'VerseFortniteUIFrameworkSlider_ServerValueChanged::InNewValue' has a wrong offset!");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_ServerValueChanged, InValueID) == 0x00000C, "Member 'VerseFortniteUIFrameworkSlider_ServerValueChanged::InValueID' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_SetMaxValue final
{
public:
	float                                         InMaxValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_SetMaxValue) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_SetMaxValue");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_SetMaxValue) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_SetMaxValue");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_SetMaxValue, InMaxValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_SetMaxValue::InMaxValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_SetMinValue final
{
public:
	float                                         InMinValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_SetMinValue) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_SetMinValue");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_SetMinValue) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_SetMinValue");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_SetMinValue, InMinValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_SetMinValue::InMinValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_SetStepSize final
{
public:
	float                                         InMinValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_SetStepSize) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_SetStepSize");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_SetStepSize) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_SetStepSize");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_SetStepSize, InMinValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_SetStepSize::InMinValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_SetValue final
{
public:
	float                                         InValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_SetValue) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_SetValue");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_SetValue) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_SetValue");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_SetValue, InValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_SetValue::InValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_GetMaxValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_GetMaxValue) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_GetMaxValue");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_GetMaxValue) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_GetMaxValue");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_GetMaxValue, ReturnValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_GetMaxValue::ReturnValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_GetMinValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_GetMinValue) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_GetMinValue");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_GetMinValue) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_GetMinValue");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_GetMinValue, ReturnValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_GetMinValue::ReturnValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_GetStepSize final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_GetStepSize) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_GetStepSize");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_GetStepSize) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_GetStepSize");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_GetStepSize, ReturnValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_GetStepSize::ReturnValue' has a wrong offset!");

struct VerseFortniteUIFrameworkSlider_GetValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(VerseFortniteUIFrameworkSlider_GetValue) == 0x000004, "Wrong alignment on VerseFortniteUIFrameworkSlider_GetValue");
static_assert(sizeof(VerseFortniteUIFrameworkSlider_GetValue) == 0x000004, "Wrong size on VerseFortniteUIFrameworkSlider_GetValue");
static_assert(offsetof(VerseFortniteUIFrameworkSlider_GetValue, ReturnValue) == 0x000000, "Member 'VerseFortniteUIFrameworkSlider_GetValue::ReturnValue' has a wrong offset!");

}
