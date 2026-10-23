#pragma once

#include "Basic.hpp"

#include "BPI_HuskDance_classes.hpp"

namespace SDK
{

void IBPI_HuskDance_C::OnBeginDance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_HuskDance_C", "OnBeginDance");

	UObject::ProcessEvent(Func, nullptr);
}

void IBPI_HuskDance_C::OnEndDance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_HuskDance_C", "OnEndDance");

	UObject::ProcessEvent(Func, nullptr);
}

}
