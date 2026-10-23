#pragma once

#include "Basic.hpp"

#include "WBP_Augment_CollectionScreen_classes.hpp"

namespace SDK
{

class UWBP_Augment_CollectionScreen_MobilityTab_C final : public UWBP_Augment_CollectionScreen_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_CollectionScreen_MobilityTab_C">();
	}
	static class UWBP_Augment_CollectionScreen_MobilityTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_CollectionScreen_MobilityTab_C>();
	}
};
static_assert(alignof(UWBP_Augment_CollectionScreen_MobilityTab_C) == 0x000008, "Wrong alignment on UWBP_Augment_CollectionScreen_MobilityTab_C");
static_assert(sizeof(UWBP_Augment_CollectionScreen_MobilityTab_C) == 0x000710, "Wrong size on UWBP_Augment_CollectionScreen_MobilityTab_C");

}
