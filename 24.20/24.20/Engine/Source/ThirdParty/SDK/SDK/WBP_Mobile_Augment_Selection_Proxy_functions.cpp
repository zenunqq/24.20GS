#pragma once

#include "Basic.hpp"

#include "WBP_Mobile_Augment_Selection_Proxy_classes.hpp"
#include "WBP_Mobile_Augment_Selection_Proxy_parameters.hpp"

namespace SDK
{

void UWBP_Mobile_Augment_Selection_Proxy_C::ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mobile_Augment_Selection_Proxy_C", "ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy");

	Params::WBP_Mobile_Augment_Selection_Proxy_C_ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
