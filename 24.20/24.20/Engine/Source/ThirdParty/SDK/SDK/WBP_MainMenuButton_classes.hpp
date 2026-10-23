#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UWBP_MainMenuButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Icon_RightSide;
	class UCommonTextBlock*                       Text_Content;
	bool                                          ShowExternalLinkIcon;
	uint8                                         Pad_13F9[0x7];
	class FText                                   Text;

public:
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_WBP_MainMenuButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Text(const class FText& Text_0);
	void UpdateRightSideIcon(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);
	void UpdateRightSideIconColor(const struct FLinearColor& Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenuButton_C">();
	}
	static class UWBP_MainMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenuButton_C>();
	}
};
static_assert(alignof(UWBP_MainMenuButton_C) == 0x000010, "Wrong alignment on UWBP_MainMenuButton_C");
static_assert(sizeof(UWBP_MainMenuButton_C) == 0x001420, "Wrong size on UWBP_MainMenuButton_C");
static_assert(offsetof(UWBP_MainMenuButton_C, UberGraphFrame) == 0x0013E0, "Member 'UWBP_MainMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenuButton_C, Image_Icon_RightSide) == 0x0013E8, "Member 'UWBP_MainMenuButton_C::Image_Icon_RightSide' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenuButton_C, Text_Content) == 0x0013F0, "Member 'UWBP_MainMenuButton_C::Text_Content' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenuButton_C, ShowExternalLinkIcon) == 0x0013F8, "Member 'UWBP_MainMenuButton_C::ShowExternalLinkIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenuButton_C, Text) == 0x001400, "Member 'UWBP_MainMenuButton_C::Text' has a wrong offset!");

}
