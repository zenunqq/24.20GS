#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FFluidForceSocketInfo final
{
public:
	TMap<class FName, class FName>                SocketsandEndpoints_6_B3EDD8FC43A7C681151F46BE0AA158C5;
};
static_assert(alignof(FFluidForceSocketInfo) == 0x000008, "Wrong alignment on FFluidForceSocketInfo");
static_assert(sizeof(FFluidForceSocketInfo) == 0x000050, "Wrong size on FFluidForceSocketInfo");
static_assert(offsetof(FFluidForceSocketInfo, SocketsandEndpoints_6_B3EDD8FC43A7C681151F46BE0AA158C5) == 0x000000, "Member 'FFluidForceSocketInfo::SocketsandEndpoints_6_B3EDD8FC43A7C681151F46BE0AA158C5' has a wrong offset!");

}
