#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSettingsRotator_Narrow_C final : public UFortSettingsRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       RotatorHover;
	class UBorder*                                Background;

public:
	void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
	void BP_OnOptionSelected(int32 Index_0);
	void BP_OnOptionsPopulated(int32 Count);
	void ExecuteUbergraph_SidebarSettingsRotator_Narrow(int32 EntryPoint);
	void OnHover_Animation();
	void OnUnHover_Animation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSettingsRotator_Narrow_C">();
	}
	static class USidebarSettingsRotator_Narrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSettingsRotator_Narrow_C>();
	}
};
static_assert(alignof(USidebarSettingsRotator_Narrow_C) == 0x000010, "Wrong alignment on USidebarSettingsRotator_Narrow_C");
static_assert(sizeof(USidebarSettingsRotator_Narrow_C) == 0x001460, "Wrong size on USidebarSettingsRotator_Narrow_C");
static_assert(offsetof(USidebarSettingsRotator_Narrow_C, UberGraphFrame) == 0x001440, "Member 'USidebarSettingsRotator_Narrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSettingsRotator_Narrow_C, RotatorHover) == 0x001448, "Member 'USidebarSettingsRotator_Narrow_C::RotatorHover' has a wrong offset!");
static_assert(offsetof(USidebarSettingsRotator_Narrow_C, Background) == 0x001450, "Member 'USidebarSettingsRotator_Narrow_C::Background' has a wrong offset!");

}
