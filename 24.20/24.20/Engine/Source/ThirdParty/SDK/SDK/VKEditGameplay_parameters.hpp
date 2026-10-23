#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct VKEditPlayspace_OnClientActivatedContent final
{
public:
	struct FUniqueNetIdRepl                       ClientNetId;
};
static_assert(alignof(VKEditPlayspace_OnClientActivatedContent) == 0x000008, "Wrong alignment on VKEditPlayspace_OnClientActivatedContent");
static_assert(sizeof(VKEditPlayspace_OnClientActivatedContent) == 0x000030, "Wrong size on VKEditPlayspace_OnClientActivatedContent");
static_assert(offsetof(VKEditPlayspace_OnClientActivatedContent, ClientNetId) == 0x000000, "Member 'VKEditPlayspace_OnClientActivatedContent::ClientNetId' has a wrong offset!");

}
