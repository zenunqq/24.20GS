#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_BannerEditorTile_C final : public UFortPlayerProfileBannerEditorTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 ColorImage;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_0;
	class UImage*                                 IconImage;
	class UCommonLoadGuard*                       IconLoadGuard;
	class UImage*                                 Image_BannerEditBorder;
	class UNormalBangWrapper_C*                   NormalBangWrapper;
	class UMaterialInstanceDynamic*               ColorMID;
	TMulticastInlineDelegate<void()>              BannerTileBangUpdated;

public:
	void BP_OnHovered();
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint);
	void HandleBannerIconLoadGuardFinished(class UObject* Object);
	void Mark_Item_As_Seen();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Update_Bang_State();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BannerEditorTile_C">();
	}
	static class UBP_BannerEditorTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BannerEditorTile_C>();
	}
};
static_assert(alignof(UBP_BannerEditorTile_C) == 0x000010, "Wrong alignment on UBP_BannerEditorTile_C");
static_assert(sizeof(UBP_BannerEditorTile_C) == 0x001490, "Wrong size on UBP_BannerEditorTile_C");
static_assert(offsetof(UBP_BannerEditorTile_C, UberGraphFrame) == 0x001440, "Member 'UBP_BannerEditorTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, ColorImage) == 0x001448, "Member 'UBP_BannerEditorTile_C::ColorImage' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, CommonWidgetSwitcher_0) == 0x001450, "Member 'UBP_BannerEditorTile_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, IconImage) == 0x001458, "Member 'UBP_BannerEditorTile_C::IconImage' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, IconLoadGuard) == 0x001460, "Member 'UBP_BannerEditorTile_C::IconLoadGuard' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, Image_BannerEditBorder) == 0x001468, "Member 'UBP_BannerEditorTile_C::Image_BannerEditBorder' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, NormalBangWrapper) == 0x001470, "Member 'UBP_BannerEditorTile_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, ColorMID) == 0x001478, "Member 'UBP_BannerEditorTile_C::ColorMID' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, BannerTileBangUpdated) == 0x001480, "Member 'UBP_BannerEditorTile_C::BannerTileBangUpdated' has a wrong offset!");

}
