#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UUEFN_TextBlock_C final : public UUEFNTextBlockBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UEFN_TextBlock_C">();
	}
	static class UUEFN_TextBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUEFN_TextBlock_C>();
	}
};
static_assert(alignof(UUEFN_TextBlock_C) == 0x000010, "Wrong alignment on UUEFN_TextBlock_C");
static_assert(sizeof(UUEFN_TextBlock_C) == 0x000320, "Wrong size on UUEFN_TextBlock_C");

}
