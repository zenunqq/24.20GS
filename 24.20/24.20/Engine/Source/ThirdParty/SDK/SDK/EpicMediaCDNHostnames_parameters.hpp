#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EpicMediaCDNHostnames_GetSelectedHostName final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(EpicMediaCDNHostnames_GetSelectedHostName) == 0x000008, "Wrong alignment on EpicMediaCDNHostnames_GetSelectedHostName");
static_assert(sizeof(EpicMediaCDNHostnames_GetSelectedHostName) == 0x000010, "Wrong size on EpicMediaCDNHostnames_GetSelectedHostName");
static_assert(offsetof(EpicMediaCDNHostnames_GetSelectedHostName, ReturnValue) == 0x000000, "Member 'EpicMediaCDNHostnames_GetSelectedHostName::ReturnValue' has a wrong offset!");

}
