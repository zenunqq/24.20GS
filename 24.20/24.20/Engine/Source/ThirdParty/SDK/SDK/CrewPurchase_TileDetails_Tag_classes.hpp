#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UCrewPurchase_TileDetails_Tag_C final : public UCrewTileDetailsTag
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 TagBG;

public:
	void OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag);
	void ExecuteUbergraph_CrewPurchase_TileDetails_Tag(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewPurchase_TileDetails_Tag_C">();
	}
	static class UCrewPurchase_TileDetails_Tag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewPurchase_TileDetails_Tag_C>();
	}
};
static_assert(alignof(UCrewPurchase_TileDetails_Tag_C) == 0x000008, "Wrong alignment on UCrewPurchase_TileDetails_Tag_C");
static_assert(sizeof(UCrewPurchase_TileDetails_Tag_C) == 0x0002A8, "Wrong size on UCrewPurchase_TileDetails_Tag_C");
static_assert(offsetof(UCrewPurchase_TileDetails_Tag_C, UberGraphFrame) == 0x000298, "Member 'UCrewPurchase_TileDetails_Tag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_TileDetails_Tag_C, TagBG) == 0x0002A0, "Member 'UCrewPurchase_TileDetails_Tag_C::TagBG' has a wrong offset!");

}
