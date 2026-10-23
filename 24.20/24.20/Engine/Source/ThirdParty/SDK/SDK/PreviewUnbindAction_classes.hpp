#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPreviewUnbindAction_C final : public UFortSettingsPreviewActionUnbind
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonBorder*                          BorderFrame;
	class UCommonBorder*                          CommonBorder_0;
	class USizeBox*                               PrimaryKeybindTextSizeBox;
	class USizeBox*                               SecondaryKeybindTextSizeBox;

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_PreviewUnbindAction(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PreviewUnbindAction_C">();
	}
	static class UPreviewUnbindAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPreviewUnbindAction_C>();
	}
};
static_assert(alignof(UPreviewUnbindAction_C) == 0x000008, "Wrong alignment on UPreviewUnbindAction_C");
static_assert(sizeof(UPreviewUnbindAction_C) == 0x0002A8, "Wrong size on UPreviewUnbindAction_C");
static_assert(offsetof(UPreviewUnbindAction_C, UberGraphFrame) == 0x000280, "Member 'UPreviewUnbindAction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPreviewUnbindAction_C, BorderFrame) == 0x000288, "Member 'UPreviewUnbindAction_C::BorderFrame' has a wrong offset!");
static_assert(offsetof(UPreviewUnbindAction_C, CommonBorder_0) == 0x000290, "Member 'UPreviewUnbindAction_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UPreviewUnbindAction_C, PrimaryKeybindTextSizeBox) == 0x000298, "Member 'UPreviewUnbindAction_C::PrimaryKeybindTextSizeBox' has a wrong offset!");
static_assert(offsetof(UPreviewUnbindAction_C, SecondaryKeybindTextSizeBox) == 0x0002A0, "Member 'UPreviewUnbindAction_C::SecondaryKeybindTextSizeBox' has a wrong offset!");

}
