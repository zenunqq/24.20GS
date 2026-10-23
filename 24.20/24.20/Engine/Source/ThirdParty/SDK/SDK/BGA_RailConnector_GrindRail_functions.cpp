#pragma once

#include "Basic.hpp"

#include "BGA_RailConnector_GrindRail_classes.hpp"
#include "BGA_RailConnector_GrindRail_parameters.hpp"

namespace SDK
{

void ABGA_RailConnector_GrindRail_C::AddRailOptionsFromRail(class ABGA_GrindRail_C* Rail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "AddRailOptionsFromRail");

	Params::BGA_RailConnector_GrindRail_C_AddRailOptionsFromRail Parms{};

	Parms.Rail = Rail;

	UObject::ProcessEvent(Func, &Parms);
}

bool ABGA_RailConnector_GrindRail_C::CheckIfOptionsCanConnect(const struct FRailConnectionOption& EntryOption, const struct FRailConnectionOption& ExitOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "CheckIfOptionsCanConnect");

	Params::BGA_RailConnector_GrindRail_C_CheckIfOptionsCanConnect Parms{};

	Parms.EntryOption = std::move(EntryOption);
	Parms.ExitOption = std::move(ExitOption);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ABGA_RailConnector_GrindRail_C::ExecuteUbergraph_BGA_RailConnector_GrindRail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "ExecuteUbergraph_BGA_RailConnector_GrindRail");

	Params::BGA_RailConnector_GrindRail_C_ExecuteUbergraph_BGA_RailConnector_GrindRail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

int32 ABGA_RailConnector_GrindRail_C::GetClosestSplinePoint(const struct FVector& WorldLocation, class USplineComponent* Spline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "GetClosestSplinePoint");

	Params::BGA_RailConnector_GrindRail_C_GetClosestSplinePoint Parms{};

	Parms.WorldLocation = std::move(WorldLocation);
	Parms.Spline = Spline;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ABGA_RailConnector_GrindRail_C::GetOptions(const struct FRailConnectionOption& EntryOption, struct FRailConnectionOption* Left, struct FRailConnectionOption* Center, struct FRailConnectionOption* Right, bool* Found_Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "GetOptions");

	Params::BGA_RailConnector_GrindRail_C_GetOptions Parms{};

	Parms.EntryOption = std::move(EntryOption);

	UObject::ProcessEvent(Func, &Parms);

	if (Left != nullptr)
		*Left = std::move(Parms.Left);

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Right != nullptr)
		*Right = std::move(Parms.Right);

	if (Found_Options != nullptr)
		*Found_Options = Parms.Found_Options;
}

void ABGA_RailConnector_GrindRail_C::MakeOption(class ABGA_GrindRail_C* TheRail, int32 ThePoint, int32 TheDirection, bool* Success, struct FRailConnectionOption* RailConnectionOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "MakeOption");

	Params::BGA_RailConnector_GrindRail_C_MakeOption Parms{};

	Parms.TheRail = TheRail;
	Parms.ThePoint = ThePoint;
	Parms.TheDirection = TheDirection;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (RailConnectionOption != nullptr)
		*RailConnectionOption = std::move(Parms.RailConnectionOption);
}

void ABGA_RailConnector_GrindRail_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RailConnector_GrindRail_C::SnapRailPoints(class ABGA_GrindRail_C* Rail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "SnapRailPoints");

	Params::BGA_RailConnector_GrindRail_C_SnapRailPoints Parms{};

	Parms.Rail = Rail;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RailConnector_GrindRail_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RailConnector_GrindRail_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
