#pragma once

#include "Basic.hpp"

#include "LiveLinkAnimationCore_classes.hpp"
#include "LiveLinkAnimationCore_parameters.hpp"

namespace SDK
{

void ULiveLinkInstance::SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkInstance", "SetRetargetAsset");

	Params::LiveLinkInstance_SetRetargetAsset Parms{};

	Parms.RetargetAsset = RetargetAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULiveLinkInstance::SetSubject(const struct FLiveLinkSubjectName& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkInstance", "SetSubject");

	Params::LiveLinkInstance_SetSubject Parms{};

	Parms.SubjectName = std::move(SubjectName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName ULiveLinkRemapAsset::GetRemappedBoneName(class FName BoneName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedBoneName");

	Params::LiveLinkRemapAsset_GetRemappedBoneName Parms{};

	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName ULiveLinkRemapAsset::GetRemappedCurveName(class FName CurveName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedCurveName");

	Params::LiveLinkRemapAsset_GetRemappedCurveName Parms{};

	Parms.CurveName = CurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULiveLinkRemapAsset::RemapCurveElements(TMap<class FName, float>& CurveItems) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkRemapAsset", "RemapCurveElements");

	Params::LiveLinkRemapAsset_RemapCurveElements Parms{};

	Parms.CurveItems = std::move(CurveItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	CurveItems = std::move(Parms.CurveItems);
}

}
