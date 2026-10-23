#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UPlayerSurveyVerticalIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonActionWidget*                    InputActionWidget_Move;

public:
	void BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_PlayerSurveyVerticalIndicator(int32 EntryPoint);
	void UpdateGamepadControlsVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyVerticalIndicator_C">();
	}
	static class UPlayerSurveyVerticalIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyVerticalIndicator_C>();
	}
};
static_assert(alignof(UPlayerSurveyVerticalIndicator_C) == 0x000008, "Wrong alignment on UPlayerSurveyVerticalIndicator_C");
static_assert(sizeof(UPlayerSurveyVerticalIndicator_C) == 0x000278, "Wrong size on UPlayerSurveyVerticalIndicator_C");
static_assert(offsetof(UPlayerSurveyVerticalIndicator_C, UberGraphFrame) == 0x000268, "Member 'UPlayerSurveyVerticalIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyVerticalIndicator_C, InputActionWidget_Move) == 0x000270, "Member 'UPlayerSurveyVerticalIndicator_C::InputActionWidget_Move' has a wrong offset!");

}
