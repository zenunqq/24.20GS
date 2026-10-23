#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Store_BannerMessage_C_Pulse final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(Store_BannerMessage_C_Pulse) == 0x000008, "Wrong alignment on Store_BannerMessage_C_Pulse");
static_assert(sizeof(Store_BannerMessage_C_Pulse) == 0x000008, "Wrong size on Store_BannerMessage_C_Pulse");
static_assert(offsetof(Store_BannerMessage_C_Pulse, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Store_BannerMessage_C_Pulse::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
