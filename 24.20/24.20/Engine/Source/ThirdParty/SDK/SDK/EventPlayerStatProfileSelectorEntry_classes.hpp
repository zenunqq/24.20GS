#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventPlayerStatProfileSelectorEntry_C final : public UFortEventPlayerStatProfileSelectorEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UImage*                                 Image_SelectedBG;
	TMulticastInlineDelegate<void()>              Hovered;
	TMulticastInlineDelegate<void()>              Unhovered;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventPlayerStatProfileSelectorEntry_C">();
	}
	static class UEventPlayerStatProfileSelectorEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventPlayerStatProfileSelectorEntry_C>();
	}
};
static_assert(alignof(UEventPlayerStatProfileSelectorEntry_C) == 0x000010, "Wrong alignment on UEventPlayerStatProfileSelectorEntry_C");
static_assert(sizeof(UEventPlayerStatProfileSelectorEntry_C) == 0x001490, "Wrong size on UEventPlayerStatProfileSelectorEntry_C");
static_assert(offsetof(UEventPlayerStatProfileSelectorEntry_C, UberGraphFrame) == 0x001450, "Member 'UEventPlayerStatProfileSelectorEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelectorEntry_C, Selected) == 0x001458, "Member 'UEventPlayerStatProfileSelectorEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelectorEntry_C, Image_SelectedBG) == 0x001460, "Member 'UEventPlayerStatProfileSelectorEntry_C::Image_SelectedBG' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelectorEntry_C, Hovered) == 0x001468, "Member 'UEventPlayerStatProfileSelectorEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UEventPlayerStatProfileSelectorEntry_C, Unhovered) == 0x001478, "Member 'UEventPlayerStatProfileSelectorEntry_C::Unhovered' has a wrong offset!");

}
