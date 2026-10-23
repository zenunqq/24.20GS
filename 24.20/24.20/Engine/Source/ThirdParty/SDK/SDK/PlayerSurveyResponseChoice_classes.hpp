#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UPlayerSurveyResponseChoice_C final : public UFortPlayerSurveyResponseChoiceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Border_InputActionCircle;
	class UImage*                                 Image_Checkbox;
	class UCommonActionWidget*                    InputActionWidget_Select;
	struct FSlateBrush                            Brush_RadioUnchecked;
	struct FSlateBrush                            Brush_RadioChecked;
	struct FSlateBrush                            Brush_CheckboxUnchecked;
	struct FSlateBrush                            Brush_CheckboxChecked;
	EFortPlayerSurveyResponseChoiceType           ChoiceType;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_PlayerSurveyResponseChoice(int32 EntryPoint);
	void GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush);
	void OnCurrentTextStyleChanged();
	void OnInitialized();
	void OnSurveyResetChoice();
	void SetChoiceType(EFortPlayerSurveyResponseChoiceType Type);
	void Update_Text_Scale();
	void UpdateButtonColor();
	void UpdateChoiceImage();
	void UpdateInputActionRenderOpacity();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyResponseChoice_C">();
	}
	static class UPlayerSurveyResponseChoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyResponseChoice_C>();
	}
};
static_assert(alignof(UPlayerSurveyResponseChoice_C) == 0x000010, "Wrong alignment on UPlayerSurveyResponseChoice_C");
static_assert(sizeof(UPlayerSurveyResponseChoice_C) == 0x001720, "Wrong size on UPlayerSurveyResponseChoice_C");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, UberGraphFrame) == 0x0013F0, "Member 'UPlayerSurveyResponseChoice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, Border_InputActionCircle) == 0x0013F8, "Member 'UPlayerSurveyResponseChoice_C::Border_InputActionCircle' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, Image_Checkbox) == 0x001400, "Member 'UPlayerSurveyResponseChoice_C::Image_Checkbox' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, InputActionWidget_Select) == 0x001408, "Member 'UPlayerSurveyResponseChoice_C::InputActionWidget_Select' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, Brush_RadioUnchecked) == 0x001410, "Member 'UPlayerSurveyResponseChoice_C::Brush_RadioUnchecked' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, Brush_RadioChecked) == 0x0014D0, "Member 'UPlayerSurveyResponseChoice_C::Brush_RadioChecked' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, Brush_CheckboxUnchecked) == 0x001590, "Member 'UPlayerSurveyResponseChoice_C::Brush_CheckboxUnchecked' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, Brush_CheckboxChecked) == 0x001650, "Member 'UPlayerSurveyResponseChoice_C::Brush_CheckboxChecked' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyResponseChoice_C, ChoiceType) == 0x001710, "Member 'UPlayerSurveyResponseChoice_C::ChoiceType' has a wrong offset!");

}
