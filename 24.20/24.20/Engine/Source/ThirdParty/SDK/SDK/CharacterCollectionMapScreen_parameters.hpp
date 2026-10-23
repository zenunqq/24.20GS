#pragma once

#include "Basic.hpp"

#include "CharacterCollectionMapScreen_structs.hpp"

namespace SDK::Params
{

struct CollectionNPCServiceWidget_PopulateData final
{
public:
	struct FNPCServiceWidgetData                  WidgetData;
};
static_assert(alignof(CollectionNPCServiceWidget_PopulateData) == 0x000008, "Wrong alignment on CollectionNPCServiceWidget_PopulateData");
static_assert(sizeof(CollectionNPCServiceWidget_PopulateData) == 0x000050, "Wrong size on CollectionNPCServiceWidget_PopulateData");
static_assert(offsetof(CollectionNPCServiceWidget_PopulateData, WidgetData) == 0x000000, "Member 'CollectionNPCServiceWidget_PopulateData::WidgetData' has a wrong offset!");

}
