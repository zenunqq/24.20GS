#pragma once

#include "Basic.hpp"

#include "AnimGraphRuntime_classes.hpp"
#include "AnimGraphRuntime_parameters.hpp"

namespace SDK
{

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachine");

	Params::AnimationStateMachineLibrary_ConvertToAnimationStateMachine Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachinePure");

	Params::AnimationStateMachineLibrary_ConvertToAnimationStateMachinePure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResult");

	Params::AnimationStateMachineLibrary_ConvertToAnimationStateResult Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResultPure");

	Params::AnimationStateMachineLibrary_ConvertToAnimationStateResultPure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

	if (Result != nullptr)
		*Result = Parms.Result;
}

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemaining");

	Params::AnimationStateMachineLibrary_GetRelevantAnimTimeRemaining Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemainingFraction");

	Params::AnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UAnimationStateMachineLibrary::GetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "GetState");

	Params::AnimationStateMachineLibrary_GetState Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAnimationStateMachineLibrary::IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingIn");

	Params::AnimationStateMachineLibrary_IsStateBlendingIn Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAnimationStateMachineLibrary::IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingOut");

	Params::AnimationStateMachineLibrary_IsStateBlendingOut Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAnimationStateMachineLibrary::SetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, class FName TargetState, float Duration, ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationStateMachineLibrary", "SetState");

	Params::AnimationStateMachineLibrary_SetState Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.Node = std::move(Node);
	Parms.TargetState = TargetState;
	Parms.Duration = Duration;
	Parms.BlendType = BlendType;
	Parms.BlendProfile = BlendProfile;
	Parms.AlphaBlendOption = AlphaBlendOption;
	Parms.CustomBlendCurve = CustomBlendCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UKismetAnimationLibrary::CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "CalculateDirection");

	Params::KismetAnimationLibrary_CalculateDirection Parms{};

	Parms.Velocity = std::move(Velocity);
	Parms.BaseRotation = std::move(BaseRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromPositionHistory");

	Params::KismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Position = std::move(Position);
	Parms.History = std::move(History);
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	History = std::move(Parms.History);

	return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const class FName SocketOrBoneName, const class FName ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromSockets");

	Params::KismetAnimationLibrary_K2_CalculateVelocityFromSockets Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Component = Component;
	Parms.SocketOrBoneName = SocketOrBoneName;
	Parms.ReferenceSocketOrBone = ReferenceSocketOrBone;
	Parms.SocketSpace = SocketSpace;
	Parms.OffsetInBoneSpace = std::move(OffsetInBoneSpace);
	Parms.History = std::move(History);
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;
	Parms.EasingType = EasingType;
	Parms.CustomCurve = std::move(CustomCurve);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	History = std::move(Parms.History);

	return Parms.ReturnValue;
}

struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameFrom, const class FName SocketOrBoneNameTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_DirectionBetweenSockets");

	Params::KismetAnimationLibrary_K2_DirectionBetweenSockets Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	Parms.SocketOrBoneNameTo = SocketOrBoneNameTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_DistanceBetweenTwoSocketsAndMapRange");

	Params::KismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneNameA = SocketOrBoneNameA;
	Parms.SocketSpaceA = SocketSpaceA;
	Parms.SocketOrBoneNameB = SocketOrBoneNameB;
	Parms.SocketSpaceB = SocketSpaceB;
	Parms.bRemapRange = bRemapRange;
	Parms.InRangeMin = InRangeMin;
	Parms.InRangeMax = InRangeMax;
	Parms.OutRangeMin = OutRangeMin;
	Parms.OutRangeMax = OutRangeMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_EndProfilingTimer");

	Params::KismetAnimationLibrary_K2_EndProfilingTimer Parms{};

	Parms.bLog = bLog;
	Parms.LogPrefix = std::move(LogPrefix);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_LookAt");

	Params::KismetAnimationLibrary_K2_LookAt Parms{};

	Parms.CurrentTransform = std::move(CurrentTransform);
	Parms.TargetPosition = std::move(TargetPosition);
	Parms.LookAtVector = std::move(LookAtVector);
	Parms.bUseUpVector = bUseUpVector;
	Parms.UpVector = std::move(UpVector);
	Parms.ClampConeInDegree = ClampConeInDegree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");

	Params::KismetAnimationLibrary_K2_MakePerlinNoiseAndRemap Parms{};

	Parms.Value = Value;
	Parms.RangeOutMin = RangeOutMin;
	Parms.RangeOutMax = RangeOutMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");

	Params::KismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.RangeOutMinX = RangeOutMinX;
	Parms.RangeOutMaxX = RangeOutMaxX;
	Parms.RangeOutMinY = RangeOutMinY;
	Parms.RangeOutMaxY = RangeOutMaxY;
	Parms.RangeOutMinZ = RangeOutMinZ;
	Parms.RangeOutMaxZ = RangeOutMaxZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UKismetAnimationLibrary::K2_StartProfilingTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_StartProfilingTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::KismetAnimationLibrary_K2_TwoBoneIK Parms{};

	Parms.RootPos = std::move(RootPos);
	Parms.JointPos = std::move(JointPos);
	Parms.EndPos = std::move(EndPos);
	Parms.JointTarget = std::move(JointTarget);
	Parms.Effector = std::move(Effector);
	Parms.bAllowStretching = bAllowStretching;
	Parms.StartStretchRatio = StartStretchRatio;
	Parms.MaxStretchScale = MaxStretchScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutJointPos != nullptr)
		*OutJointPos = std::move(Parms.OutJointPos);

	if (OutEndPos != nullptr)
		*OutEndPos = std::move(Parms.OutEndPos);
}

struct FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "ConvertToComponentSpacePoseContext");

	Params::AnimExecutionContextLibrary_ConvertToComponentSpacePoseContext Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

struct FAnimInitializationContext UAnimExecutionContextLibrary::ConvertToInitializationContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "ConvertToInitializationContext");

	Params::AnimExecutionContextLibrary_ConvertToInitializationContext Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

struct FAnimPoseContext UAnimExecutionContextLibrary::ConvertToPoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "ConvertToPoseContext");

	Params::AnimExecutionContextLibrary_ConvertToPoseContext Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

struct FAnimUpdateContext UAnimExecutionContextLibrary::ConvertToUpdateContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "ConvertToUpdateContext");

	Params::AnimExecutionContextLibrary_ConvertToUpdateContext Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

class UAnimInstance* UAnimExecutionContextLibrary::GetAnimInstance(const struct FAnimExecutionContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "GetAnimInstance");

	Params::AnimExecutionContextLibrary_GetAnimInstance Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAnimNodeReference UAnimExecutionContextLibrary::GetAnimNodeReference(class UAnimInstance* Instance, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "GetAnimNodeReference");

	Params::AnimExecutionContextLibrary_GetAnimNodeReference Parms{};

	Parms.Instance = Instance;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAnimExecutionContextLibrary::GetCurrentWeight(const struct FAnimUpdateContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "GetCurrentWeight");

	Params::AnimExecutionContextLibrary_GetCurrentWeight Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAnimExecutionContextLibrary::GetDeltaTime(const struct FAnimUpdateContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimExecutionContextLibrary", "GetDeltaTime");

	Params::AnimExecutionContextLibrary_GetDeltaTime Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayer");

	Params::BlendSpacePlayerLibrary_ConvertToBlendSpacePlayer Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference* BlendSpacePlayer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayerPure");

	Params::BlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (BlendSpacePlayer != nullptr)
		*BlendSpacePlayer = std::move(Parms.BlendSpacePlayer);

	if (Result != nullptr)
		*Result = Parms.Result;
}

class UBlendSpace* UBlendSpacePlayerLibrary::GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "GetBlendSpace");

	Params::BlendSpacePlayerLibrary_GetBlendSpace Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBlendSpacePlayerLibrary::GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "GetLoop");

	Params::BlendSpacePlayerLibrary_GetLoop Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UBlendSpacePlayerLibrary::GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "GetPlayRate");

	Params::BlendSpacePlayerLibrary_GetPlayRate Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UBlendSpacePlayerLibrary::GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "GetPosition");

	Params::BlendSpacePlayerLibrary_GetPosition Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UBlendSpacePlayerLibrary::GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "GetStartPosition");

	Params::BlendSpacePlayerLibrary_GetStartPosition Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpace");

	Params::BlendSpacePlayerLibrary_SetBlendSpace Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);
	Parms.BlendSpace = BlendSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpaceWithInertialBlending");

	Params::BlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);
	Parms.BlendSpace = BlendSpace;
	Parms.BlendTime = BlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "SetLoop");

	Params::BlendSpacePlayerLibrary_SetLoop Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);
	Parms.bLoop = bLoop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "SetPlayRate");

	Params::BlendSpacePlayerLibrary_SetPlayRate Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "SetResetPlayTimeWhenBlendSpaceChanges");

	Params::BlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);
	Parms.bReset = bReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendSpacePlayerLibrary", "ShouldResetPlayTimeWhenBlendSpaceChanges");

	Params::BlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges Parms{};

	Parms.BlendSpacePlayer = std::move(BlendSpacePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBlendListBaseReference UBlendListBaseLibrary::ConvertToBlendListBase(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendListBaseLibrary", "ConvertToBlendListBase");

	Params::BlendListBaseLibrary_ConvertToBlendListBase Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void UBlendListBaseLibrary::ResetNode(const struct FBlendListBaseReference& BlendListBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendListBaseLibrary", "ResetNode");

	Params::BlendListBaseLibrary_ResetNode Parms{};

	Parms.BlendListBase = std::move(BlendListBase);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference* LayeredBoneBlend, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBlendPerBonePure");

	Params::LayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LayeredBoneBlend != nullptr)
		*LayeredBoneBlend = std::move(Parms.LayeredBoneBlend);

	if (Result != nullptr)
		*Result = Parms.Result;
}

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBoneBlend");

	Params::LayeredBoneBlendLibrary_ConvertToLayeredBoneBlend Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

int32 ULayeredBoneBlendLibrary::GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LayeredBoneBlendLibrary", "GetNumPoses");

	Params::LayeredBoneBlendLibrary_GetNumPoses Parms{};

	Parms.LayeredBoneBlend = std::move(LayeredBoneBlend);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, class FName BlendMaskName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LayeredBoneBlendLibrary", "SetBlendMask");

	Params::LayeredBoneBlendLibrary_SetBlendMask Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.LayeredBoneBlend = std::move(LayeredBoneBlend);
	Parms.PoseIndex = PoseIndex;
	Parms.BlendMaskName = BlendMaskName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraph");

	Params::LinkedAnimGraphLibrary_ConvertToLinkedAnimGraph Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraphPure");

	Params::LinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LinkedAnimGraph != nullptr)
		*LinkedAnimGraph = std::move(Parms.LinkedAnimGraph);

	if (Result != nullptr)
		*Result = Parms.Result;
}

class UAnimInstance* ULinkedAnimGraphLibrary::GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LinkedAnimGraphLibrary", "GetLinkedAnimInstance");

	Params::LinkedAnimGraphLibrary_GetLinkedAnimInstance Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ULinkedAnimGraphLibrary::HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LinkedAnimGraphLibrary", "HasLinkedAnimInstance");

	Params::LinkedAnimGraphLibrary_HasLinkedAnimInstance Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");

	Params::PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage Parms{};

	Parms.InSkeletalMeshComponent = InSkeletalMeshComponent;
	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");

	Params::PlayMontageCallbackProxy_OnMontageBlendingOut Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");

	Params::PlayMontageCallbackProxy_OnMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");

	Params::PlayMontageCallbackProxy_OnNotifyBeginReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPlayMontageCallbackProxy::OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");

	Params::PlayMontageCallbackProxy_OnNotifyEndReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "AdvanceTime");

	Params::SequenceEvaluatorLibrary_AdvanceTime Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.SequenceEvaluator = std::move(SequenceEvaluator);
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluator");

	Params::SequenceEvaluatorLibrary_ConvertToSequenceEvaluator Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluatorPure");

	Params::SequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SequenceEvaluator != nullptr)
		*SequenceEvaluator = std::move(Parms.SequenceEvaluator);

	if (Result != nullptr)
		*Result = Parms.Result;
}

float USequenceEvaluatorLibrary::GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "GetAccumulatedTime");

	Params::SequenceEvaluatorLibrary_GetAccumulatedTime Parms{};

	Parms.SequenceEvaluator = std::move(SequenceEvaluator);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAnimSequenceBase* USequenceEvaluatorLibrary::GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "GetSequence");

	Params::SequenceEvaluatorLibrary_GetSequence Parms{};

	Parms.SequenceEvaluator = std::move(SequenceEvaluator);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "SetExplicitTime");

	Params::SequenceEvaluatorLibrary_SetExplicitTime Parms{};

	Parms.SequenceEvaluator = std::move(SequenceEvaluator);
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "SetSequence");

	Params::SequenceEvaluatorLibrary_SetSequence Parms{};

	Parms.SequenceEvaluator = std::move(SequenceEvaluator);
	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceEvaluatorLibrary", "SetSequenceWithInertialBlending");

	Params::SequenceEvaluatorLibrary_SetSequenceWithInertialBlending Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.SequenceEvaluator = std::move(SequenceEvaluator);
	Parms.Sequence = Sequence;
	Parms.BlendTime = BlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USequencePlayerLibrary::ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "ComputePlayRateFromDuration");

	Params::SequencePlayerLibrary_ComputePlayRateFromDuration Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencePlayerReference USequencePlayerLibrary::ConvertToSequencePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayer");

	Params::SequencePlayerLibrary_ConvertToSequencePlayer Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void USequencePlayerLibrary::ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, struct FSequencePlayerReference* SequencePlayer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayerPure");

	Params::SequencePlayerLibrary_ConvertToSequencePlayerPure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	if (Result != nullptr)
		*Result = Parms.Result;
}

float USequencePlayerLibrary::GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "GetAccumulatedTime");

	Params::SequencePlayerLibrary_GetAccumulatedTime Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USequencePlayerLibrary::GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "GetLoopAnimation");

	Params::SequencePlayerLibrary_GetLoopAnimation Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USequencePlayerLibrary::GetPlayRate(const struct FSequencePlayerReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "GetPlayRate");

	Params::SequencePlayerLibrary_GetPlayRate Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencePlayerReference USequencePlayerLibrary::GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& SequenceBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "GetSequence");

	Params::SequencePlayerLibrary_GetSequence Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);
	Parms.SequenceBase = SequenceBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	SequenceBase = Parms.SequenceBase;

	return Parms.ReturnValue;
}

class UAnimSequenceBase* USequencePlayerLibrary::GetSequencePure(const struct FSequencePlayerReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "GetSequencePure");

	Params::SequencePlayerLibrary_GetSequencePure Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USequencePlayerLibrary::GetStartPosition(const struct FSequencePlayerReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "GetStartPosition");

	Params::SequencePlayerLibrary_GetStartPosition Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "SetAccumulatedTime");

	Params::SequencePlayerLibrary_SetAccumulatedTime Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "SetPlayRate");

	Params::SequencePlayerLibrary_SetPlayRate Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "SetSequence");

	Params::SequencePlayerLibrary_SetSequence Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);
	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "SetSequenceWithInertialBlending");

	Params::SequencePlayerLibrary_SetSequenceWithInertialBlending Parms{};

	Parms.UpdateContext = std::move(UpdateContext);
	Parms.SequencePlayer = std::move(SequencePlayer);
	Parms.Sequence = Sequence;
	Parms.BlendTime = BlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencePlayerLibrary", "SetStartPosition");

	Params::SequencePlayerLibrary_SetStartPosition Parms{};

	Parms.SequencePlayer = std::move(SequencePlayer);
	Parms.StartPosition = StartPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSkeletalControlReference USkeletalControlLibrary::ConvertToSkeletalControl(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControl");

	Params::SkeletalControlLibrary_ConvertToSkeletalControl Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void USkeletalControlLibrary::ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControlPure");

	Params::SkeletalControlLibrary_ConvertToSkeletalControlPure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

	if (Result != nullptr)
		*Result = Parms.Result;
}

float USkeletalControlLibrary::GetAlpha(const struct FSkeletalControlReference& SkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkeletalControlLibrary", "GetAlpha");

	Params::SkeletalControlLibrary_GetAlpha Parms{};

	Parms.SkeletalControl = std::move(SkeletalControl);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSkeletalControlReference USkeletalControlLibrary::SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkeletalControlLibrary", "SetAlpha");

	Params::SkeletalControlLibrary_SetAlpha Parms{};

	Parms.SkeletalControl = std::move(SkeletalControl);
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
