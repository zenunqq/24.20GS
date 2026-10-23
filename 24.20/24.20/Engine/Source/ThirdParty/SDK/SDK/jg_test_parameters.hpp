#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct jg_testBPLibrary_jg_testSampleFunction final
{
public:
	float                                         Param;
	float                                         ReturnValue;
};
static_assert(alignof(jg_testBPLibrary_jg_testSampleFunction) == 0x000004, "Wrong alignment on jg_testBPLibrary_jg_testSampleFunction");
static_assert(sizeof(jg_testBPLibrary_jg_testSampleFunction) == 0x000008, "Wrong size on jg_testBPLibrary_jg_testSampleFunction");
static_assert(offsetof(jg_testBPLibrary_jg_testSampleFunction, Param) == 0x000000, "Member 'jg_testBPLibrary_jg_testSampleFunction::Param' has a wrong offset!");
static_assert(offsetof(jg_testBPLibrary_jg_testSampleFunction, ReturnValue) == 0x000004, "Member 'jg_testBPLibrary_jg_testSampleFunction::ReturnValue' has a wrong offset!");

}
