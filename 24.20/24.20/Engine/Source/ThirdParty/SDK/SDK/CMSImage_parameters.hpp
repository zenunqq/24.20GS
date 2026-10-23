#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CMSImage_C_SetMediaURL final
{
public:
	class FString                                 MediaUrl;
};
static_assert(alignof(CMSImage_C_SetMediaURL) == 0x000008, "Wrong alignment on CMSImage_C_SetMediaURL");
static_assert(sizeof(CMSImage_C_SetMediaURL) == 0x000010, "Wrong size on CMSImage_C_SetMediaURL");
static_assert(offsetof(CMSImage_C_SetMediaURL, MediaUrl) == 0x000000, "Member 'CMSImage_C_SetMediaURL::MediaUrl' has a wrong offset!");

}
