#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BattlePassS24UI_classes.hpp"

namespace SDK
{

class UBPS24_TutorialTooltip_C final : public UFortBattlePassTutorialTooltipS24
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       burstLoop;
	class UWidgetAnimation*                       Show;
	class UHorizontalBox*                         HorizontalBoxcontent;
	class UImage*                                 Icon;
	class UImage*                                 Image_Arrow;
	class FText                                   In_Text;
	uint8                                         Pad_2E8[0x8];
	struct FSlateBrush                            In_Brush;
	EHorizontalAlignment                          In_Horizontal_Alignment;
	EVerticalAlignment                            In_Vertical_Alignment;
	uint8                                         Pad_3B2[0x6];
	struct FWidgetTransform                       In_Transform;
	bool                                          Show_Icon;
	uint8                                         Pad_3F1[0x7];
	double                                        Right;

public:
	void ExecuteUbergraph_BPS24_TutorialTooltip(int32 EntryPoint);
	void HideTooltip();
	void PreConstruct(bool IsDesignTime);
	void ShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_TutorialTooltip_C">();
	}
	static class UBPS24_TutorialTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_TutorialTooltip_C>();
	}
};
static_assert(alignof(UBPS24_TutorialTooltip_C) == 0x000010, "Wrong alignment on UBPS24_TutorialTooltip_C");
static_assert(sizeof(UBPS24_TutorialTooltip_C) == 0x000400, "Wrong size on UBPS24_TutorialTooltip_C");
static_assert(offsetof(UBPS24_TutorialTooltip_C, UberGraphFrame) == 0x0002A0, "Member 'UBPS24_TutorialTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, burstLoop) == 0x0002A8, "Member 'UBPS24_TutorialTooltip_C::burstLoop' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, Show) == 0x0002B0, "Member 'UBPS24_TutorialTooltip_C::Show' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, HorizontalBoxcontent) == 0x0002B8, "Member 'UBPS24_TutorialTooltip_C::HorizontalBoxcontent' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, Icon) == 0x0002C0, "Member 'UBPS24_TutorialTooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, Image_Arrow) == 0x0002C8, "Member 'UBPS24_TutorialTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, In_Text) == 0x0002D0, "Member 'UBPS24_TutorialTooltip_C::In_Text' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, In_Brush) == 0x0002F0, "Member 'UBPS24_TutorialTooltip_C::In_Brush' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, In_Horizontal_Alignment) == 0x0003B0, "Member 'UBPS24_TutorialTooltip_C::In_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, In_Vertical_Alignment) == 0x0003B1, "Member 'UBPS24_TutorialTooltip_C::In_Vertical_Alignment' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, In_Transform) == 0x0003B8, "Member 'UBPS24_TutorialTooltip_C::In_Transform' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, Show_Icon) == 0x0003F0, "Member 'UBPS24_TutorialTooltip_C::Show_Icon' has a wrong offset!");
static_assert(offsetof(UBPS24_TutorialTooltip_C, Right) == 0x0003F8, "Member 'UBPS24_TutorialTooltip_C::Right' has a wrong offset!");

}
