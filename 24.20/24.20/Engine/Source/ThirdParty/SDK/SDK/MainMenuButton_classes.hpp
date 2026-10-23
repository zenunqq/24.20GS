#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UMainMenuButton_C final : public UFortMainMenuButton
{
public:
	uint8                                         Pad_1558[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Icon_RightSide;
	bool                                          ShowExternalLinkIcon;

public:
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_MainMenuButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateRightSideIcon(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);
	void UpdateRightSideIconColor(const struct FLinearColor& Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuButton_C">();
	}
	static class UMainMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenuButton_C>();
	}
};
static_assert(alignof(UMainMenuButton_C) == 0x000010, "Wrong alignment on UMainMenuButton_C");
static_assert(sizeof(UMainMenuButton_C) == 0x001580, "Wrong size on UMainMenuButton_C");
static_assert(offsetof(UMainMenuButton_C, UberGraphFrame) == 0x001560, "Member 'UMainMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, Image_Icon_RightSide) == 0x001568, "Member 'UMainMenuButton_C::Image_Icon_RightSide' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, ShowExternalLinkIcon) == 0x001570, "Member 'UMainMenuButton_C::ShowExternalLinkIcon' has a wrong offset!");

}
