#pragma once

#include "Basic.hpp"

#include "AudioGameplay_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UAudioShapeComponent : public UAudioGameplayComponent
{
public:
	uint8                                         Pad_A8[0x8];
	float                                         MaxDistanceOffset;
	float                                         SmoothingDistance;
	float                                         FadeInTime;
	float                                         FadeOutTime;
	TMulticastInlineDelegate<void(bool bIsAudible)> OnAudibleStateChanged;
	TMap<class FName, class UAudioComponent*>     AudioComponents;
	TArray<class APlayerController*>              LocalControllers;
	uint8                                         Pad_130[0x10];

public:
	void Disable();
	void Enable();
	void UpdateAudioShape(const TArray<class APlayerController*>& InLocalControllers);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapeComponent">();
	}
	static class UAudioShapeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapeComponent>();
	}
};
static_assert(alignof(UAudioShapeComponent) == 0x000008, "Wrong alignment on UAudioShapeComponent");
static_assert(sizeof(UAudioShapeComponent) == 0x000140, "Wrong size on UAudioShapeComponent");
static_assert(offsetof(UAudioShapeComponent, MaxDistanceOffset) == 0x0000B0, "Member 'UAudioShapeComponent::MaxDistanceOffset' has a wrong offset!");
static_assert(offsetof(UAudioShapeComponent, SmoothingDistance) == 0x0000B4, "Member 'UAudioShapeComponent::SmoothingDistance' has a wrong offset!");
static_assert(offsetof(UAudioShapeComponent, FadeInTime) == 0x0000B8, "Member 'UAudioShapeComponent::FadeInTime' has a wrong offset!");
static_assert(offsetof(UAudioShapeComponent, FadeOutTime) == 0x0000BC, "Member 'UAudioShapeComponent::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UAudioShapeComponent, OnAudibleStateChanged) == 0x0000C0, "Member 'UAudioShapeComponent::OnAudibleStateChanged' has a wrong offset!");
static_assert(offsetof(UAudioShapeComponent, AudioComponents) == 0x0000D0, "Member 'UAudioShapeComponent::AudioComponents' has a wrong offset!");
static_assert(offsetof(UAudioShapeComponent, LocalControllers) == 0x000120, "Member 'UAudioShapeComponent::LocalControllers' has a wrong offset!");

class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{
public:
	class USoundBase*                             SoundOnEdge;
	class USoundBase*                             SoundOnInside;
	TMulticastInlineDelegate<void(bool bIsInside)> OnInsideStateChanged;
	bool                                          bUseOwningActorTransform;
	bool                                          bAutoRefreshShape;
	uint8                                         Pad_162[0x6];
	struct FVector                                ActorTransformScale;
	uint8                                         Pad_180[0x48];

public:
	class UAudioComponent* GetEdgeAudioComponent();
	class UAudioComponent* GetInsideAudioComponent();

	bool GetIsPlayerInside() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapePrimitiveComponent">();
	}
	static class UAudioShapePrimitiveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapePrimitiveComponent>();
	}
};
static_assert(alignof(UAudioShapePrimitiveComponent) == 0x000008, "Wrong alignment on UAudioShapePrimitiveComponent");
static_assert(sizeof(UAudioShapePrimitiveComponent) == 0x0001C8, "Wrong size on UAudioShapePrimitiveComponent");
static_assert(offsetof(UAudioShapePrimitiveComponent, SoundOnEdge) == 0x000140, "Member 'UAudioShapePrimitiveComponent::SoundOnEdge' has a wrong offset!");
static_assert(offsetof(UAudioShapePrimitiveComponent, SoundOnInside) == 0x000148, "Member 'UAudioShapePrimitiveComponent::SoundOnInside' has a wrong offset!");
static_assert(offsetof(UAudioShapePrimitiveComponent, OnInsideStateChanged) == 0x000150, "Member 'UAudioShapePrimitiveComponent::OnInsideStateChanged' has a wrong offset!");
static_assert(offsetof(UAudioShapePrimitiveComponent, bUseOwningActorTransform) == 0x000160, "Member 'UAudioShapePrimitiveComponent::bUseOwningActorTransform' has a wrong offset!");
static_assert(offsetof(UAudioShapePrimitiveComponent, bAutoRefreshShape) == 0x000161, "Member 'UAudioShapePrimitiveComponent::bAutoRefreshShape' has a wrong offset!");
static_assert(offsetof(UAudioShapePrimitiveComponent, ActorTransformScale) == 0x000168, "Member 'UAudioShapePrimitiveComponent::ActorTransformScale' has a wrong offset!");

class UAudioShapeBoxComponent final : public UAudioShapePrimitiveComponent
{
public:
	uint8                                         Pad_1C8[0x8];
	struct FTransform                             BoxTransform;

public:
	void SetBoxTransform(const struct FTransform& InTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapeBoxComponent">();
	}
	static class UAudioShapeBoxComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapeBoxComponent>();
	}
};
static_assert(alignof(UAudioShapeBoxComponent) == 0x000010, "Wrong alignment on UAudioShapeBoxComponent");
static_assert(sizeof(UAudioShapeBoxComponent) == 0x000230, "Wrong size on UAudioShapeBoxComponent");
static_assert(offsetof(UAudioShapeBoxComponent, BoxTransform) == 0x0001D0, "Member 'UAudioShapeBoxComponent::BoxTransform' has a wrong offset!");

class UAudioShapeCylinderComponent final : public UAudioShapePrimitiveComponent
{
public:
	float                                         HalfHeight;
	float                                         Radius;

public:
	void SetHalfHeight(float InHalfHeight);
	void SetRadius(float InRadius);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapeCylinderComponent">();
	}
	static class UAudioShapeCylinderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapeCylinderComponent>();
	}
};
static_assert(alignof(UAudioShapeCylinderComponent) == 0x000008, "Wrong alignment on UAudioShapeCylinderComponent");
static_assert(sizeof(UAudioShapeCylinderComponent) == 0x0001D0, "Wrong size on UAudioShapeCylinderComponent");
static_assert(offsetof(UAudioShapeCylinderComponent, HalfHeight) == 0x0001C8, "Member 'UAudioShapeCylinderComponent::HalfHeight' has a wrong offset!");
static_assert(offsetof(UAudioShapeCylinderComponent, Radius) == 0x0001CC, "Member 'UAudioShapeCylinderComponent::Radius' has a wrong offset!");

class UAudioShapeLineComponent final : public UAudioShapePrimitiveComponent
{
public:
	struct FVector                                StartPoint;
	struct FVector                                EndPoint;

public:
	void SetEndPoint(const struct FVector& InEndPoint);
	void SetStartPoint(const struct FVector& InStartPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapeLineComponent">();
	}
	static class UAudioShapeLineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapeLineComponent>();
	}
};
static_assert(alignof(UAudioShapeLineComponent) == 0x000008, "Wrong alignment on UAudioShapeLineComponent");
static_assert(sizeof(UAudioShapeLineComponent) == 0x0001F8, "Wrong size on UAudioShapeLineComponent");
static_assert(offsetof(UAudioShapeLineComponent, StartPoint) == 0x0001C8, "Member 'UAudioShapeLineComponent::StartPoint' has a wrong offset!");
static_assert(offsetof(UAudioShapeLineComponent, EndPoint) == 0x0001E0, "Member 'UAudioShapeLineComponent::EndPoint' has a wrong offset!");

class UAudioShapeLineListComponent final : public UAudioShapePrimitiveComponent
{
public:
	TArray<struct FVector>                        PointList;
	bool                                          bClosedLoop;
	uint8                                         Pad_1D9[0x7];

public:
	int32 AddPoint(const struct FVector& InPoint);
	bool RemovePoint(int32 InIndex);
	bool UpdatePoint(int32 InIndex, const struct FVector& InPoint);

	void GetPoints(TArray<struct FVector>* OutPoints) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapeLineListComponent">();
	}
	static class UAudioShapeLineListComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapeLineListComponent>();
	}
};
static_assert(alignof(UAudioShapeLineListComponent) == 0x000008, "Wrong alignment on UAudioShapeLineListComponent");
static_assert(sizeof(UAudioShapeLineListComponent) == 0x0001E0, "Wrong size on UAudioShapeLineListComponent");
static_assert(offsetof(UAudioShapeLineListComponent, PointList) == 0x0001C8, "Member 'UAudioShapeLineListComponent::PointList' has a wrong offset!");
static_assert(offsetof(UAudioShapeLineListComponent, bClosedLoop) == 0x0001D8, "Member 'UAudioShapeLineListComponent::bClosedLoop' has a wrong offset!");

class UAudioShapeSphereComponent final : public UAudioShapePrimitiveComponent
{
public:
	float                                         Radius;
	uint8                                         Pad_1CC[0x4];

public:
	void SetRadius(float InRadius);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapeSphereComponent">();
	}
	static class UAudioShapeSphereComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapeSphereComponent>();
	}
};
static_assert(alignof(UAudioShapeSphereComponent) == 0x000008, "Wrong alignment on UAudioShapeSphereComponent");
static_assert(sizeof(UAudioShapeSphereComponent) == 0x0001D0, "Wrong size on UAudioShapeSphereComponent");
static_assert(offsetof(UAudioShapeSphereComponent, Radius) == 0x0001C8, "Member 'UAudioShapeSphereComponent::Radius' has a wrong offset!");

class UAudioShapeSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x28];
	TArray<class UAudioShapeComponent*>           AudioShapes;
	TArray<class APlayerController*>              LocalControllers;
	uint8                                         Pad_78[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioShapeSubsystem">();
	}
	static class UAudioShapeSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioShapeSubsystem>();
	}
};
static_assert(alignof(UAudioShapeSubsystem) == 0x000008, "Wrong alignment on UAudioShapeSubsystem");
static_assert(sizeof(UAudioShapeSubsystem) == 0x000088, "Wrong size on UAudioShapeSubsystem");
static_assert(offsetof(UAudioShapeSubsystem, AudioShapes) == 0x000058, "Member 'UAudioShapeSubsystem::AudioShapes' has a wrong offset!");
static_assert(offsetof(UAudioShapeSubsystem, LocalControllers) == 0x000068, "Member 'UAudioShapeSubsystem::LocalControllers' has a wrong offset!");

}
