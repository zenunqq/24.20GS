#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UShowdownEventTile_RoundBreak_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       TransitionSize;
	class UImage*                                 Image_BG;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownEventTile_RoundBreak_C">();
	}
	static class UShowdownEventTile_RoundBreak_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownEventTile_RoundBreak_C>();
	}
};
static_assert(alignof(UShowdownEventTile_RoundBreak_C) == 0x000008, "Wrong alignment on UShowdownEventTile_RoundBreak_C");
static_assert(sizeof(UShowdownEventTile_RoundBreak_C) == 0x000278, "Wrong size on UShowdownEventTile_RoundBreak_C");
static_assert(offsetof(UShowdownEventTile_RoundBreak_C, TransitionSize) == 0x000268, "Member 'UShowdownEventTile_RoundBreak_C::TransitionSize' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_RoundBreak_C, Image_BG) == 0x000270, "Member 'UShowdownEventTile_RoundBreak_C::Image_BG' has a wrong offset!");

}
