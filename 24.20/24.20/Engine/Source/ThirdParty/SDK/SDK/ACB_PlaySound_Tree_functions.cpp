#pragma once

#include "Basic.hpp"

#include "ACB_PlaySound_Tree_classes.hpp"
#include "ACB_PlaySound_Tree_parameters.hpp"

namespace SDK
{

void UACB_PlaySound_Tree_C::ClusterSizeToTreeSize(int32 ClusterSize, double* TreeSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "ClusterSizeToTreeSize");

	Params::ACB_PlaySound_Tree_C_ClusterSizeToTreeSize Parms{};

	Parms.ClusterSize = ClusterSize;

	UObject::ProcessEvent(Func, &Parms);

	if (TreeSize != nullptr)
		*TreeSize = Parms.TreeSize;
}

void UACB_PlaySound_Tree_C::ExecuteUbergraph_ACB_PlaySound_Tree(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "ExecuteUbergraph_ACB_PlaySound_Tree");

	Params::ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

double UACB_PlaySound_Tree_C::GetRandomOneshotTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "GetRandomOneshotTime");

	Params::ACB_PlaySound_Tree_C_GetRandomOneshotTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UACB_PlaySound_Tree_C::OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3");

	Params::ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UACB_PlaySound_Tree_C::OnPositionUpdated(const struct FVector& Position_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "OnPositionUpdated");

	Params::ACB_PlaySound_Tree_C_OnPositionUpdated Parms{};

	Parms.Position_0 = std::move(Position_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UACB_PlaySound_Tree_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UACB_PlaySound_Tree_C::OnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "OnStop");

	UObject::ProcessEvent(Func, nullptr);
}

void UACB_PlaySound_Tree_C::PlayRandomOneshot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "PlayRandomOneshot");

	UObject::ProcessEvent(Func, nullptr);
}

void UACB_PlaySound_Tree_C::QueueRandomOneshot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ACB_PlaySound_Tree_C", "QueueRandomOneshot");

	UObject::ProcessEvent(Func, nullptr);
}

}
