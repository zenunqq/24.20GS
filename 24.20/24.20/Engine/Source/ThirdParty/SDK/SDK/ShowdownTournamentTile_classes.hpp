#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UShowdownTournamentTile_C final : public UFortShowdownTournamentTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       sizeUp;
	class UWidgetAnimation*                       changeFocus;
	class UImage*                                 Image_TileFade;
	class USizeBox*                               PosterSizeBox;
	bool                                          isFaded;

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void EventFade(bool FadeOut);
	void ExecuteUbergraph_ShowdownTournamentTile(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownTournamentTile_C">();
	}
	static class UShowdownTournamentTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownTournamentTile_C>();
	}
};
static_assert(alignof(UShowdownTournamentTile_C) == 0x000010, "Wrong alignment on UShowdownTournamentTile_C");
static_assert(sizeof(UShowdownTournamentTile_C) == 0x001490, "Wrong size on UShowdownTournamentTile_C");
static_assert(offsetof(UShowdownTournamentTile_C, UberGraphFrame) == 0x001460, "Member 'UShowdownTournamentTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentTile_C, sizeUp) == 0x001468, "Member 'UShowdownTournamentTile_C::sizeUp' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentTile_C, changeFocus) == 0x001470, "Member 'UShowdownTournamentTile_C::changeFocus' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentTile_C, Image_TileFade) == 0x001478, "Member 'UShowdownTournamentTile_C::Image_TileFade' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentTile_C, PosterSizeBox) == 0x001480, "Member 'UShowdownTournamentTile_C::PosterSizeBox' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentTile_C, isFaded) == 0x001488, "Member 'UShowdownTournamentTile_C::isFaded' has a wrong offset!");

}
