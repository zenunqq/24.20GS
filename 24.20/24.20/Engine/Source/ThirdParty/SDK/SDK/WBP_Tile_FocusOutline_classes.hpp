#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_Tile_FocusOutline_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_BaseHover;
	class UImage*                                 FocusOutline;
	class UImage*                                 FocusOutline_Glow;
	class UImage*                                 Glow;

public:
	void ExecuteUbergraph_WBP_Tile_FocusOutline(int32 EntryPoint);
	void OnBaseTileHover();
	void OnBaseTileUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Tile_FocusOutline_C">();
	}
	static class UWBP_Tile_FocusOutline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Tile_FocusOutline_C>();
	}
};
static_assert(alignof(UWBP_Tile_FocusOutline_C) == 0x000008, "Wrong alignment on UWBP_Tile_FocusOutline_C");
static_assert(sizeof(UWBP_Tile_FocusOutline_C) == 0x000290, "Wrong size on UWBP_Tile_FocusOutline_C");
static_assert(offsetof(UWBP_Tile_FocusOutline_C, UberGraphFrame) == 0x000268, "Member 'UWBP_Tile_FocusOutline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Tile_FocusOutline_C, Anim_BaseHover) == 0x000270, "Member 'UWBP_Tile_FocusOutline_C::Anim_BaseHover' has a wrong offset!");
static_assert(offsetof(UWBP_Tile_FocusOutline_C, FocusOutline) == 0x000278, "Member 'UWBP_Tile_FocusOutline_C::FocusOutline' has a wrong offset!");
static_assert(offsetof(UWBP_Tile_FocusOutline_C, FocusOutline_Glow) == 0x000280, "Member 'UWBP_Tile_FocusOutline_C::FocusOutline_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_Tile_FocusOutline_C, Glow) == 0x000288, "Member 'UWBP_Tile_FocusOutline_C::Glow' has a wrong offset!");

}
