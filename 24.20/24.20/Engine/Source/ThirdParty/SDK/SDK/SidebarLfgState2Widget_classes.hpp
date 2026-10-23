#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarLfgState2Widget_C final : public UFortSidebarLfgState2Widget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USidebarLfgState_Image_C*               SidebarLfgState_Image;
	class USidebarLfgState_RichText_C*            SidebarLfgState_RichText;
	TArray<class UTexture2D*>                     LfgStateTextureArray;

public:
	void ExecuteUbergraph_SidebarLfgState2Widget(int32 EntryPoint);
	void GetIcon(ELfgState LfgState, ESlateVisibility Icon_Visiblity);
	void OnInitialized();
	void OnStateChanged(const ELfgState NewLfgState, const ESlateVisibility BodyVisibility, const class FText& StateText, const class FText& StateButton);
	void UpdateButtonVisibility(ELfgState LfgState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLfgState2Widget_C">();
	}
	static class USidebarLfgState2Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLfgState2Widget_C>();
	}
};
static_assert(alignof(USidebarLfgState2Widget_C) == 0x000008, "Wrong alignment on USidebarLfgState2Widget_C");
static_assert(sizeof(USidebarLfgState2Widget_C) == 0x0003F8, "Wrong size on USidebarLfgState2Widget_C");
static_assert(offsetof(USidebarLfgState2Widget_C, UberGraphFrame) == 0x0003D0, "Member 'USidebarLfgState2Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2Widget_C, SidebarLfgState_Image) == 0x0003D8, "Member 'USidebarLfgState2Widget_C::SidebarLfgState_Image' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2Widget_C, SidebarLfgState_RichText) == 0x0003E0, "Member 'USidebarLfgState2Widget_C::SidebarLfgState_RichText' has a wrong offset!");
static_assert(offsetof(USidebarLfgState2Widget_C, LfgStateTextureArray) == 0x0003E8, "Member 'USidebarLfgState2Widget_C::LfgStateTextureArray' has a wrong offset!");

}
