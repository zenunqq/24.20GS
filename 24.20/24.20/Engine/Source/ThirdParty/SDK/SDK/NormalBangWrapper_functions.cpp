#pragma once

#include "Basic.hpp"

#include "NormalBangWrapper_classes.hpp"
#include "NormalBangWrapper_parameters.hpp"

namespace SDK
{

void UNormalBangWrapper_C::Adjust_Bang_Image_Translation(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "Adjust Bang Image Translation");

	Params::NormalBangWrapper_C_Adjust_Bang_Image_Translation Parms{};

	Parms.Translation = std::move(Translation);

	UObject::ProcessEvent(Func, &Parms);
}

void UNormalBangWrapper_C::ExecuteUbergraph_NormalBangWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "ExecuteUbergraph_NormalBangWrapper");

	Params::NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UNormalBangWrapper_C::InitialReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "InitialReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UNormalBangWrapper_C::OnBangStateChanged(bool bEnabled, int32 Count_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "OnBangStateChanged");

	Params::NormalBangWrapper_C_OnBangStateChanged Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Count_0 = Count_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UNormalBangWrapper_C::OnStartCallout(class FName TutorialObjectiveName, ETutorialType TutorialType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "OnStartCallout");

	Params::NormalBangWrapper_C_OnStartCallout Parms{};

	Parms.TutorialObjectiveName = TutorialObjectiveName;
	Parms.TutorialType = TutorialType;

	UObject::ProcessEvent(Func, &Parms);
}

void UNormalBangWrapper_C::OnStopCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "OnStopCallout");

	UObject::ProcessEvent(Func, nullptr);
}

void UNormalBangWrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "PreConstruct");

	Params::NormalBangWrapper_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UNormalBangWrapper_C::SetShouldSuppressBang(bool ShouldSuppressBang_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "SetShouldSuppressBang");

	Params::NormalBangWrapper_C_SetShouldSuppressBang Parms{};

	Parms.ShouldSuppressBang_0 = ShouldSuppressBang_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UNormalBangWrapper_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "SetTutorialBorderStyle");

	Params::NormalBangWrapper_C_SetTutorialBorderStyle Parms{};

	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);
}

void UNormalBangWrapper_C::TriggerIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "TriggerIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UNormalBangWrapper_C::TriggerReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "TriggerReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UNormalBangWrapper_C::Update_Bang_Icon_Version(int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalBangWrapper_C", "Update Bang Icon Version");

	Params::NormalBangWrapper_C_Update_Bang_Icon_Version Parms{};

	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}

}
