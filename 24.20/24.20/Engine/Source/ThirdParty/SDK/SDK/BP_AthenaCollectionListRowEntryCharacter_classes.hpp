#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_AthenaCollectionListRowEntryCharacter_C final : public UAthenaCollectionListGroupEntry
{
public:
	class UImage*                                 Image_Fade;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionListRowEntryCharacter_C">();
	}
	static class UBP_AthenaCollectionListRowEntryCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionListRowEntryCharacter_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionListRowEntryCharacter_C) == 0x000008, "Wrong alignment on UBP_AthenaCollectionListRowEntryCharacter_C");
static_assert(sizeof(UBP_AthenaCollectionListRowEntryCharacter_C) == 0x000320, "Wrong size on UBP_AthenaCollectionListRowEntryCharacter_C");
static_assert(offsetof(UBP_AthenaCollectionListRowEntryCharacter_C, Image_Fade) == 0x000318, "Member 'UBP_AthenaCollectionListRowEntryCharacter_C::Image_Fade' has a wrong offset!");

}
