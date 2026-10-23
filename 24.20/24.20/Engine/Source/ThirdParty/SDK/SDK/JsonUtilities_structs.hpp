#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FJsonObjectWrapper final
{
public:
	class FString                                 JsonString;
	uint8                                         Pad_10[0x10];
};
static_assert(alignof(FJsonObjectWrapper) == 0x000008, "Wrong alignment on FJsonObjectWrapper");
static_assert(sizeof(FJsonObjectWrapper) == 0x000020, "Wrong size on FJsonObjectWrapper");
static_assert(offsetof(FJsonObjectWrapper, JsonString) == 0x000000, "Member 'FJsonObjectWrapper::JsonString' has a wrong offset!");

}
