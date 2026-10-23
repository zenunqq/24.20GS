#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UPlayerSurveyOrthogonalIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonActionWidget*                    InputActionWidget_Move;

public:
	void BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_PlayerSurveyOrthogonalIndicator(int32 EntryPoint);
	void UpdateGamepadControlsVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyOrthogonalIndicator_C">();
	}
	static class UPlayerSurveyOrthogonalIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyOrthogonalIndicator_C>();
	}
};
static_assert(alignof(UPlayerSurveyOrthogonalIndicator_C) == 0x000008, "Wrong alignment on UPlayerSurveyOrthogonalIndicator_C");
static_assert(sizeof(UPlayerSurveyOrthogonalIndicator_C) == 0x000278, "Wrong size on UPlayerSurveyOrthogonalIndicator_C");
static_assert(offsetof(UPlayerSurveyOrthogonalIndicator_C, UberGraphFrame) == 0x000268, "Member 'UPlayerSurveyOrthogonalIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyOrthogonalIndicator_C, InputActionWidget_Move) == 0x000270, "Member 'UPlayerSurveyOrthogonalIndicator_C::InputActionWidget_Move' has a wrong offset!");

}
