#pragma once

#include "Basic.hpp"

#include "MediaMovieStreamer_classes.hpp"

namespace SDK
{

void UMediaMovieAssets::OnMediaEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaMovieAssets", "OnMediaEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
