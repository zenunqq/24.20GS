#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class USocialPanel_TopBarExtension_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UImage*                                 Image_PlatformIcon;
	class UMiniPartyBar_C*                        MiniPartyBar;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SocialPanel_TopBarExtension(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_TopBarExtension_C">();
	}
	static class USocialPanel_TopBarExtension_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_TopBarExtension_C>();
	}
};
static_assert(alignof(USocialPanel_TopBarExtension_C) == 0x000010, "Wrong alignment on USocialPanel_TopBarExtension_C");
static_assert(sizeof(USocialPanel_TopBarExtension_C) == 0x001460, "Wrong size on USocialPanel_TopBarExtension_C");
static_assert(offsetof(USocialPanel_TopBarExtension_C, UberGraphFrame) == 0x001430, "Member 'USocialPanel_TopBarExtension_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Hovered) == 0x001438, "Member 'USocialPanel_TopBarExtension_C::Hovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Arrow) == 0x001440, "Member 'USocialPanel_TopBarExtension_C::Arrow' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Image_PlatformIcon) == 0x001448, "Member 'USocialPanel_TopBarExtension_C::Image_PlatformIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, MiniPartyBar) == 0x001450, "Member 'USocialPanel_TopBarExtension_C::MiniPartyBar' has a wrong offset!");

}
