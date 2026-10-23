#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_AthenaCollection_ProgressPlayerEntry_C final : public UAthenaCollectionPlayerProgress
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowUp;
	class UBorder*                                Border_PlayerColor;
	class UOverlay*                               Overlay_Friends;
	class UCommonRichTextBlock*                   RichText_Number;
	class UCommonRichTextBlock*                   RichText_Number_Local;
	class USizeBox*                               SizeBox_0;
	class USizeBox*                               SizeBox_LocalPlayer;
	class UVerticalBox*                           VerticalBox_Text;
	class UWidgetSwitcher*                        WidgetSwitcher_0;
	bool                                          Is_Self_pre_construct;

public:
	void BP_OnPlayerProgressInitialized(bool bIsLocalPlayer, int32 NumCollected, int32 NumToCollect);
	void BP_OnShowPlayerInfoSet(bool bShowPlayerInfo);
	void ExecuteUbergraph_BP_AthenaCollection_ProgressPlayerEntry(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollection_ProgressPlayerEntry_C">();
	}
	static class UBP_AthenaCollection_ProgressPlayerEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollection_ProgressPlayerEntry_C>();
	}
};
static_assert(alignof(UBP_AthenaCollection_ProgressPlayerEntry_C) == 0x000008, "Wrong alignment on UBP_AthenaCollection_ProgressPlayerEntry_C");
static_assert(sizeof(UBP_AthenaCollection_ProgressPlayerEntry_C) == 0x000308, "Wrong size on UBP_AthenaCollection_ProgressPlayerEntry_C");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, ShowUp) == 0x0002B8, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::ShowUp' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, Border_PlayerColor) == 0x0002C0, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::Border_PlayerColor' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, Overlay_Friends) == 0x0002C8, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::Overlay_Friends' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, RichText_Number) == 0x0002D0, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::RichText_Number' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, RichText_Number_Local) == 0x0002D8, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::RichText_Number_Local' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, SizeBox_0) == 0x0002E0, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, SizeBox_LocalPlayer) == 0x0002E8, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::SizeBox_LocalPlayer' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, VerticalBox_Text) == 0x0002F0, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::VerticalBox_Text' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, WidgetSwitcher_0) == 0x0002F8, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollection_ProgressPlayerEntry_C, Is_Self_pre_construct) == 0x000300, "Member 'UBP_AthenaCollection_ProgressPlayerEntry_C::Is_Self_pre_construct' has a wrong offset!");

}
