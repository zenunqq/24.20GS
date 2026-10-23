#pragma once

#include "Basic.hpp"

#include "ConvertedMarkerInfo_classes.hpp"
#include "ConvertedMarkerInfo_parameters.hpp"

namespace SDK
{

void UConvertedMarkerInfo_C::ExecuteUbergraph_ConvertedMarkerInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "ExecuteUbergraph_ConvertedMarkerInfo");

	Params::ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::InitNPCCommandIcon(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "InitNPCCommandIcon");

	Params::ConvertedMarkerInfo_C_InitNPCCommandIcon Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::InitPlayerIconState(class AFortPlayerStateAthena* PSA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "InitPlayerIconState");

	Params::ConvertedMarkerInfo_C_InitPlayerIconState Parms{};

	Parms.PSA = PSA;

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3");

	Params::ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::OnLoaded_68559753464A154900ECA9BC6BB940C0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "OnLoaded_68559753464A154900ECA9BC6BB940C0");

	Params::ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::OverrideShowBackground(bool bShowBackground)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "OverrideShowBackground");

	Params::ConvertedMarkerInfo_C_OverrideShowBackground Parms{};

	Parms.bShowBackground = bShowBackground;

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "PreConstruct");

	Params::ConvertedMarkerInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "SetBackgroundVisibility");

	Params::ConvertedMarkerInfo_C_SetBackgroundVisibility Parms{};

	Parms.bOverride = bOverride;
	Parms.bBackgroundVisible = bBackgroundVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UConvertedMarkerInfo_C::UpdateCommandIcon(EPingCommandType PingCommand, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConvertedMarkerInfo_C", "UpdateCommandIcon");

	Params::ConvertedMarkerInfo_C_UpdateCommandIcon Parms{};

	Parms.PingCommand = PingCommand;
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

}
