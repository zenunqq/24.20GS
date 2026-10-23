#pragma once

#include "Basic.hpp"

#include "AugmentedReality_classes.hpp"
#include "AugmentedReality_parameters.hpp"

namespace SDK
{

class UMRMeshComponent* UARComponent::GetMRMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARComponent", "GetMRMesh");

	Params::ARComponent_GetMRMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARComponent::OnRep_Payload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARComponent", "OnRep_Payload");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UARComponent::ReceiveRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARComponent", "ReceiveRemove");

	UObject::ProcessEvent(Func, nullptr);
}

void UARComponent::SetNativeID(const struct FGuid& NativeID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARComponent", "SetNativeID");

	Params::ARComponent_SetNativeID Parms{};

	Parms.NativeID_0 = std::move(NativeID_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARComponent::UpdateVisualization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARComponent", "UpdateVisualization");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const TMap<EARObjectClassification, struct FLinearColor> UARPlaneComponent::GetObjectClassificationDebugColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARPlaneComponent", "GetObjectClassificationDebugColors");

	Params::ARPlaneComponent_GetObjectClassificationDebugColors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARPlaneComponent::SetObjectClassificationDebugColors(const TMap<EARObjectClassification, struct FLinearColor>& InColors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARPlaneComponent", "SetObjectClassificationDebugColors");

	Params::ARPlaneComponent_SetObjectClassificationDebugColors Parms{};

	Parms.InColors = std::move(InColors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARPlaneComponent", "SetPlaneComponentDebugMode");

	Params::ARPlaneComponent_SetPlaneComponentDebugMode Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneComponent", "ReceiveAdd");

	Params::ARPlaneComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneComponent", "ReceiveUpdate");

	Params::ARPlaneComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARPlaneComponent::ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneComponent", "ServerUpdatePayload");

	Params::ARPlaneComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UARComponent* AARActor::AddARComponent(TSubclassOf<class UARComponent> InComponentClass, const struct FGuid& NativeID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARActor", "AddARComponent");

	Params::ARActor_AddARComponent Parms{};

	Parms.InComponentClass = InComponentClass;
	Parms.NativeID = std::move(NativeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "AddManualEnvironmentCaptureProbe");

	Params::ARBlueprintLibrary_AddManualEnvironmentCaptureProbe Parms{};

	Parms.Location = std::move(Location);
	Parms.Extent = std::move(Extent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "AddRuntimeCandidateImage");

	Params::ARBlueprintLibrary_AddRuntimeCandidateImage Parms{};

	Parms.SessionConfig = SessionConfig;
	Parms.CandidateTexture = CandidateTexture;
	Parms.FriendlyName = std::move(FriendlyName);
	Parms.PhysicalWidth = PhysicalWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "AddTrackedPointWithName");

	Params::ARBlueprintLibrary_AddTrackedPointWithName Parms{};

	Parms.WorldTransform = std::move(WorldTransform);
	Parms.PointName = std::move(PointName);
	Parms.bDeletePointsWithSameName = bDeletePointsWithSameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARBlueprintLibrary::CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "CalculateAlignmentTransform");

	Params::ARBlueprintLibrary_CalculateAlignmentTransform Parms{};

	Parms.TransformInFirstCoordinateSystem = std::move(TransformInFirstCoordinateSystem);
	Parms.TransformInSecondCoordinateSystem = std::move(TransformInSecondCoordinateSystem);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AlignmentTransform != nullptr)
		*AlignmentTransform = std::move(Parms.AlignmentTransform);
}

void UARBlueprintLibrary::CalculateClosestIntersection(const TArray<struct FVector>& StartPoints, const TArray<struct FVector>& EndPoints, struct FVector* ClosestIntersection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "CalculateClosestIntersection");

	Params::ARBlueprintLibrary_CalculateClosestIntersection Parms{};

	Parms.StartPoints = std::move(StartPoints);
	Parms.EndPoints = std::move(EndPoints);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClosestIntersection != nullptr)
		*ClosestIntersection = std::move(Parms.ClosestIntersection);
}

void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "DebugDrawPin");

	Params::ARBlueprintLibrary_DebugDrawPin Parms{};

	Parms.ARPin = ARPin;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Color = std::move(Color);
	Parms.Scale = Scale;
	Parms.PersistForSeconds = PersistForSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "DebugDrawTrackedGeometry");

	Params::ARBlueprintLibrary_DebugDrawTrackedGeometry Parms{};

	Parms.TrackedGeometry = TrackedGeometry;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Color = std::move(Color);
	Parms.OutlineThickness = OutlineThickness;
	Parms.PersistForSeconds = PersistForSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(const class FString& PointName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "FindTrackedPointsByName");

	Params::ARBlueprintLibrary_FindTrackedPointsByName Parms{};

	Parms.PointName = std::move(PointName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARBlueprintLibrary::GetAlignmentTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAlignmentTransform");

	Params::ARBlueprintLibrary_GetAlignmentTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllGeometries");

	Params::ARBlueprintLibrary_GetAllGeometries Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(TSubclassOf<class UARTrackedGeometry> GeometryClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllGeometriesByClass");

	Params::ARBlueprintLibrary_GetAllGeometriesByClass Parms{};

	Parms.GeometryClass = GeometryClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UARPin*> UARBlueprintLibrary::GetAllPins()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllPins");

	Params::ARBlueprintLibrary_GetAllPins Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTracked2DPoses");

	Params::ARBlueprintLibrary_GetAllTracked2DPoses Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedEnvironmentCaptureProbes");

	Params::ARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedImages");

	Params::ARBlueprintLibrary_GetAllTrackedImages Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedPlanes");

	Params::ARBlueprintLibrary_GetAllTrackedPlanes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoints");

	Params::ARBlueprintLibrary_GetAllTrackedPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoses");

	Params::ARBlueprintLibrary_GetAllTrackedPoses Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetARSessionStatus");

	Params::ARBlueprintLibrary_GetARSessionStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARTexture* UARBlueprintLibrary::GetARTexture(EARTextureType TextureType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetARTexture");

	Params::ARBlueprintLibrary_GetARTexture Parms{};

	Parms.TextureType = TextureType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARBlueprintLibrary::GetARWorldScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetARWorldScale");

	Params::ARBlueprintLibrary_GetARWorldScale Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCameraDepth");

	Params::ARBlueprintLibrary_GetCameraDepth Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCameraImage");

	Params::ARBlueprintLibrary_GetCameraImage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCameraIntrinsics");

	Params::ARBlueprintLibrary_GetCameraIntrinsics Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCameraIntrinsics != nullptr)
		*OutCameraIntrinsics = std::move(Parms.OutCameraIntrinsics);

	return Parms.ReturnValue;
}

class UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetCurrentLightEstimate");

	Params::ARBlueprintLibrary_GetCurrentLightEstimate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UARBlueprintLibrary::GetNumberOfTrackedFacesSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetNumberOfTrackedFacesSupported");

	Params::ARBlueprintLibrary_GetNumberOfTrackedFacesSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetObjectClassificationAtLocation");

	Params::ARBlueprintLibrary_GetObjectClassificationAtLocation Parms{};

	Parms.InWorldLocation = std::move(InWorldLocation);
	Parms.MaxLocationDiff = MaxLocationDiff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutClassification != nullptr)
		*OutClassification = Parms.OutClassification;

	if (OutClassificationLocation != nullptr)
		*OutClassificationLocation = std::move(Parms.OutClassificationLocation);

	return Parms.ReturnValue;
}

class UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationDepthImage");

	Params::ARBlueprintLibrary_GetPersonSegmentationDepthImage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationImage");

	Params::ARBlueprintLibrary_GetPersonSegmentationImage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector> UARBlueprintLibrary::GetPointCloud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetPointCloud");

	Params::ARBlueprintLibrary_GetPointCloud Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetSessionConfig");

	Params::ARBlueprintLibrary_GetSessionConfig Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetSupportedVideoFormats");

	Params::ARBlueprintLibrary_GetSupportedVideoFormats Parms{};

	Parms.SessionType = SessionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetTrackingQuality");

	Params::ARBlueprintLibrary_GetTrackingQuality Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetTrackingQualityReason");

	Params::ARBlueprintLibrary_GetTrackingQualityReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "GetWorldMappingStatus");

	Params::ARBlueprintLibrary_GetWorldMappingStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsARPinLocalStoreReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreReady");

	Params::ARBlueprintLibrary_IsARPinLocalStoreReady Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsARPinLocalStoreSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreSupported");

	Params::ARBlueprintLibrary_IsARPinLocalStoreSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsARSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsARSupported");

	Params::ARBlueprintLibrary_IsARSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSceneReconstructionSupported");

	Params::ARBlueprintLibrary_IsSceneReconstructionSupported Parms{};

	Parms.SessionType = SessionType;
	Parms.SceneReconstructionMethod = SceneReconstructionMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSessionTrackingFeatureSupported");

	Params::ARBlueprintLibrary_IsSessionTrackingFeatureSupported Parms{};

	Parms.SessionType = SessionType;
	Parms.SessionTrackingFeature = SessionTrackingFeature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "IsSessionTypeSupported");

	Params::ARBlueprintLibrary_IsSessionTypeSupported Parms{};

	Parms.SessionType = SessionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects");

	Params::ARBlueprintLibrary_LineTraceTrackedObjects Parms{};

	Parms.ScreenCoord = std::move(ScreenCoord);
	Parms.bTestFeaturePoints = bTestFeaturePoints;
	Parms.bTestGroundPlane = bTestGroundPlane;
	Parms.bTestPlaneExtents = bTestPlaneExtents;
	Parms.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects3D");

	Params::ARBlueprintLibrary_LineTraceTrackedObjects3D Parms{};

	Parms.Start = std::move(Start);
	Parms.End = std::move(End);
	Parms.bTestFeaturePoints = bTestFeaturePoints;
	Parms.bTestGroundPlane = bTestGroundPlane;
	Parms.bTestPlaneExtents = bTestPlaneExtents;
	Parms.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TMap<class FName, class UARPin*> UARBlueprintLibrary::LoadARPinsFromLocalStore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "LoadARPinsFromLocalStore");

	Params::ARBlueprintLibrary_LoadARPinsFromLocalStore Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARBlueprintLibrary::PauseARSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PauseARSession");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UARPin* UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName DebugName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PinComponent");

	Params::ARBlueprintLibrary_PinComponent Parms{};

	Parms.ComponentToPin = ComponentToPin;
	Parms.PinToWorldTransform = std::move(PinToWorldTransform);
	Parms.TrackedGeometry = TrackedGeometry;
	Parms.DebugName = DebugName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PinComponentToARPin");

	Params::ARBlueprintLibrary_PinComponentToARPin Parms{};

	Parms.ComponentToPin = ComponentToPin;
	Parms.Pin = Pin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARPin* UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName DebugName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "PinComponentToTraceResult");

	Params::ARBlueprintLibrary_PinComponentToTraceResult Parms{};

	Parms.ComponentToPin = ComponentToPin;
	Parms.TraceResult = std::move(TraceResult);
	Parms.DebugName = DebugName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "RemoveAllARPinsFromLocalStore");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::RemoveARPinFromLocalStore(class FName InSaveName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "RemoveARPinFromLocalStore");

	Params::ARBlueprintLibrary_RemoveARPinFromLocalStore Parms{};

	Parms.InSaveName = InSaveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "RemovePin");

	Params::ARBlueprintLibrary_RemovePin Parms{};

	Parms.PinToRemove = PinToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FIntPoint UARBlueprintLibrary::ResizeXRCamera(const struct FIntPoint& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "ResizeXRCamera");

	Params::ARBlueprintLibrary_ResizeXRCamera Parms{};

	Parms.InSize = std::move(InSize);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARBlueprintLibrary::SaveARPinToLocalStore(class FName InSaveName, class UARPin* InPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SaveARPinToLocalStore");

	Params::ARBlueprintLibrary_SaveARPinToLocalStore Parms{};

	Parms.InSaveName = InSaveName;
	Parms.InPin = InPin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetAlignmentTransform");

	Params::ARBlueprintLibrary_SetAlignmentTransform Parms{};

	Parms.InAlignmentTransform = std::move(InAlignmentTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetARWorldOriginLocationAndRotation");

	Params::ARBlueprintLibrary_SetARWorldOriginLocationAndRotation Parms{};

	Parms.OriginLocation = std::move(OriginLocation);
	Parms.OriginRotation = std::move(OriginRotation);
	Parms.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
	Parms.bMaintainUpDirection = bMaintainUpDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::SetARWorldScale(float InWorldScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetARWorldScale");

	Params::ARBlueprintLibrary_SetARWorldScale Parms{};

	Parms.InWorldScale = InWorldScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "SetEnabledXRCamera");

	Params::ARBlueprintLibrary_SetEnabledXRCamera Parms{};

	Parms.bOnOff = bOnOff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "StartARSession");

	Params::ARBlueprintLibrary_StartARSession Parms{};

	Parms.SessionConfig = SessionConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARBlueprintLibrary::StopARSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "StopARSession");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UARBlueprintLibrary::ToggleARCapture(const bool bOnOff, const EARCaptureType CaptureType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "ToggleARCapture");

	Params::ARBlueprintLibrary_ToggleARCapture Parms{};

	Parms.bOnOff = bOnOff;
	Parms.CaptureType = CaptureType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARBlueprintLibrary", "UnpinComponent");

	Params::ARBlueprintLibrary_UnpinComponent Parms{};

	Parms.ComponentToUnpin = ComponentToUnpin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetUnderlyingMesh");

	Params::ARTrackedGeometry_GetUnderlyingMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UARTrackedGeometry::GetDebugName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetDebugName");

	Params::ARTrackedGeometry_GetDebugName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UARTrackedGeometry::GetLastUpdateFrameNumber() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLastUpdateFrameNumber");

	Params::ARTrackedGeometry_GetLastUpdateFrameNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARTrackedGeometry::GetLastUpdateTimestamp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLastUpdateTimestamp");

	Params::ARTrackedGeometry_GetLastUpdateTimestamp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLocalToTrackingTransform");

	Params::ARTrackedGeometry_GetLocalToTrackingTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLocalToWorldTransform");

	Params::ARTrackedGeometry_GetLocalToWorldTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UARTrackedGeometry::GetName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetName");

	Params::ARTrackedGeometry_GetName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARObjectClassification UARTrackedGeometry::GetObjectClassification() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetObjectClassification");

	Params::ARTrackedGeometry_GetObjectClassification Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARTrackingState UARTrackedGeometry::GetTrackingState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "GetTrackingState");

	Params::ARTrackedGeometry_GetTrackingState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARTrackedGeometry::HasSpatialMeshUsageFlag(const EARSpatialMeshUsageFlags InFlag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "HasSpatialMeshUsageFlag");

	Params::ARTrackedGeometry_HasSpatialMeshUsageFlag Parms{};

	Parms.InFlag = InFlag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARTrackedGeometry::IsTracked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedGeometry", "IsTracked");

	Params::ARTrackedGeometry_IsTracked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARGeoAnchor::GetAltitudeMeters() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoAnchor", "GetAltitudeMeters");

	Params::ARGeoAnchor_GetAltitudeMeters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARAltitudeSource UARGeoAnchor::GetAltitudeSource() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoAnchor", "GetAltitudeSource");

	Params::ARGeoAnchor_GetAltitudeSource Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARGeoAnchor::GetLatitude() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoAnchor", "GetLatitude");

	Params::ARGeoAnchor_GetLatitude Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARGeoAnchor::GetLongitude() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoAnchor", "GetLongitude");

	Params::ARGeoAnchor_GetLongitude Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetDistanceFromCamera");

	Params::ARTraceResultLibrary_GetDistanceFromCamera Parms{};

	Parms.TraceResult = std::move(TraceResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetLocalToTrackingTransform");

	Params::ARTraceResultLibrary_GetLocalToTrackingTransform Parms{};

	Parms.TraceResult = std::move(TraceResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetLocalToWorldTransform");

	Params::ARTraceResultLibrary_GetLocalToWorldTransform Parms{};

	Parms.TraceResult = std::move(TraceResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARTraceResultLibrary::GetLocalTransform(const struct FARTraceResult& TraceResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetLocalTransform");

	Params::ARTraceResultLibrary_GetLocalTransform Parms{};

	Parms.TraceResult = std::move(TraceResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetTraceChannel");

	Params::ARTraceResultLibrary_GetTraceChannel Parms{};

	Parms.TraceResult = std::move(TraceResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARTraceResultLibrary", "GetTrackedGeometry");

	Params::ARTraceResultLibrary_GetTrackedGeometry Parms{};

	Parms.TraceResult = std::move(TraceResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedImage", "GetEstimateSize");

	Params::ARTrackedImage_GetEstimateSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARCandidateImage* UARTrackedImage::GetDetectedImage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedImage", "GetDetectedImage");

	Params::ARTrackedImage_GetDetectedImage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARSaveWorldAsyncTaskBlueprintProxy", "ARSaveWorld");

	Params::ARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateObject", "SetBoundingBox");

	Params::ARCandidateObject_SetBoundingBox Parms{};

	Parms.InBoundingBox = std::move(InBoundingBox);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARCandidateObject::SetCandidateObjectData(const TArray<uint8>& InCandidateObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateObject", "SetCandidateObjectData");

	Params::ARCandidateObject_SetCandidateObjectData Parms{};

	Parms.InCandidateObject = std::move(InCandidateObject);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARCandidateObject::SetFriendlyName(const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateObject", "SetFriendlyName");

	Params::ARCandidateObject_SetFriendlyName Parms{};

	Parms.NewName = std::move(NewName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FBox UARCandidateObject::GetBoundingBox() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateObject", "GetBoundingBox");

	Params::ARCandidateObject_GetBoundingBox Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<uint8> UARCandidateObject::GetCandidateObjectData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateObject", "GetCandidateObjectData");

	Params::ARCandidateObject_GetCandidateObjectData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UARCandidateObject::GetFriendlyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateObject", "GetFriendlyName");

	Params::ARCandidateObject_GetFriendlyName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARGetCandidateObjectAsyncTaskBlueprintProxy", "ARGetCandidateObject");

	Params::ARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = std::move(Location);
	Parms.Extent = std::move(Extent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPointComponent", "ReceiveAdd");

	Params::ARPointComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPointComponent", "ReceiveUpdate");

	Params::ARPointComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARPointComponent::ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPointComponent", "ServerUpdatePayload");

	Params::ARPointComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARFaceComponent", "SetFaceComponentDebugMode");

	Params::ARFaceComponent_SetFaceComponentDebugMode Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARFaceComponent", "ReceiveAdd");

	Params::ARFaceComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARFaceComponent", "ReceiveUpdate");

	Params::ARFaceComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARFaceComponent::ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARFaceComponent", "ServerUpdatePayload");

	Params::ARFaceComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARImageComponent", "SetImageComponentDebugMode");

	Params::ARImageComponent_SetImageComponentDebugMode Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARImageComponent", "ReceiveAdd");

	Params::ARImageComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARImageComponent", "ReceiveUpdate");

	Params::ARImageComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARImageComponent::ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARImageComponent", "ServerUpdatePayload");

	Params::ARImageComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARQRCodeComponent", "SetQRCodeComponentDebugMode");

	Params::ARQRCodeComponent_SetQRCodeComponentDebugMode Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARQRCodeComponent", "ReceiveAdd");

	Params::ARQRCodeComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARQRCodeComponent", "ReceiveUpdate");

	Params::ARQRCodeComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARQRCodeComponent::ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARQRCodeComponent", "ServerUpdatePayload");

	Params::ARQRCodeComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "AddCandidateImage");

	Params::ARSessionConfig_AddCandidateImage Parms{};

	Parms.NewCandidateImage = NewCandidateImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "AddCandidateObject");

	Params::ARSessionConfig_AddCandidateObject Parms{};

	Parms.CandidateObject = CandidateObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetCandidateObjectList");

	Params::ARSessionConfig_SetCandidateObjectList Parms{};

	Parms.InCandidateObjects = std::move(InCandidateObjects);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetDesiredVideoFormat");

	Params::ARSessionConfig_SetDesiredVideoFormat Parms{};

	Parms.NewFormat = std::move(NewFormat);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetEnableAutoFocus");

	Params::ARSessionConfig_SetEnableAutoFocus Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetFaceTrackingDirection");

	Params::ARSessionConfig_SetFaceTrackingDirection Parms{};

	Parms.InDirection = InDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetFaceTrackingUpdate");

	Params::ARSessionConfig_SetFaceTrackingUpdate Parms{};

	Parms.InUpdate = InUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetResetCameraTracking");

	Params::ARSessionConfig_SetResetCameraTracking Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetResetTrackedObjects");

	Params::ARSessionConfig_SetResetTrackedObjects Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetSceneReconstructionMethod");

	Params::ARSessionConfig_SetSceneReconstructionMethod Parms{};

	Parms.InSceneReconstructionMethod = InSceneReconstructionMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetSessionTrackingFeatureToEnable");

	Params::ARSessionConfig_SetSessionTrackingFeatureToEnable Parms{};

	Parms.InSessionTrackingFeature = InSessionTrackingFeature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARSessionConfig::SetWorldMapData(const TArray<uint8>& WorldMapData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "SetWorldMapData");

	Params::ARSessionConfig_SetWorldMapData Parms{};

	Parms.WorldMapData_0 = std::move(WorldMapData_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetCandidateImageList");

	Params::ARSessionConfig_GetCandidateImageList Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetCandidateObjectList");

	Params::ARSessionConfig_GetCandidateObjectList Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetDesiredVideoFormat");

	Params::ARSessionConfig_GetDesiredVideoFormat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetEnabledSessionTrackingFeature");

	Params::ARSessionConfig_GetEnabledSessionTrackingFeature Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetEnvironmentCaptureProbeType");

	Params::ARSessionConfig_GetEnvironmentCaptureProbeType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetFaceTrackingDirection");

	Params::ARSessionConfig_GetFaceTrackingDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetFaceTrackingUpdate");

	Params::ARSessionConfig_GetFaceTrackingUpdate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARFrameSyncMode UARSessionConfig::GetFrameSyncMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetFrameSyncMode");

	Params::ARSessionConfig_GetFrameSyncMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARLightEstimationMode UARSessionConfig::GetLightEstimationMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetLightEstimationMode");

	Params::ARSessionConfig_GetLightEstimationMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UARSessionConfig::GetMaxNumSimultaneousImagesTracked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetMaxNumSimultaneousImagesTracked");

	Params::ARSessionConfig_GetMaxNumSimultaneousImagesTracked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetPlaneDetectionMode");

	Params::ARSessionConfig_GetPlaneDetectionMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetSceneReconstructionMethod");

	Params::ARSessionConfig_GetSceneReconstructionMethod Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARSessionType UARSessionConfig::GetSessionType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetSessionType");

	Params::ARSessionConfig_GetSessionType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARWorldAlignment UARSessionConfig::GetWorldAlignment() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetWorldAlignment");

	Params::ARSessionConfig_GetWorldAlignment Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<uint8> UARSessionConfig::GetWorldMapData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "GetWorldMapData");

	Params::ARSessionConfig_GetWorldMapData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldEnableAutoFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "ShouldEnableAutoFocus");

	Params::ARSessionConfig_ShouldEnableAutoFocus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldEnableCameraTracking() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "ShouldEnableCameraTracking");

	Params::ARSessionConfig_ShouldEnableCameraTracking Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldRenderCameraOverlay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "ShouldRenderCameraOverlay");

	Params::ARSessionConfig_ShouldRenderCameraOverlay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldResetCameraTracking() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "ShouldResetCameraTracking");

	Params::ARSessionConfig_ShouldResetCameraTracking Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARSessionConfig::ShouldResetTrackedObjects() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSessionConfig", "ShouldResetTrackedObjects");

	Params::ARSessionConfig_ShouldResetTrackedObjects Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARPoseComponent", "SetPoseComponentDebugMode");

	Params::ARPoseComponent_SetPoseComponentDebugMode Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPoseComponent", "ReceiveAdd");

	Params::ARPoseComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPoseComponent", "ReceiveUpdate");

	Params::ARPoseComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARPoseComponent::ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPoseComponent", "ServerUpdatePayload");

	Params::ARPoseComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ReceiveAdd");

	Params::AREnvironmentProbeComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ReceiveUpdate");

	Params::AREnvironmentProbeComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UAREnvironmentProbeComponent::ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ServerUpdatePayload");

	Params::AREnvironmentProbeComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARLifeCycleComponent::ServerDestroyARActor(class AARActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARLifeCycleComponent", "ServerDestroyARActor");

	Params::ARLifeCycleComponent_ServerDestroyARActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARLifeCycleComponent", "ServerSpawnARActor");

	Params::ARLifeCycleComponent_ServerSpawnARActor Parms{};

	Parms.ComponentClass = ComponentClass;
	Parms.NativeID = std::move(NativeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARObjectComponent", "ReceiveAdd");

	Params::ARObjectComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARObjectComponent", "ReceiveUpdate");

	Params::ARObjectComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARObjectComponent::ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARObjectComponent", "ServerUpdatePayload");

	Params::ARObjectComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARMeshComponent", "ReceiveAdd");

	Params::ARMeshComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARMeshComponent", "ReceiveUpdate");

	Params::ARMeshComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARMeshComponent::ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARMeshComponent", "ServerUpdatePayload");

	Params::ARMeshComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARGeoAnchorComponent", "SetGeoAnchorComponentDebugMode");

	Params::ARGeoAnchorComponent_SetGeoAnchorComponentDebugMode Parms{};

	Parms.NewDebugMode = NewDebugMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ReceiveAdd");

	Params::ARGeoAnchorComponent_ReceiveAdd Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ReceiveUpdate");

	Params::ARGeoAnchorComponent_ReceiveUpdate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UARGeoAnchorComponent::ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ServerUpdatePayload");

	Params::ARGeoAnchorComponent_ServerUpdatePayload Parms{};

	Parms.NewPayload = std::move(NewPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARDependencyHandler", "GetARDependencyHandler");

	Params::ARDependencyHandler_GetARDependencyHandler Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UARDependencyHandler::CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceAvailability* OutAvailability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARDependencyHandler", "CheckARServiceAvailability");

	Params::ARDependencyHandler_CheckARServiceAvailability Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAvailability != nullptr)
		*OutAvailability = Parms.OutAvailability;
}

void UARDependencyHandler::InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceInstallRequestResult* OutInstallResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARDependencyHandler", "InstallARService");

	Params::ARDependencyHandler_InstallARService Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutInstallResult != nullptr)
		*OutInstallResult = Parms.OutInstallResult;
}

void UARDependencyHandler::RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, EARServicePermissionRequestResult* OutPermissionResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARDependencyHandler", "RequestARSessionPermission");

	Params::ARDependencyHandler_RequestARSessionPermission Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SessionConfig = SessionConfig;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPermissionResult != nullptr)
		*OutPermissionResult = Parms.OutPermissionResult;
}

void UARDependencyHandler::StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARDependencyHandler", "StartARSessionLatent");

	Params::ARDependencyHandler_StartARSessionLatent Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SessionConfig = SessionConfig;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPin", "DebugDraw");

	Params::ARPin_DebugDraw Parms{};

	Parms.World = World;
	Parms.Color = std::move(Color);
	Parms.Scale = Scale;
	Parms.PersistForSeconds = PersistForSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName UARPin::GetDebugName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPin", "GetDebugName");

	Params::ARPin_GetDebugName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARPin::GetLocalToTrackingTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPin", "GetLocalToTrackingTransform");

	Params::ARPin_GetLocalToTrackingTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARPin::GetLocalToWorldTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPin", "GetLocalToWorldTransform");

	Params::ARPin_GetLocalToWorldTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USceneComponent* UARPin::GetPinnedComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPin", "GetPinnedComponent");

	Params::ARPin_GetPinnedComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARTrackedGeometry* UARPin::GetTrackedGeometry() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPin", "GetTrackedGeometry");

	Params::ARPin_GetTrackedGeometry Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARTrackingState UARPin::GetTrackingState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPin", "GetTrackingState");

	Params::ARPin_GetTrackingState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingSupport");

	Params::ARGeoTrackingSupport_GetGeoTrackingSupport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocation");

	Params::ARGeoTrackingSupport_AddGeoAnchorAtLocation Parms{};

	Parms.Longitude = Longitude;
	Parms.Latitude = Latitude;
	Parms.OptionalAnchorName = std::move(OptionalAnchorName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocationWithAltitude");

	Params::ARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude Parms{};

	Parms.Longitude = Longitude;
	Parms.Latitude = Latitude;
	Parms.AltitudeMeters = AltitudeMeters;
	Parms.OptionalAnchorName = std::move(OptionalAnchorName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingAccuracy");

	Params::ARGeoTrackingSupport_GetGeoTrackingAccuracy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingState");

	Params::ARGeoTrackingSupport_GetGeoTrackingState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingStateReason");

	Params::ARGeoTrackingSupport_GetGeoTrackingStateReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailability");

	Params::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailabilityAtLocation");

	Params::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Longitude = Longitude;
	Parms.Latitude = Latitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GetGeoLocationAsyncTaskBlueprintProxy", "GetGeoLocationAtWorldPosition");

	Params::GetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WorldPosition = std::move(WorldPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UARBasicLightEstimate::GetAmbientColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientColor");

	Params::ARBasicLightEstimate_GetAmbientColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientColorTemperatureKelvin");

	Params::ARBasicLightEstimate_GetAmbientColorTemperatureKelvin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARBasicLightEstimate::GetAmbientIntensityLumens() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientIntensityLumens");

	Params::ARBasicLightEstimate_GetAmbientIntensityLumens Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldGameMode", "GetARSharedWorldGameState");

	Params::ARSharedWorldGameMode_GetARSharedWorldGameState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AARSharedWorldGameMode::SetARSharedWorldData(const TArray<uint8>& ARWorldData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetARSharedWorldData");

	Params::ARSharedWorldGameMode_SetARSharedWorldData Parms{};

	Parms.ARWorldData = std::move(ARWorldData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetARWorldSharingIsReady");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AARSharedWorldGameMode::SetPreviewImageData(const TArray<uint8>& ImageData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetPreviewImageData");

	Params::ARSharedWorldGameMode_SetPreviewImageData Parms{};

	Parms.ImageData = std::move(ImageData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldGameState", "K2_OnARWorldMapIsReady");

	UObject::ProcessEvent(Func, nullptr);
}

void AARSharedWorldPlayerController::ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientInitSharedWorld");

	Params::ARSharedWorldPlayerController_ClientInitSharedWorld Parms{};

	Parms.PreviewImageSize = PreviewImageSize;
	Parms.ARWorldDataSize = ARWorldDataSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientUpdateARWorldData");

	Params::ARSharedWorldPlayerController_ClientUpdateARWorldData Parms{};

	Parms.Offset = Offset;
	Parms.Buffer = std::move(Buffer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientUpdatePreviewImageData");

	Params::ARSharedWorldPlayerController_ClientUpdatePreviewImageData Parms{};

	Parms.Offset = Offset;
	Parms.Buffer = std::move(Buffer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ServerMarkReadyForReceiving");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARSkyLight", "SetEnvironmentCaptureProbe");

	Params::ARSkyLight_SetEnvironmentCaptureProbe Parms{};

	Parms.InCaptureProbe = InCaptureProbe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneGeometry", "GetBoundaryPolygonInLocalSpace");

	Params::ARPlaneGeometry_GetBoundaryPolygonInLocalSpace Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UARPlaneGeometry::GetCenter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneGeometry", "GetCenter");

	Params::ARPlaneGeometry_GetCenter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UARPlaneGeometry::GetExtent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneGeometry", "GetExtent");

	Params::ARPlaneGeometry_GetExtent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARPlaneOrientation UARPlaneGeometry::GetOrientation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneGeometry", "GetOrientation");

	Params::ARPlaneGeometry_GetOrientation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARPlaneGeometry", "GetSubsumedBy");

	Params::ARPlaneGeometry_GetSubsumedBy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARFaceGeometry", "GetBlendShapes");

	Params::ARFaceGeometry_GetBlendShapes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARFaceGeometry", "GetBlendShapeValue");

	Params::ARFaceGeometry_GetBlendShapeValue Parms{};

	Parms.BlendShape = BlendShape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARFaceGeometry", "GetLocalSpaceEyeTransform");

	Params::ARFaceGeometry_GetLocalSpaceEyeTransform Parms{};

	Parms.Eye = Eye;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARFaceGeometry", "GetWorldSpaceEyeTransform");

	Params::ARFaceGeometry_GetWorldSpaceEyeTransform Parms{};

	Parms.Eye = Eye;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AREnvironmentCaptureProbe", "GetEnvironmentCaptureTexture");

	Params::AREnvironmentCaptureProbe_GetEnvironmentCaptureTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UAREnvironmentCaptureProbe::GetExtent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AREnvironmentCaptureProbe", "GetExtent");

	Params::AREnvironmentCaptureProbe_GetExtent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UARCandidateObject* UARTrackedObject::GetDetectedObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedObject", "GetDetectedObject");

	Params::ARTrackedObject_GetDetectedObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FARPose3D UARTrackedPose::GetTrackedPoseData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARTrackedPose", "GetTrackedPoseData");

	Params::ARTrackedPose_GetTrackedPoseData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARMeshGeometry", "GetObjectClassificationAtLocation");

	Params::ARMeshGeometry_GetObjectClassificationAtLocation Parms{};

	Parms.InWorldLocation = std::move(InWorldLocation);
	Parms.MaxLocationDiff = MaxLocationDiff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutClassification != nullptr)
		*OutClassification = Parms.OutClassification;

	if (OutClassificationLocation != nullptr)
		*OutClassificationLocation = std::move(Parms.OutClassificationLocation);

	return Parms.ReturnValue;
}

class UTexture2D* UARCandidateImage::GetCandidateTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateImage", "GetCandidateTexture");

	Params::ARCandidateImage_GetCandidateTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UARCandidateImage::GetFriendlyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateImage", "GetFriendlyName");

	Params::ARCandidateImage_GetFriendlyName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EARCandidateImageOrientation UARCandidateImage::GetOrientation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateImage", "GetOrientation");

	Params::ARCandidateImage_GetOrientation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARCandidateImage::GetPhysicalHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateImage", "GetPhysicalHeight");

	Params::ARCandidateImage_GetPhysicalHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UARCandidateImage::GetPhysicalWidth() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ARCandidateImage", "GetPhysicalWidth");

	Params::ARCandidateImage_GetPhysicalWidth Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
