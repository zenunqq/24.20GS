#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USettingsRotator_C final : public UFortSettingsRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Background;

public:
	void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
	void BP_OnOptionSelected(int32 Index_0);
	void BP_OnOptionsPopulated(int32 Count);
	void ExecuteUbergraph_SettingsRotator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsRotator_C">();
	}
	static class USettingsRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsRotator_C>();
	}
};
static_assert(alignof(USettingsRotator_C) == 0x000010, "Wrong alignment on USettingsRotator_C");
static_assert(sizeof(USettingsRotator_C) == 0x001450, "Wrong size on USettingsRotator_C");
static_assert(offsetof(USettingsRotator_C, UberGraphFrame) == 0x001440, "Member 'USettingsRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsRotator_C, Background) == 0x001448, "Member 'USettingsRotator_C::Background' has a wrong offset!");

}
