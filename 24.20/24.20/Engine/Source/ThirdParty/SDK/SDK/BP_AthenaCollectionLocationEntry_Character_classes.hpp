#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_AthenaCollectionLocationEntry_Character_C final : public UAthenaCollectionLocationEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image;
	class UImage*                                 Image_81;
	class UCommonVisibilitySwitcher*              VisibilitySwitcher_PlacedNotPlaced;

public:
	void BP_OnLocationsFoundSet(ELocationEntryState EntryState);
	void ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionLocationEntry_Character_C">();
	}
	static class UBP_AthenaCollectionLocationEntry_Character_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionLocationEntry_Character_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionLocationEntry_Character_C) == 0x000008, "Wrong alignment on UBP_AthenaCollectionLocationEntry_Character_C");
static_assert(sizeof(UBP_AthenaCollectionLocationEntry_Character_C) == 0x0002D0, "Wrong size on UBP_AthenaCollectionLocationEntry_Character_C");
static_assert(offsetof(UBP_AthenaCollectionLocationEntry_Character_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_AthenaCollectionLocationEntry_Character_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionLocationEntry_Character_C, Image) == 0x0002B8, "Member 'UBP_AthenaCollectionLocationEntry_Character_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionLocationEntry_Character_C, Image_81) == 0x0002C0, "Member 'UBP_AthenaCollectionLocationEntry_Character_C::Image_81' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionLocationEntry_Character_C, VisibilitySwitcher_PlacedNotPlaced) == 0x0002C8, "Member 'UBP_AthenaCollectionLocationEntry_Character_C::VisibilitySwitcher_PlacedNotPlaced' has a wrong offset!");

}
