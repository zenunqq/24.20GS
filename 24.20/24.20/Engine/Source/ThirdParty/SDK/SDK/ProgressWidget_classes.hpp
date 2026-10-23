#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UProgressWidget_C final : public UFortProgressWidget
{
public:
	class USizeBox*                               ProgressSizeBox;
	class UImage*                                 ProgressSpinner;
	class UVerticalBox*                           ProgressVBox;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressWidget_C">();
	}
	static class UProgressWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressWidget_C>();
	}
};
static_assert(alignof(UProgressWidget_C) == 0x000008, "Wrong alignment on UProgressWidget_C");
static_assert(sizeof(UProgressWidget_C) == 0x0002C0, "Wrong size on UProgressWidget_C");
static_assert(offsetof(UProgressWidget_C, ProgressSizeBox) == 0x0002A8, "Member 'UProgressWidget_C::ProgressSizeBox' has a wrong offset!");
static_assert(offsetof(UProgressWidget_C, ProgressSpinner) == 0x0002B0, "Member 'UProgressWidget_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UProgressWidget_C, ProgressVBox) == 0x0002B8, "Member 'UProgressWidget_C::ProgressVBox' has a wrong offset!");

}
