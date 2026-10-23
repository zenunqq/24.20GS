#pragma once

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_classes.hpp"
#include "HeadMountedDisplay_structs.hpp"

namespace SDK
{

class UHandKeypointConversion final : public UBlueprintFunctionLibrary
{
public:
	static int32 Conv_HandKeypointToInt32(EHandKeypoint Input);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HandKeypointConversion">();
	}
	static class UHandKeypointConversion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHandKeypointConversion>();
	}
};
static_assert(alignof(UHandKeypointConversion) == 0x000008, "Wrong alignment on UHandKeypointConversion");
static_assert(sizeof(UHandKeypointConversion) == 0x000028, "Wrong size on UHandKeypointConversion");

class UHeadMountedDisplayFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BreakKey(const struct FKey& InKey, class FString* InteractionProfile, EControllerHand* Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component);
	static void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
	static void ClearXRTimedInputActionDelegate(const class FName& ActionPath);
	static bool ConfigureGestures(const struct FXRGestureConfig& GestureConfig);
	static EXRDeviceConnectionResult ConnectRemoteXRDevice(const class FString& IpAddress, const int32 BitRate);
	static void DisconnectRemoteXRDevice();
	static bool EnableHMD(bool bEnable);
	static void EnableLowPersistenceMode(bool bEnable);
	static TArray<struct FXRDeviceId> EnumerateTrackedDevices(const class FName SystemId, EXRTrackedDeviceType DeviceType);
	static bool GetControllerTransformForTime(class UObject* WorldContext, const int32 ControllerIndex, const class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration);
	static bool GetCurrentInteractionProfile(const EControllerHand Hand, class FString* InteractionProfile);
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);
	static class FName GetHMDDeviceName();
	static EHMDWornState GetHMDWornState();
	static void GetMotionControllerData(class UObject* WorldContext, const EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData);
	static int32 GetNumOfTrackingSensors();
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static float GetPixelDensity();
	static struct FVector2D GetPlayAreaBounds(EHMDTrackingOrigin Origin);
	static bool GetPlayAreaRect(struct FTransform* OutTransform, struct FVector2D* OutRect);
	static void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	static EHMDTrackingOrigin GetTrackingOrigin();
	static bool GetTrackingOriginTransform(EHMDTrackingOrigin Origin, struct FTransform* OutTransform);
	static void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index_0);
	static struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	static class FString GetVersionString();
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static float GetWorldToMetersScale(class UObject* WorldContext);
	static int32 GetXRSystemFlags();
	static bool HasValidTrackingPosition();
	static bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	static bool IsHeadMountedDisplayConnected();
	static bool IsHeadMountedDisplayEnabled();
	static bool IsInLowPersistenceMode();
	static bool IsSpectatorScreenModeControllable();
	static void ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options);
	static void SetClippingPlanes(float Near, float Far);
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	static void SetSpectatorScreenTexture(class UTexture* InTexture);
	static void SetTrackingOrigin(EHMDTrackingOrigin Origin);
	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	static void SetXRDisconnectDelegate(const TDelegate<void(class FString& OutReason)>& InDisconnectedDelegate);
	static void SetXRTimedInputActionDelegate(const class FName& ActionName, const TDelegate<void(float Value, struct FTimespan& Time)>& InDelegate);
	static void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HeadMountedDisplayFunctionLibrary">();
	}
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeadMountedDisplayFunctionLibrary>();
	}
};
static_assert(alignof(UHeadMountedDisplayFunctionLibrary) == 0x000008, "Wrong alignment on UHeadMountedDisplayFunctionLibrary");
static_assert(sizeof(UHeadMountedDisplayFunctionLibrary) == 0x000028, "Wrong size on UHeadMountedDisplayFunctionLibrary");

class UMotionControllerComponent final : public UPrimitiveComponent
{
public:
	int32                                         PlayerIndex;
	EControllerHand                               Hand;
	uint8                                         Pad_56D[0x3];
	class FName                                   MotionSource;
	uint8                                         bDisableLowLatencyUpdate : 1;
	uint8                                         Pad_575[0x3];
	ETrackingStatus                               CurrentTrackingStatus;
	bool                                          bDisplayDeviceModel;
	uint8                                         Pad_57A[0x2];
	class FName                                   DisplayModelSource;
	class UStaticMesh*                            CustomDisplayMesh;
	TArray<class UMaterialInterface*>             DisplayMeshMaterialOverrides;
	uint8                                         Pad_598[0xD0];
	class UPrimitiveComponent*                    DisplayComponent;
	uint8                                         Pad_670[0x10];

public:
	struct FVector GetHandJointPosition(int32 jointIndex, bool* bValueFound);
	float GetParameterValue(class FName InName, bool* bValueFound);
	void OnMotionControllerUpdated();
	void SetAssociatedPlayerIndex(const int32 NewPlayer);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetDisplayModelSource(const class FName NewDisplayModelSource);
	void SetShowDeviceModel(const bool bShowControllerModel);
	void SetTrackingMotionSource(const class FName NewSource);
	void SetTrackingSource(const EControllerHand NewSource);

	EControllerHand GetTrackingSource() const;
	bool IsTracked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionControllerComponent">();
	}
	static class UMotionControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionControllerComponent>();
	}
};
static_assert(alignof(UMotionControllerComponent) == 0x000010, "Wrong alignment on UMotionControllerComponent");
static_assert(sizeof(UMotionControllerComponent) == 0x000680, "Wrong size on UMotionControllerComponent");
static_assert(offsetof(UMotionControllerComponent, PlayerIndex) == 0x000568, "Member 'UMotionControllerComponent::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, Hand) == 0x00056C, "Member 'UMotionControllerComponent::Hand' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 0x000570, "Member 'UMotionControllerComponent::MotionSource' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x000578, "Member 'UMotionControllerComponent::CurrentTrackingStatus' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, bDisplayDeviceModel) == 0x000579, "Member 'UMotionControllerComponent::bDisplayDeviceModel' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayModelSource) == 0x00057C, "Member 'UMotionControllerComponent::DisplayModelSource' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, CustomDisplayMesh) == 0x000580, "Member 'UMotionControllerComponent::CustomDisplayMesh' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayMeshMaterialOverrides) == 0x000588, "Member 'UMotionControllerComponent::DisplayMeshMaterialOverrides' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayComponent) == 0x000668, "Member 'UMotionControllerComponent::DisplayComponent' has a wrong offset!");

class UMotionTrackedDeviceFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static void DisableMotionTrackingOfAllControllers();
	static void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	static void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static TArray<class FName> EnumerateMotionSources();
	static class FName GetActiveTrackingSystemName();
	static int32 GetMaximumMotionTrackedControllerCount();
	static int32 GetMotionTrackingEnabledControllerCount();
	static bool IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName);
	static bool IsMotionTrackedDeviceCountManagementNecessary();
	static bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName);
	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionTrackedDeviceFunctionLibrary">();
	}
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionTrackedDeviceFunctionLibrary>();
	}
};
static_assert(alignof(UMotionTrackedDeviceFunctionLibrary) == 0x000008, "Wrong alignment on UMotionTrackedDeviceFunctionLibrary");
static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x000028, "Wrong size on UMotionTrackedDeviceFunctionLibrary");

class UVRNotificationsComponent final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void()>              HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;
	TMulticastInlineDelegate<void()>              HMDTrackingInitializedDelegate;
	TMulticastInlineDelegate<void()>              HMDRecenteredDelegate;
	TMulticastInlineDelegate<void()>              HMDLostDelegate;
	TMulticastInlineDelegate<void()>              HMDReconnectedDelegate;
	TMulticastInlineDelegate<void()>              HMDConnectCanceledDelegate;
	TMulticastInlineDelegate<void()>              HMDPutOnHeadDelegate;
	TMulticastInlineDelegate<void()>              HMDRemovedFromHeadDelegate;
	TMulticastInlineDelegate<void()>              VRControllerRecenteredDelegate;
	TMulticastInlineDelegate<void()>              XRTrackingOriginChangedDelegate;
	TMulticastInlineDelegate<void()>              XRPlayAreaChangedDelegate;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VRNotificationsComponent">();
	}
	static class UVRNotificationsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVRNotificationsComponent>();
	}
};
static_assert(alignof(UVRNotificationsComponent) == 0x000008, "Wrong alignment on UVRNotificationsComponent");
static_assert(sizeof(UVRNotificationsComponent) == 0x000150, "Wrong size on UVRNotificationsComponent");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate) == 0x0000A0, "Member 'UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializedDelegate) == 0x0000B0, "Member 'UVRNotificationsComponent::HMDTrackingInitializedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRecenteredDelegate) == 0x0000C0, "Member 'UVRNotificationsComponent::HMDRecenteredDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDLostDelegate) == 0x0000D0, "Member 'UVRNotificationsComponent::HMDLostDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDReconnectedDelegate) == 0x0000E0, "Member 'UVRNotificationsComponent::HMDReconnectedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDConnectCanceledDelegate) == 0x0000F0, "Member 'UVRNotificationsComponent::HMDConnectCanceledDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDPutOnHeadDelegate) == 0x000100, "Member 'UVRNotificationsComponent::HMDPutOnHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRemovedFromHeadDelegate) == 0x000110, "Member 'UVRNotificationsComponent::HMDRemovedFromHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, VRControllerRecenteredDelegate) == 0x000120, "Member 'UVRNotificationsComponent::VRControllerRecenteredDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, XRTrackingOriginChangedDelegate) == 0x000130, "Member 'UVRNotificationsComponent::XRTrackingOriginChangedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, XRPlayAreaChangedDelegate) == 0x000140, "Member 'UVRNotificationsComponent::XRPlayAreaChangedDelegate' has a wrong offset!");

class UXRAssetFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
	static class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XRAssetFunctionLibrary">();
	}
	static class UXRAssetFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXRAssetFunctionLibrary>();
	}
};
static_assert(alignof(UXRAssetFunctionLibrary) == 0x000008, "Wrong alignment on UXRAssetFunctionLibrary");
static_assert(sizeof(UXRAssetFunctionLibrary) == 0x000028, "Wrong size on UXRAssetFunctionLibrary");

class UAsyncTask_LoadXRDeviceVisComponent final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(class UPrimitiveComponent* LoadedComponent)> OnModelLoaded;
	TMulticastInlineDelegate<void(class UPrimitiveComponent* LoadedComponent)> OnLoadFailure;
	uint8                                         Pad_50[0x8];
	class UPrimitiveComponent*                    SpawnedComponent;

public:
	static class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
	static class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncTask_LoadXRDeviceVisComponent">();
	}
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncTask_LoadXRDeviceVisComponent>();
	}
};
static_assert(alignof(UAsyncTask_LoadXRDeviceVisComponent) == 0x000008, "Wrong alignment on UAsyncTask_LoadXRDeviceVisComponent");
static_assert(sizeof(UAsyncTask_LoadXRDeviceVisComponent) == 0x000060, "Wrong size on UAsyncTask_LoadXRDeviceVisComponent");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnModelLoaded) == 0x000030, "Member 'UAsyncTask_LoadXRDeviceVisComponent::OnModelLoaded' has a wrong offset!");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnLoadFailure) == 0x000040, "Member 'UAsyncTask_LoadXRDeviceVisComponent::OnLoadFailure' has a wrong offset!");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent) == 0x000058, "Member 'UAsyncTask_LoadXRDeviceVisComponent::SpawnedComponent' has a wrong offset!");

class UXRLoadingScreenFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
	static void ClearLoadingScreenSplashes();
	static void HideLoadingScreen();
	static void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	static void ShowLoadingScreen();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XRLoadingScreenFunctionLibrary">();
	}
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXRLoadingScreenFunctionLibrary>();
	}
};
static_assert(alignof(UXRLoadingScreenFunctionLibrary) == 0x000008, "Wrong alignment on UXRLoadingScreenFunctionLibrary");
static_assert(sizeof(UXRLoadingScreenFunctionLibrary) == 0x000028, "Wrong size on UXRLoadingScreenFunctionLibrary");

}
