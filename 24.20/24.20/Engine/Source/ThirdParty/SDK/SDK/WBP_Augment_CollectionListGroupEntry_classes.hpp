#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_Augment_CollectionListGroupEntry_C final : public UAthenaCollectionListGroupEntry
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_CollectionListGroupEntry_C">();
	}
	static class UWBP_Augment_CollectionListGroupEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_CollectionListGroupEntry_C>();
	}
};
static_assert(alignof(UWBP_Augment_CollectionListGroupEntry_C) == 0x000008, "Wrong alignment on UWBP_Augment_CollectionListGroupEntry_C");
static_assert(sizeof(UWBP_Augment_CollectionListGroupEntry_C) == 0x000318, "Wrong size on UWBP_Augment_CollectionListGroupEntry_C");

}
