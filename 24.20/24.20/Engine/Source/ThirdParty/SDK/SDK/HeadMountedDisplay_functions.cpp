#pragma once

#include "Basic.hpp"

#include "HeadMountedDisplay_classes.hpp"
#include "HeadMountedDisplay_parameters.hpp"

namespace SDK
{

int32 UHandKeypointConversion::Conv_HandKeypointToInt32(EHandKeypoint Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HandKeypointConversion", "Conv_HandKeypointToInt32");

	Params::HandKeypointConversion_Conv_HandKeypointToInt32 Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::BreakKey(const struct FKey& InKey, class FString* InteractionProfile, EControllerHand* Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "BreakKey");

	Params::HeadMountedDisplayFunctionLibrary_BreakKey Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InteractionProfile != nullptr)
		*InteractionProfile = std::move(Parms.InteractionProfile);

	if (Hand != nullptr)
		*Hand = Parms.Hand;

	if (MotionSource != nullptr)
		*MotionSource = Parms.MotionSource;

	if (Indentifier != nullptr)
		*Indentifier = std::move(Parms.Indentifier);

	if (Component != nullptr)
		*Component = std::move(Parms.Component);
}

void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "CalibrateExternalTrackingToHMD");

	Params::HeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD Parms{};

	Parms.ExternalTrackingTransform = std::move(ExternalTrackingTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(const class FName& ActionPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ClearXRTimedInputActionDelegate");

	Params::HeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate Parms{};

	Parms.ActionPath = ActionPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(const struct FXRGestureConfig& GestureConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ConfigureGestures");

	Params::HeadMountedDisplayFunctionLibrary_ConfigureGestures Parms{};

	Parms.GestureConfig = std::move(GestureConfig);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EXRDeviceConnectionResult UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(const class FString& IpAddress, const int32 BitRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ConnectRemoteXRDevice");

	Params::HeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice Parms{};

	Parms.IpAddress = std::move(IpAddress);
	Parms.BitRate = BitRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "DisconnectRemoteXRDevice");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableHMD");

	Params::HeadMountedDisplayFunctionLibrary_EnableHMD Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableLowPersistenceMode");

	Params::HeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(const class FName SystemId, EXRTrackedDeviceType DeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnumerateTrackedDevices");

	Params::HeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices Parms{};

	Parms.SystemId = SystemId;
	Parms.DeviceType = DeviceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(class UObject* WorldContext, const int32 ControllerIndex, const class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetControllerTransformForTime");

	Params::HeadMountedDisplayFunctionLibrary_GetControllerTransformForTime Parms{};

	Parms.WorldContext = WorldContext;
	Parms.ControllerIndex = ControllerIndex;
	Parms.MotionSource = MotionSource;
	Parms.Time = std::move(Time);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bTimeWasUsed != nullptr)
		*bTimeWasUsed = Parms.bTimeWasUsed;

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (bProvidedLinearVelocity != nullptr)
		*bProvidedLinearVelocity = Parms.bProvidedLinearVelocity;

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

	if (bProvidedAngularVelocity != nullptr)
		*bProvidedAngularVelocity = Parms.bProvidedAngularVelocity;

	if (AngularVelocityRadPerSec != nullptr)
		*AngularVelocityRadPerSec = std::move(Parms.AngularVelocityRadPerSec);

	if (bProvidedLinearAcceleration != nullptr)
		*bProvidedLinearAcceleration = Parms.bProvidedLinearAcceleration;

	if (LinearAcceleration != nullptr)
		*LinearAcceleration = std::move(Parms.LinearAcceleration);

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile(const EControllerHand Hand, class FString* InteractionProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetCurrentInteractionProfile");

	Params::HeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InteractionProfile != nullptr)
		*InteractionProfile = std::move(Parms.InteractionProfile);

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDevicePose");

	Params::HeadMountedDisplayFunctionLibrary_GetDevicePose Parms{};

	Parms.XRDeviceId = std::move(XRDeviceId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bIsTracked != nullptr)
		*bIsTracked = Parms.bIsTracked;

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = Parms.bHasPositionalTracking;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}

void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDeviceWorldPose");

	Params::HeadMountedDisplayFunctionLibrary_GetDeviceWorldPose Parms{};

	Parms.WorldContext = WorldContext;
	Parms.XRDeviceId = std::move(XRDeviceId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bIsTracked != nullptr)
		*bIsTracked = Parms.bIsTracked;

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = Parms.bHasPositionalTracking;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}

void UHeadMountedDisplayFunctionLibrary::GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDData");

	Params::HeadMountedDisplayFunctionLibrary_GetHMDData Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (HMDData != nullptr)
		*HMDData = std::move(Parms.HMDData);
}

class FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDDeviceName");

	Params::HeadMountedDisplayFunctionLibrary_GetHMDDeviceName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EHMDWornState UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDWornState");

	Params::HeadMountedDisplayFunctionLibrary_GetHMDWornState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(class UObject* WorldContext, const EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetMotionControllerData");

	Params::HeadMountedDisplayFunctionLibrary_GetMotionControllerData Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (MotionControllerData != nullptr)
		*MotionControllerData = std::move(Parms.MotionControllerData);
}

int32 UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetNumOfTrackingSensors");

	Params::HeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetOrientationAndPosition");

	Params::HeadMountedDisplayFunctionLibrary_GetOrientationAndPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DeviceRotation != nullptr)
		*DeviceRotation = std::move(Parms.DeviceRotation);

	if (DevicePosition != nullptr)
		*DevicePosition = std::move(Parms.DevicePosition);
}

float UHeadMountedDisplayFunctionLibrary::GetPixelDensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPixelDensity");

	Params::HeadMountedDisplayFunctionLibrary_GetPixelDensity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(EHMDTrackingOrigin Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaBounds");

	Params::HeadMountedDisplayFunctionLibrary_GetPlayAreaBounds Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect(struct FTransform* OutTransform, struct FVector2D* OutRect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaRect");

	Params::HeadMountedDisplayFunctionLibrary_GetPlayAreaRect Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);

	if (OutRect != nullptr)
		*OutRect = std::move(Parms.OutRect);

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPositionalTrackingCameraParameters");

	Params::HeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (CameraOrigin != nullptr)
		*CameraOrigin = std::move(Parms.CameraOrigin);

	if (CameraRotation != nullptr)
		*CameraRotation = std::move(Parms.CameraRotation);

	if (HFOV != nullptr)
		*HFOV = Parms.HFOV;

	if (VFOV != nullptr)
		*VFOV = Parms.VFOV;

	if (CameraDistance != nullptr)
		*CameraDistance = Parms.CameraDistance;

	if (NearPlane != nullptr)
		*NearPlane = Parms.NearPlane;

	if (FarPlane != nullptr)
		*FarPlane = Parms.FarPlane;
}

EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOrigin");

	Params::HeadMountedDisplayFunctionLibrary_GetTrackingOrigin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::GetTrackingOriginTransform(EHMDTrackingOrigin Origin, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOriginTransform");

	Params::HeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingSensorParameters");

	Params::HeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (LeftFOV != nullptr)
		*LeftFOV = Parms.LeftFOV;

	if (RightFOV != nullptr)
		*RightFOV = Parms.RightFOV;

	if (TopFOV != nullptr)
		*TopFOV = Parms.TopFOV;

	if (BottomFOV != nullptr)
		*BottomFOV = Parms.BottomFOV;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

	if (NearPlane != nullptr)
		*NearPlane = Parms.NearPlane;

	if (FarPlane != nullptr)
		*FarPlane = Parms.FarPlane;

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingToWorldTransform");

	Params::HeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UHeadMountedDisplayFunctionLibrary::GetVersionString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVersionString");

	Params::HeadMountedDisplayFunctionLibrary_GetVersionString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVRFocusState");

	Params::HeadMountedDisplayFunctionLibrary_GetVRFocusState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bUseFocus != nullptr)
		*bUseFocus = Parms.bUseFocus;

	if (bHasFocus != nullptr)
		*bHasFocus = Parms.bHasFocus;
}

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetWorldToMetersScale");

	Params::HeadMountedDisplayFunctionLibrary_GetWorldToMetersScale Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetXRSystemFlags");

	Params::HeadMountedDisplayFunctionLibrary_GetXRSystemFlags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "HasValidTrackingPosition");

	Params::HeadMountedDisplayFunctionLibrary_HasValidTrackingPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsDeviceTracking");

	Params::HeadMountedDisplayFunctionLibrary_IsDeviceTracking Parms{};

	Parms.XRDeviceId = std::move(XRDeviceId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayConnected");

	Params::HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayEnabled");

	Params::HeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsInLowPersistenceMode");

	Params::HeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsSpectatorScreenModeControllable");

	Params::HeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ResetOrientationAndPosition");

	Params::HeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition Parms{};

	Parms.Yaw = Yaw;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetClippingPlanes");

	Params::HeadMountedDisplayFunctionLibrary_SetClippingPlanes Parms{};

	Parms.Near = Near;
	Parms.Far = Far;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenMode");

	Params::HeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenModeTexturePlusEyeLayout");

	Params::HeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout Parms{};

	Parms.EyeRectMin = std::move(EyeRectMin);
	Parms.EyeRectMax = std::move(EyeRectMax);
	Parms.TextureRectMin = std::move(TextureRectMin);
	Parms.TextureRectMax = std::move(TextureRectMax);
	Parms.bDrawEyeFirst = bDrawEyeFirst;
	Parms.bClearBlack = bClearBlack;
	Parms.bUseAlpha = bUseAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenTexture");

	Params::HeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture Parms{};

	Parms.InTexture = InTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetTrackingOrigin");

	Params::HeadMountedDisplayFunctionLibrary_SetTrackingOrigin Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetWorldToMetersScale");

	Params::HeadMountedDisplayFunctionLibrary_SetWorldToMetersScale Parms{};

	Parms.WorldContext = WorldContext;
	Parms.NewScale = NewScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(const TDelegate<void(class FString& OutReason)>& InDisconnectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRDisconnectDelegate");

	Params::HeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate Parms{};

	Parms.InDisconnectedDelegate = InDisconnectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(const class FName& ActionName, const TDelegate<void(float Value, struct FTimespan& Time)>& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRTimedInputActionDelegate");

	Params::HeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate Parms{};

	Parms.ActionName = ActionName;
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "UpdateExternalTrackingHMDPosition");

	Params::HeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition Parms{};

	Parms.ExternalTrackingTransform = std::move(ExternalTrackingTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector UMotionControllerComponent::GetHandJointPosition(int32 jointIndex, bool* bValueFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetHandJointPosition");

	Params::MotionControllerComponent_GetHandJointPosition Parms{};

	Parms.jointIndex = jointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bValueFound != nullptr)
		*bValueFound = Parms.bValueFound;

	return Parms.ReturnValue;
}

float UMotionControllerComponent::GetParameterValue(class FName InName, bool* bValueFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetParameterValue");

	Params::MotionControllerComponent_GetParameterValue Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bValueFound != nullptr)
		*bValueFound = Parms.bValueFound;

	return Parms.ReturnValue;
}

void UMotionControllerComponent::OnMotionControllerUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "OnMotionControllerUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UMotionControllerComponent::SetAssociatedPlayerIndex(const int32 NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetAssociatedPlayerIndex");

	Params::MotionControllerComponent_SetAssociatedPlayerIndex Parms{};

	Parms.NewPlayer = NewPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetCustomDisplayMesh");

	Params::MotionControllerComponent_SetCustomDisplayMesh Parms{};

	Parms.NewDisplayMesh = NewDisplayMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionControllerComponent::SetDisplayModelSource(const class FName NewDisplayModelSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetDisplayModelSource");

	Params::MotionControllerComponent_SetDisplayModelSource Parms{};

	Parms.NewDisplayModelSource = NewDisplayModelSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionControllerComponent::SetShowDeviceModel(const bool bShowControllerModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetShowDeviceModel");

	Params::MotionControllerComponent_SetShowDeviceModel Parms{};

	Parms.bShowControllerModel = bShowControllerModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionControllerComponent::SetTrackingMotionSource(const class FName NewSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingMotionSource");

	Params::MotionControllerComponent_SetTrackingMotionSource Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionControllerComponent::SetTrackingSource(const EControllerHand NewSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingSource");

	Params::MotionControllerComponent_SetTrackingSource Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EControllerHand UMotionControllerComponent::GetTrackingSource() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetTrackingSource");

	Params::MotionControllerComponent_GetTrackingSource Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionControllerComponent::IsTracked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "IsTracked");

	Params::MotionControllerComponent_IsTracked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingForComponent");

	Params::MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent Parms{};

	Parms.MotionControllerComponent = MotionControllerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfAllControllers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfControllersForPlayer");

	Params::MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfDevice");

	Params::MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfSource");

	Params::MotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingForComponent");

	Params::MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent Parms{};

	Parms.MotionControllerComponent = MotionControllerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfDevice");

	Params::MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfSource");

	Params::MotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnumerateMotionSources");

	Params::MotionTrackedDeviceFunctionLibrary_EnumerateMotionSources Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetActiveTrackingSystemName");

	Params::MotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMaximumMotionTrackedControllerCount");

	Params::MotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMotionTrackingEnabledControllerCount");

	Params::MotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionSourceTracking");

	Params::MotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackedDeviceCountManagementNecessary");

	Params::MotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForComponent");

	Params::MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent Parms{};

	Parms.MotionControllerComponent = MotionControllerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForDevice");

	Params::MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForSource");

	Params::MotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "SetIsControllerMotionTrackingEnabledByDefault");

	Params::MotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("XRAssetFunctionLibrary", "AddDeviceVisualizationComponentBlocking");

	Params::XRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking Parms{};

	Parms.Target = Target;
	Parms.XRDeviceId = std::move(XRDeviceId);
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = std::move(RelativeTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("XRAssetFunctionLibrary", "AddNamedDeviceVisualizationComponentBlocking");

	Params::XRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking Parms{};

	Parms.Target = Target;
	Parms.SystemName = SystemName;
	Parms.DeviceName = DeviceName;
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = std::move(RelativeTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	return Parms.ReturnValue;
}

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddDeviceVisualizationComponentAsync");

	Params::AsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync Parms{};

	Parms.Target = Target;
	Parms.XRDeviceId = std::move(XRDeviceId);
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = std::move(RelativeTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NewComponent != nullptr)
		*NewComponent = Parms.NewComponent;

	return Parms.ReturnValue;
}

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddNamedDeviceVisualizationComponentAsync");

	Params::AsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync Parms{};

	Parms.Target = Target;
	Parms.SystemName = SystemName;
	Parms.DeviceName = DeviceName;
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = std::move(RelativeTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	if (NewComponent != nullptr)
		*NewComponent = Parms.NewComponent;

	return Parms.ReturnValue;
}

void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "AddLoadingScreenSplash");

	Params::XRLoadingScreenFunctionLibrary_AddLoadingScreenSplash Parms{};

	Parms.Texture = Texture;
	Parms.Translation = std::move(Translation);
	Parms.Rotation = std::move(Rotation);
	Parms.Size = std::move(Size);
	Parms.DeltaRotation = std::move(DeltaRotation);
	Parms.bClearBeforeAdd = bClearBeforeAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "ClearLoadingScreenSplashes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXRLoadingScreenFunctionLibrary::HideLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "HideLoadingScreen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "SetLoadingScreen");

	Params::XRLoadingScreenFunctionLibrary_SetLoadingScreen Parms{};

	Parms.Texture = Texture;
	Parms.Scale = std::move(Scale);
	Parms.Offset = std::move(Offset);
	Parms.bShowLoadingMovie = bShowLoadingMovie;
	Parms.bShowOnSet = bShowOnSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "ShowLoadingScreen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
