#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarLfgState2ListEntry_C final : public UFortSidebarLfgState2ListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UOverlay*                               ButtonContainer;
	class UBorder*                                EntryBorder;
	class USidebarLfgState_Image_C*               SidebarLfgState_Image;
	class USidebarLfgState_RichText_C*            SidebarLfgState_RichText;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarLfgState2ListEntry(int32 EntryPoint);
	void GetIcon(ELfgState LfgState);
	void OnInitialized();
	void OnStateChanged(const ELfgState NewLfgState, const ESlateVisibility BodyVisibility, const class FText& StateText, const class FText& StateButton);
	void PreConstruct(bool IsDesignTime);
	void UpdateButtonVisibility(ELfgState LfgState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLfgState2ListEntry_C">();
	}
	static class USidebarLfgState2ListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLfgState2ListEntry_C>();
	}
};
static_assert(alignof(USidebarLfgState2ListEntry_C) == 0x000010, "Wrong alignment on USidebarLfgState2ListEntry_C");
static_assert(sizeof(USidebarLfgState2ListEntry_C) == 0x0014A0, "Wrong size on USidebarLfgState2ListEntry_C");
static_assert(offsetof(USidebarLfgState2ListEntry_C, UberGraphFrame) == 0x001460, "Member 'USidebarLfgState2ListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2ListEntry_C, Selected) == 0x001468, "Member 'USidebarLfgState2ListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2ListEntry_C, Hovered) == 0x001470, "Member 'USidebarLfgState2ListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2ListEntry_C, ButtonContainer) == 0x001478, "Member 'USidebarLfgState2ListEntry_C::ButtonContainer' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2ListEntry_C, EntryBorder) == 0x001480, "Member 'USidebarLfgState2ListEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2ListEntry_C, SidebarLfgState_Image) == 0x001488, "Member 'USidebarLfgState2ListEntry_C::SidebarLfgState_Image' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2ListEntry_C, SidebarLfgState_RichText) == 0x001490, "Member 'USidebarLfgState2ListEntry_C::SidebarLfgState_RichText' has a wrong offset!");

}
