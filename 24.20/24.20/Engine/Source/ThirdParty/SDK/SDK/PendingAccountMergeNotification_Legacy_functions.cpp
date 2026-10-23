#pragma once

#include "Basic.hpp"

#include "PendingAccountMergeNotification_Legacy_classes.hpp"
#include "PendingAccountMergeNotification_Legacy_parameters.hpp"

namespace SDK
{

void UPendingAccountMergeNotification_Legacy_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UPendingAccountMergeNotification_Legacy_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPendingAccountMergeNotification_Legacy_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPendingAccountMergeNotification_Legacy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPendingAccountMergeNotification_Legacy_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPendingAccountMergeNotification_Legacy_C::ExecuteUbergraph_PendingAccountMergeNotification_Legacy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "ExecuteUbergraph_PendingAccountMergeNotification_Legacy");

	Params::PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPendingAccountMergeNotification_Legacy_C::Hovered(bool IsHovered_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "Hovered");

	Params::PendingAccountMergeNotification_Legacy_C_Hovered Parms{};

	Parms.IsHovered_0 = IsHovered_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UPendingAccountMergeNotification_Legacy_C::OnInputChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PendingAccountMergeNotification_Legacy_C", "OnInputChanged");

	Params::PendingAccountMergeNotification_Legacy_C_OnInputChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

}
