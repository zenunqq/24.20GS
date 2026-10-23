#pragma once

#include "Basic.hpp"

#include "LiveLink_classes.hpp"
#include "LiveLink_parameters.hpp"

namespace SDK
{

int32 ULiveLinkBlueprintLibrary::ChildCount(struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "ChildCount");

	Params::LiveLinkBlueprintLibrary_ChildCount Parms{};

	Parms.LiveLinkTransform = std::move(LiveLinkTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "ComponentSpaceTransform");

	Params::LiveLinkBlueprintLibrary_ComponentSpaceTransform Parms{};

	Parms.LiveLinkTransform = std::move(LiveLinkTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrame");

	Params::LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame Parms{};

	Parms.SubjectRepresentation = std::move(SubjectRepresentation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtSceneTime");

	Params::LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime Parms{};

	Parms.SubjectName = std::move(SubjectName);
	Parms.Role = Role;
	Parms.SceneTime = std::move(SceneTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtWorldTimeOffset");

	Params::LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset Parms{};

	Parms.SubjectName = std::move(SubjectName);
	Parms.Role = Role;
	Parms.WorldTimeOffset = WorldTimeOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameWithSpecificRole");

	Params::LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole Parms{};

	Parms.SubjectName = std::move(SubjectName);
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationFrameData");

	Params::LiveLinkBlueprintLibrary_GetAnimationFrameData Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (AnimationFrameData != nullptr)
		*AnimationFrameData = std::move(Parms.AnimationFrameData);

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationStaticData");

	Params::LiveLinkBlueprintLibrary_GetAnimationStaticData Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (AnimationStaticData != nullptr)
		*AnimationStaticData = std::move(Parms.AnimationStaticData);

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintLibrary::GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetBasicData");

	Params::LiveLinkBlueprintLibrary_GetBasicData Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (BasicBlueprintData != nullptr)
		*BasicBlueprintData = std::move(Parms.BasicBlueprintData);
}

void ULiveLinkBlueprintLibrary::GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetChildren");

	Params::LiveLinkBlueprintLibrary_GetChildren Parms{};

	Parms.LiveLinkTransform = std::move(LiveLinkTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Children != nullptr)
		*Children = std::move(Parms.Children);
}

void ULiveLinkBlueprintLibrary::GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetCurves");

	Params::LiveLinkBlueprintLibrary_GetCurves Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (Curves != nullptr)
		*Curves = std::move(Parms.Curves);
}

TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkEnabledSubjectNames");

	Params::LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames Parms{};

	Parms.bIncludeVirtualSubject = bIncludeVirtualSubject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSubclassOf<class ULiveLinkRole> ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjectRole");

	Params::LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole Parms{};

	Parms.SubjectName = std::move(SubjectName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjects");

	Params::LiveLinkBlueprintLibrary_GetLiveLinkSubjects Parms{};

	Parms.bIncludeDisabledSubject = bIncludeDisabledSubject;
	Parms.bIncludeVirtualSubject = bIncludeVirtualSubject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintLibrary::GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetMetadata");

	Params::LiveLinkBlueprintLibrary_GetMetadata Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (MetaData != nullptr)
		*MetaData = std::move(Parms.MetaData);
}

void ULiveLinkBlueprintLibrary::GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetParent");

	Params::LiveLinkBlueprintLibrary_GetParent Parms{};

	Parms.LiveLinkTransform = std::move(LiveLinkTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Parent != nullptr)
		*Parent = std::move(Parms.Parent);
}

bool ULiveLinkBlueprintLibrary::GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetPropertyValue");

	Params::LiveLinkBlueprintLibrary_GetPropertyValue Parms{};

	Parms.BasicData = std::move(BasicData);
	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	BasicData = std::move(Parms.BasicData);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintLibrary::GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetRootTransform");

	Params::LiveLinkBlueprintLibrary_GetRootTransform Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);
}

class FText ULiveLinkBlueprintLibrary::GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetSourceMachineName");

	Params::LiveLinkBlueprintLibrary_GetSourceMachineName Parms{};

	Parms.SourceHandle = std::move(SourceHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;
}

class FText ULiveLinkBlueprintLibrary::GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetSourceStatus");

	Params::LiveLinkBlueprintLibrary_GetSourceStatus Parms{};

	Parms.SourceHandle = std::move(SourceHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;
}

class FText ULiveLinkBlueprintLibrary::GetSourceType(struct FLiveLinkSourceHandle& SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetSourceType");

	Params::LiveLinkBlueprintLibrary_GetSourceType Parms{};

	Parms.SourceHandle = std::move(SourceHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;
}

class FText ULiveLinkBlueprintLibrary::GetSourceTypeFromGuid(const struct FGuid& SourceGuid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetSourceTypeFromGuid");

	Params::LiveLinkBlueprintLibrary_GetSourceTypeFromGuid Parms{};

	Parms.SourceGuid = std::move(SourceGuid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSubclassOf<class ULiveLinkRole> ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetSpecificLiveLinkSubjectRole");

	Params::LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole Parms{};

	Parms.SubjectKey = std::move(SubjectKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintLibrary::GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByIndex");

	Params::LiveLinkBlueprintLibrary_GetTransformByIndex Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);
	Parms.TransformIndex = TransformIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);
}

void ULiveLinkBlueprintLibrary::GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName_0, struct FLiveLinkTransform* LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByName");

	Params::LiveLinkBlueprintLibrary_GetTransformByName Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);
	Parms.TransformName_0 = TransformName_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);
}

bool ULiveLinkBlueprintLibrary::HasParent(struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "HasParent");

	Params::LiveLinkBlueprintLibrary_HasParent Parms{};

	Parms.LiveLinkTransform = std::move(LiveLinkTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "IsLiveLinkSubjectEnabled");

	Params::LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled Parms{};

	Parms.SubjectName = std::move(SubjectName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "IsSourceStillValid");

	Params::LiveLinkBlueprintLibrary_IsSourceStillValid Parms{};

	Parms.SourceHandle = std::move(SourceHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "IsSpecificLiveLinkSubjectEnabled");

	Params::LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled Parms{};

	Parms.SubjectKey = std::move(SubjectKey);
	Parms.bForThisFrame = bForThisFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 ULiveLinkBlueprintLibrary::NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "NumberOfTransforms");

	Params::LiveLinkBlueprintLibrary_NumberOfTransforms Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "ParentBoneSpaceTransform");

	Params::LiveLinkBlueprintLibrary_ParentBoneSpaceTransform Parms{};

	Parms.LiveLinkTransform = std::move(LiveLinkTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}

bool ULiveLinkBlueprintLibrary::RemoveSource(struct FLiveLinkSourceHandle& SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "RemoveSource");

	Params::LiveLinkBlueprintLibrary_RemoveSource Parms{};

	Parms.SourceHandle = std::move(SourceHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "SetLiveLinkSubjectEnabled");

	Params::LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled Parms{};

	Parms.SubjectKey = std::move(SubjectKey);
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULiveLinkBlueprintLibrary::TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "TransformName");

	Params::LiveLinkBlueprintLibrary_TransformName Parms{};

	Parms.LiveLinkTransform = std::move(LiveLinkTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Name_0 != nullptr)
		*Name_0 = Parms.Name_0;
}

void ULiveLinkBlueprintLibrary::TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* TransformNames_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkBlueprintLibrary", "TransformNames");

	Params::LiveLinkBlueprintLibrary_TransformNames Parms{};

	Parms.SubjectFrameHandle = std::move(SubjectFrameHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (TransformNames_0 != nullptr)
		*TransformNames_0 = std::move(Parms.TransformNames_0);
}

void ULiveLinkComponent::GetAvailableSubjectNames(TArray<class FName>* SubjectNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkComponent", "GetAvailableSubjectNames");

	Params::LiveLinkComponent_GetAvailableSubjectNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SubjectNames != nullptr)
		*SubjectNames = std::move(Parms.SubjectNames);
}

void ULiveLinkComponent::GetSubjectData(const class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectData");

	Params::LiveLinkComponent_GetSubjectData Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);
}

void ULiveLinkComponent::GetSubjectDataAtSceneTime(const class FName SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtSceneTime");

	Params::LiveLinkComponent_GetSubjectDataAtSceneTime Parms{};

	Parms.SubjectName = SubjectName;
	Parms.SceneTime = std::move(SceneTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);
}

void ULiveLinkComponent::GetSubjectDataAtWorldTime(const class FName SubjectName, const float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtWorldTime");

	Params::LiveLinkComponent_GetSubjectDataAtWorldTime Parms{};

	Parms.SubjectName = SubjectName;
	Parms.WorldTime = WorldTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);
}

void ULiveLinkMessageBusFinder::ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkMessageBusFinder", "ConnectToProvider");

	Params::LiveLinkMessageBusFinder_ConnectToProvider Parms{};

	Parms.Provider = std::move(Provider);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Provider = std::move(Parms.Provider);

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);
}

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::ConstructMessageBusFinder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkMessageBusFinder", "ConstructMessageBusFinder");

	Params::LiveLinkMessageBusFinder_ConstructMessageBusFinder Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "GetAvailableProviders");

	Params::LiveLinkMessageBusFinder_GetAvailableProviders Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AvailableProviders != nullptr)
		*AvailableProviders = std::move(Parms.AvailableProviders);
}

void ULiveLinkPreset::ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClientLatent");

	Params::LiveLinkPreset_ApplyToClientLatent Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULiveLinkPreset::BuildFromClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkPreset", "BuildFromClient");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool ULiveLinkPreset::AddToClient(const bool bRecreatePresets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkPreset", "AddToClient");

	Params::LiveLinkPreset_AddToClient Parms{};

	Parms.bRecreatePresets = bRecreatePresets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ULiveLinkPreset::ApplyToClient() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClient");

	Params::LiveLinkPreset_ApplyToClient Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULiveLinkBlueprintVirtualSubject::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}

void ULiveLinkBlueprintVirtualSubject::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnUpdate");

	UObject::ProcessEvent(Func, nullptr);
}

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectFrameData_Internal");

	Params::LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal Parms{};

	Parms.InStruct = std::move(InStruct);
	Parms.bInShouldStampCurrentTime = bInShouldStampCurrentTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectStaticData_Internal");

	Params::LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal Parms{};

	Parms.InStruct = std::move(InStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
