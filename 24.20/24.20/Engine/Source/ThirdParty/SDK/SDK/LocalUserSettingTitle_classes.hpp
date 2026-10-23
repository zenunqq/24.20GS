#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class ULocalUserSettingTitle_C final : public UFortLocalUserSettingTitleButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnExpansion;
	class UWidgetAnimation*                       OnHover;
	class UImage*                                 ExpandDirectionTick;
	class USizeBox*                               SB_EntryContent;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_LocalUserSettingTitle(int32 EntryPoint);
	void OnExpansionChanged(bool bIsExpanded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserSettingTitle_C">();
	}
	static class ULocalUserSettingTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserSettingTitle_C>();
	}
};
static_assert(alignof(ULocalUserSettingTitle_C) == 0x000010, "Wrong alignment on ULocalUserSettingTitle_C");
static_assert(sizeof(ULocalUserSettingTitle_C) == 0x001470, "Wrong size on ULocalUserSettingTitle_C");
static_assert(offsetof(ULocalUserSettingTitle_C, UberGraphFrame) == 0x001440, "Member 'ULocalUserSettingTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULocalUserSettingTitle_C, OnExpansion) == 0x001448, "Member 'ULocalUserSettingTitle_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(ULocalUserSettingTitle_C, OnHover) == 0x001450, "Member 'ULocalUserSettingTitle_C::OnHover' has a wrong offset!");
static_assert(offsetof(ULocalUserSettingTitle_C, ExpandDirectionTick) == 0x001458, "Member 'ULocalUserSettingTitle_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(ULocalUserSettingTitle_C, SB_EntryContent) == 0x001460, "Member 'ULocalUserSettingTitle_C::SB_EntryContent' has a wrong offset!");

}
