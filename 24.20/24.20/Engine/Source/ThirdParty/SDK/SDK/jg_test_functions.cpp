#pragma once

#include "Basic.hpp"

#include "jg_test_classes.hpp"
#include "jg_test_parameters.hpp"

namespace SDK
{

float Ujg_testBPLibrary::jg_testSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("jg_testBPLibrary", "jg_testSampleFunction");

	Params::jg_testBPLibrary_jg_testSampleFunction Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
