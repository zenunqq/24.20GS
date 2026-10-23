#pragma once

#include "Basic.hpp"

#include "GE_Map_Fortitude_To_Health_classes.hpp"

namespace SDK
{

class UGE_Athena_DBNO_Start_C final : public UGE_Map_Fortitude_To_Health_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Athena_DBNO_Start_C">();
	}
	static class UGE_Athena_DBNO_Start_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Athena_DBNO_Start_C>();
	}
};
static_assert(alignof(UGE_Athena_DBNO_Start_C) == 0x000008, "Wrong alignment on UGE_Athena_DBNO_Start_C");
static_assert(sizeof(UGE_Athena_DBNO_Start_C) == 0x000858, "Wrong size on UGE_Athena_DBNO_Start_C");

}
