#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UMoreInfo_Ressources_MobileButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_MoreInfo_Ressources_MobileButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MoreInfo_Ressources_MobileButton_C">();
	}
	static class UMoreInfo_Ressources_MobileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoreInfo_Ressources_MobileButton_C>();
	}
};
static_assert(alignof(UMoreInfo_Ressources_MobileButton_C) == 0x000010, "Wrong alignment on UMoreInfo_Ressources_MobileButton_C");
static_assert(sizeof(UMoreInfo_Ressources_MobileButton_C) == 0x0013F0, "Wrong size on UMoreInfo_Ressources_MobileButton_C");
static_assert(offsetof(UMoreInfo_Ressources_MobileButton_C, UberGraphFrame) == 0x0013E0, "Member 'UMoreInfo_Ressources_MobileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMoreInfo_Ressources_MobileButton_C, Hover) == 0x0013E8, "Member 'UMoreInfo_Ressources_MobileButton_C::Hover' has a wrong offset!");

}
