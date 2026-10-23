#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UCrewPurchase_TileDetails_C final : public UCrewTileDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class USpacer*                                Spacer_LocShim;
	bool                                          DevTestLoc;

public:
	void Construct();
	void EventIntro();
	void ExecuteUbergraph_CrewPurchase_TileDetails(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewPurchase_TileDetails_C">();
	}
	static class UCrewPurchase_TileDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewPurchase_TileDetails_C>();
	}
};
static_assert(alignof(UCrewPurchase_TileDetails_C) == 0x000008, "Wrong alignment on UCrewPurchase_TileDetails_C");
static_assert(sizeof(UCrewPurchase_TileDetails_C) == 0x0002F8, "Wrong size on UCrewPurchase_TileDetails_C");
static_assert(offsetof(UCrewPurchase_TileDetails_C, UberGraphFrame) == 0x0002D8, "Member 'UCrewPurchase_TileDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_TileDetails_C, Intro) == 0x0002E0, "Member 'UCrewPurchase_TileDetails_C::Intro' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_TileDetails_C, Spacer_LocShim) == 0x0002E8, "Member 'UCrewPurchase_TileDetails_C::Spacer_LocShim' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_TileDetails_C, DevTestLoc) == 0x0002F0, "Member 'UCrewPurchase_TileDetails_C::DevTestLoc' has a wrong offset!");

}
