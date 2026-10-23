#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GeometryCollectionEngine_structs.hpp"
#include "Chaos_structs.hpp"
#include "ChaosSolverEngine_structs.hpp"

namespace SDK
{

class UGeometryCollectionISMPoolSubSystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionISMPoolSubSystem">();
	}
	static class UGeometryCollectionISMPoolSubSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionISMPoolSubSystem>();
	}
};
static_assert(alignof(UGeometryCollectionISMPoolSubSystem) == 0x000008, "Wrong alignment on UGeometryCollectionISMPoolSubSystem");
static_assert(sizeof(UGeometryCollectionISMPoolSubSystem) == 0x000038, "Wrong size on UGeometryCollectionISMPoolSubSystem");

class UChaosDestructionListener final : public USceneComponent
{
public:
	uint8                                         bIsCollisionEventListeningEnabled : 1;
	uint8                                         bIsBreakingEventListeningEnabled : 1;
	uint8                                         bIsTrailingEventListeningEnabled : 1;
	uint8                                         bIsRemovalEventListeningEnabled : 1;
	uint8                                         Pad_2A1[0x3];
	struct FChaosCollisionEventRequestSettings    CollisionEventRequestSettings;
	struct FChaosBreakingEventRequestSettings     BreakingEventRequestSettings;
	struct FChaosTrailingEventRequestSettings     TrailingEventRequestSettings;
	struct FChaosRemovalEventRequestSettings      RemovalEventRequestSettings;
	uint8                                         Pad_2FC[0x4];
	TSet<class AChaosSolverActor*>                ChaosSolverActors;
	TSet<class AGeometryCollectionActor*>         GeometryCollectionActors;
	TMulticastInlineDelegate<void(TArray<struct FChaosCollisionEventData>& CollisionEvents)> OnCollisionEvents;
	TMulticastInlineDelegate<void(TArray<struct FChaosBreakingEventData>& BreakingEvents)> OnBreakingEvents;
	TMulticastInlineDelegate<void(TArray<struct FChaosTrailingEventData>& TrailingEvents)> OnTrailingEvents;
	TMulticastInlineDelegate<void(TArray<struct FChaosRemovalEventData>& RemovalEvents)> OnRemovalEvents;
	uint8                                         Pad_3E0[0x170];

public:
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
	void SetRemovalEventEnabled(bool bIsEnabled);
	void SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
	void SortRemovalEvents(TArray<struct FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);
	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);

	bool IsEventListening() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosDestructionListener">();
	}
	static class UChaosDestructionListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosDestructionListener>();
	}
};
static_assert(alignof(UChaosDestructionListener) == 0x000010, "Wrong alignment on UChaosDestructionListener");
static_assert(sizeof(UChaosDestructionListener) == 0x000550, "Wrong size on UChaosDestructionListener");
static_assert(offsetof(UChaosDestructionListener, CollisionEventRequestSettings) == 0x0002A4, "Member 'UChaosDestructionListener::CollisionEventRequestSettings' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, BreakingEventRequestSettings) == 0x0002BC, "Member 'UChaosDestructionListener::BreakingEventRequestSettings' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, TrailingEventRequestSettings) == 0x0002D4, "Member 'UChaosDestructionListener::TrailingEventRequestSettings' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, RemovalEventRequestSettings) == 0x0002EC, "Member 'UChaosDestructionListener::RemovalEventRequestSettings' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, ChaosSolverActors) == 0x000300, "Member 'UChaosDestructionListener::ChaosSolverActors' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, GeometryCollectionActors) == 0x000350, "Member 'UChaosDestructionListener::GeometryCollectionActors' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, OnCollisionEvents) == 0x0003A0, "Member 'UChaosDestructionListener::OnCollisionEvents' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, OnBreakingEvents) == 0x0003B0, "Member 'UChaosDestructionListener::OnBreakingEvents' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, OnTrailingEvents) == 0x0003C0, "Member 'UChaosDestructionListener::OnTrailingEvents' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, OnRemovalEvents) == 0x0003D0, "Member 'UChaosDestructionListener::OnRemovalEvents' has a wrong offset!");

class AGeometryCollectionActor final : public AActor
{
public:
	class UGeometryCollectionComponent*           GeometryCollectionComponent;
	class UGeometryCollectionDebugDrawComponent*  GeometryCollectionDebugDrawComponent;

public:
	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionActor">();
	}
	static class AGeometryCollectionActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCollectionActor>();
	}
};
static_assert(alignof(AGeometryCollectionActor) == 0x000008, "Wrong alignment on AGeometryCollectionActor");
static_assert(sizeof(AGeometryCollectionActor) == 0x000298, "Wrong size on AGeometryCollectionActor");
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionComponent) == 0x000288, "Member 'AGeometryCollectionActor::GeometryCollectionComponent' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent) == 0x000290, "Member 'AGeometryCollectionActor::GeometryCollectionDebugDrawComponent' has a wrong offset!");

class UGeometryCollectionCache final : public UObject
{
public:
	struct FRecordedTransformTrack                RecordedData;
	class UGeometryCollection*                    SupportedCollection;
	struct FGuid                                  CompatibleCollectionState;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionCache">();
	}
	static class UGeometryCollectionCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionCache>();
	}
};
static_assert(alignof(UGeometryCollectionCache) == 0x000008, "Wrong alignment on UGeometryCollectionCache");
static_assert(sizeof(UGeometryCollectionCache) == 0x000050, "Wrong size on UGeometryCollectionCache");
static_assert(offsetof(UGeometryCollectionCache, RecordedData) == 0x000028, "Member 'UGeometryCollectionCache::RecordedData' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionCache, SupportedCollection) == 0x000038, "Member 'UGeometryCollectionCache::SupportedCollection' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionCache, CompatibleCollectionState) == 0x000040, "Member 'UGeometryCollectionCache::CompatibleCollectionState' has a wrong offset!");

class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                         Pad_5A0[0x8];
	class AChaosSolverActor*                      ChaosSolverActor;
	uint8                                         Pad_5B0[0xE8];
	class UGeometryCollection*                    RestCollection;
	TArray<class AFieldSystemActor*>              InitializationFields;
	bool                                          Simulating;
	uint8                                         Pad_6B1[0x1];
	EObjectStateTypeEnum                          ObjectType;
	uint8                                         Pad_6B3[0x1];
	int32                                         GravityGroupIndex;
	bool                                          bForceMotionBlur;
	bool                                          EnableClustering;
	uint8                                         Pad_6BA[0x2];
	int32                                         ClusterGroupIndex;
	int32                                         MaxClusterLevel;
	int32                                         MaxSimulatedLevel;
	TArray<float>                                 DamageThreshold;
	bool                                          bUseSizeSpecificDamageThreshold;
	uint8                                         Pad_6D9[0x3];
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;
	bool                                          bEnableDamageFromCollision;
	bool                                          bAllowRemovalOnSleep;
	bool                                          bAllowRemovalOnBreak;
	EClusterConnectionTypeEnum                    ClusterConnectionType;
	int32                                         CollisionGroup;
	float                                         CollisionSampleFraction;
	float                                         LinearEtherDrag;
	float                                         AngularEtherDrag;
	uint8                                         Pad_6FC[0x4];
	class UChaosPhysicalMaterial*                 PhysicalMaterial;
	EInitialVelocityTypeEnum                      InitialVelocityType;
	uint8                                         Pad_709[0x7];
	struct FVector                                InitialLinearVelocity;
	struct FVector                                InitialAngularVelocity;
	class UPhysicalMaterial*                      PhysicalMaterialOverride;
	struct FGeomComponentCacheParameters          CacheParameters;
	TArray<struct FTransform>                     RestTransforms;
	TMulticastInlineDelegate<void(class UGeometryCollectionComponent* FracturedComponent)> NotifyGeometryCollectionPhysicsStateChange;
	TMulticastInlineDelegate<void(class UGeometryCollectionComponent* FracturedComponent)> NotifyGeometryCollectionPhysicsLoadingStateChange;
	uint8                                         Pad_7C8[0x18];
	TMulticastInlineDelegate<void(struct FChaosBreakEvent& BreakEvent)> OnChaosBreakEvent;
	TMulticastInlineDelegate<void(struct FChaosRemovalEvent& RemovalEvent)> OnChaosRemovalEvent;
	TMulticastInlineDelegate<void(struct FChaosCrumblingEvent& CrumbleEvent)> OnChaosCrumblingEvent;
	float                                         DesiredCacheTime;
	bool                                          CachePlayback;
	uint8                                         Pad_815[0x3];
	TMulticastInlineDelegate<void(struct FChaosPhysicsCollisionInfo& CollisionInfo)> OnChaosPhysicsCollision;
	bool                                          bNotifyBreaks;
	bool                                          bNotifyCollisions;
	bool                                          bNotifyTrailing;
	bool                                          bNotifyRemovals;
	bool                                          bNotifyCrumblings;
	bool                                          bCrumblingEventIncludesChildren;
	bool                                          bStoreVelocities;
	bool                                          bShowBoneColors;
	bool                                          bUseRootProxyForNavigation;
	bool                                          bUpdateNavigationInTick;
	uint8                                         Pad_832[0x6];
	class AGeometryCollectionISMPoolActor*        ISMPool;
	bool                                          bAutoAssignISMPool;
	uint8                                         Pad_841[0x7];
	TArray<float>                                 ISMPoolMaterialCustomData;
	uint8                                         Pad_858[0x30];
	bool                                          bEnableReplication;
	bool                                          bEnableAbandonAfterLevel;
	uint8                                         Pad_88A[0x2];
	class FName                                   AbandonedCollisionProfileName;
	TArray<class FName>                           CollisionProfilePerLevel;
	int32                                         ReplicationAbandonClusterLevel;
	int32                                         ReplicationAbandonAfterLevel;
	struct FGeometryCollectionRepData             RepData;
	uint8                                         Pad_8D8[0x290];
	class UBodySetup*                             DummyBodySetup;
	class UChaosGameplayEventDispatcher*          EventDispatcher;
	TArray<class UInstancedStaticMeshComponent*>  EmbeddedGeometryComponents;
	uint8                                         Pad_B88[0x28];

public:
	void ApplyAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity);
	void ApplyBreakingAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity);
	void ApplyBreakingLinearVelocity(int32 ItemIndex, const struct FVector& LinearVelocity);
	void ApplyExternalStrain(int32 ItemIndex, const struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyInternalStrain(int32 ItemIndex, const struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyKinematicField(float Radius, const struct FVector& Position);
	void ApplyLinearVelocity(int32 ItemIndex, const struct FVector& LinearVelocity);
	void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void CrumbleActiveClusters();
	void CrumbleCluster(int32 ItemIndex);
	class FString GetDebugInfo();
	int32 GetInitialLevel(int32 ItemIndex);
	void GetMassAndExtents(int32 ItemIndex, float* OutMass, struct FBox* OutExtents);
	void OnRep_RepData();
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void RemoveAllAnchors();
	void SetAbandonedParticleCollisionProfileName(class FName CollisionProfile);
	void SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32 MaxLevel);
	void SetAnchoredByIndex(int32 Index_0, bool bAnchored);
	void SetAnchoredByTransformedBox(const struct FBox& Box, const struct FTransform& Transform, bool bAnchored, int32 MaxLevel);
	void SetEnableDamageFromCollision(bool bValue);
	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
	void SetNotifyRemovals(bool bNewNotifyRemovals);
	void SetPerLevelCollisionProfileNames(const TArray<class FName>& ProfileNames);
	void SetRestCollection(const class UGeometryCollection* RestCollectionIn);

	struct FBox GetLocalBounds() const;
	int32 GetRootIndex() const;
	bool IsRootBroken() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionComponent">();
	}
	static class UGeometryCollectionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionComponent>();
	}
};
static_assert(alignof(UGeometryCollectionComponent) == 0x000010, "Wrong alignment on UGeometryCollectionComponent");
static_assert(sizeof(UGeometryCollectionComponent) == 0x000BB0, "Wrong size on UGeometryCollectionComponent");
static_assert(offsetof(UGeometryCollectionComponent, ChaosSolverActor) == 0x0005A8, "Member 'UGeometryCollectionComponent::ChaosSolverActor' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, RestCollection) == 0x000698, "Member 'UGeometryCollectionComponent::RestCollection' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitializationFields) == 0x0006A0, "Member 'UGeometryCollectionComponent::InitializationFields' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, Simulating) == 0x0006B0, "Member 'UGeometryCollectionComponent::Simulating' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ObjectType) == 0x0006B2, "Member 'UGeometryCollectionComponent::ObjectType' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, GravityGroupIndex) == 0x0006B4, "Member 'UGeometryCollectionComponent::GravityGroupIndex' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bForceMotionBlur) == 0x0006B8, "Member 'UGeometryCollectionComponent::bForceMotionBlur' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, EnableClustering) == 0x0006B9, "Member 'UGeometryCollectionComponent::EnableClustering' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ClusterGroupIndex) == 0x0006BC, "Member 'UGeometryCollectionComponent::ClusterGroupIndex' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, MaxClusterLevel) == 0x0006C0, "Member 'UGeometryCollectionComponent::MaxClusterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, MaxSimulatedLevel) == 0x0006C4, "Member 'UGeometryCollectionComponent::MaxSimulatedLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, DamageThreshold) == 0x0006C8, "Member 'UGeometryCollectionComponent::DamageThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bUseSizeSpecificDamageThreshold) == 0x0006D8, "Member 'UGeometryCollectionComponent::bUseSizeSpecificDamageThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, DamagePropagationData) == 0x0006DC, "Member 'UGeometryCollectionComponent::DamagePropagationData' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bEnableDamageFromCollision) == 0x0006E8, "Member 'UGeometryCollectionComponent::bEnableDamageFromCollision' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bAllowRemovalOnSleep) == 0x0006E9, "Member 'UGeometryCollectionComponent::bAllowRemovalOnSleep' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bAllowRemovalOnBreak) == 0x0006EA, "Member 'UGeometryCollectionComponent::bAllowRemovalOnBreak' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ClusterConnectionType) == 0x0006EB, "Member 'UGeometryCollectionComponent::ClusterConnectionType' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CollisionGroup) == 0x0006EC, "Member 'UGeometryCollectionComponent::CollisionGroup' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CollisionSampleFraction) == 0x0006F0, "Member 'UGeometryCollectionComponent::CollisionSampleFraction' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, LinearEtherDrag) == 0x0006F4, "Member 'UGeometryCollectionComponent::LinearEtherDrag' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, AngularEtherDrag) == 0x0006F8, "Member 'UGeometryCollectionComponent::AngularEtherDrag' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterial) == 0x000700, "Member 'UGeometryCollectionComponent::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitialVelocityType) == 0x000708, "Member 'UGeometryCollectionComponent::InitialVelocityType' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitialLinearVelocity) == 0x000710, "Member 'UGeometryCollectionComponent::InitialLinearVelocity' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitialAngularVelocity) == 0x000728, "Member 'UGeometryCollectionComponent::InitialAngularVelocity' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterialOverride) == 0x000740, "Member 'UGeometryCollectionComponent::PhysicalMaterialOverride' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CacheParameters) == 0x000748, "Member 'UGeometryCollectionComponent::CacheParameters' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, RestTransforms) == 0x000798, "Member 'UGeometryCollectionComponent::RestTransforms' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsStateChange) == 0x0007A8, "Member 'UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsLoadingStateChange) == 0x0007B8, "Member 'UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosBreakEvent) == 0x0007E0, "Member 'UGeometryCollectionComponent::OnChaosBreakEvent' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosRemovalEvent) == 0x0007F0, "Member 'UGeometryCollectionComponent::OnChaosRemovalEvent' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosCrumblingEvent) == 0x000800, "Member 'UGeometryCollectionComponent::OnChaosCrumblingEvent' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, DesiredCacheTime) == 0x000810, "Member 'UGeometryCollectionComponent::DesiredCacheTime' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CachePlayback) == 0x000814, "Member 'UGeometryCollectionComponent::CachePlayback' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosPhysicsCollision) == 0x000818, "Member 'UGeometryCollectionComponent::OnChaosPhysicsCollision' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyBreaks) == 0x000828, "Member 'UGeometryCollectionComponent::bNotifyBreaks' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyCollisions) == 0x000829, "Member 'UGeometryCollectionComponent::bNotifyCollisions' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyTrailing) == 0x00082A, "Member 'UGeometryCollectionComponent::bNotifyTrailing' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyRemovals) == 0x00082B, "Member 'UGeometryCollectionComponent::bNotifyRemovals' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyCrumblings) == 0x00082C, "Member 'UGeometryCollectionComponent::bNotifyCrumblings' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bCrumblingEventIncludesChildren) == 0x00082D, "Member 'UGeometryCollectionComponent::bCrumblingEventIncludesChildren' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bStoreVelocities) == 0x00082E, "Member 'UGeometryCollectionComponent::bStoreVelocities' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bShowBoneColors) == 0x00082F, "Member 'UGeometryCollectionComponent::bShowBoneColors' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bUseRootProxyForNavigation) == 0x000830, "Member 'UGeometryCollectionComponent::bUseRootProxyForNavigation' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bUpdateNavigationInTick) == 0x000831, "Member 'UGeometryCollectionComponent::bUpdateNavigationInTick' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ISMPool) == 0x000838, "Member 'UGeometryCollectionComponent::ISMPool' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bAutoAssignISMPool) == 0x000840, "Member 'UGeometryCollectionComponent::bAutoAssignISMPool' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ISMPoolMaterialCustomData) == 0x000848, "Member 'UGeometryCollectionComponent::ISMPoolMaterialCustomData' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bEnableReplication) == 0x000888, "Member 'UGeometryCollectionComponent::bEnableReplication' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bEnableAbandonAfterLevel) == 0x000889, "Member 'UGeometryCollectionComponent::bEnableAbandonAfterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, AbandonedCollisionProfileName) == 0x00088C, "Member 'UGeometryCollectionComponent::AbandonedCollisionProfileName' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CollisionProfilePerLevel) == 0x000890, "Member 'UGeometryCollectionComponent::CollisionProfilePerLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ReplicationAbandonClusterLevel) == 0x0008A0, "Member 'UGeometryCollectionComponent::ReplicationAbandonClusterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ReplicationAbandonAfterLevel) == 0x0008A4, "Member 'UGeometryCollectionComponent::ReplicationAbandonAfterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, RepData) == 0x0008A8, "Member 'UGeometryCollectionComponent::RepData' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, DummyBodySetup) == 0x000B68, "Member 'UGeometryCollectionComponent::DummyBodySetup' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, EventDispatcher) == 0x000B70, "Member 'UGeometryCollectionComponent::EventDispatcher' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, EmbeddedGeometryComponents) == 0x000B78, "Member 'UGeometryCollectionComponent::EmbeddedGeometryComponents' has a wrong offset!");

class AGeometryCollectionDebugDrawActor final : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;
	uint8                                         Pad_289[0x7];
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;
	bool                                          bDebugDrawWholeCollection;
	bool                                          bDebugDrawHierarchy;
	bool                                          bDebugDrawClustering;
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;
	bool                                          bShowRigidBodyId;
	bool                                          bShowRigidBodyCollision;
	bool                                          bCollisionAtOrigin;
	bool                                          bShowRigidBodyTransform;
	bool                                          bShowRigidBodyInertia;
	bool                                          bShowRigidBodyVelocity;
	bool                                          bShowRigidBodyForce;
	bool                                          bShowRigidBodyInfos;
	bool                                          bShowTransformIndex;
	bool                                          bShowTransform;
	bool                                          bShowParent;
	bool                                          bShowLevel;
	bool                                          bShowConnectivityEdges;
	bool                                          bShowGeometryIndex;
	bool                                          bShowGeometryTransform;
	bool                                          bShowBoundingBox;
	bool                                          bShowFaces;
	bool                                          bShowFaceIndices;
	bool                                          bShowFaceNormals;
	bool                                          bShowSingleFace;
	int32                                         SingleFaceIndex;
	bool                                          bShowVertices;
	bool                                          bShowVertexIndices;
	bool                                          bShowVertexNormals;
	bool                                          bUseActiveVisualization;
	float                                         PointThickness;
	float                                         LineThickness;
	bool                                          bTextShadow;
	uint8                                         Pad_2D1[0x3];
	float                                         TextScale;
	float                                         NormalScale;
	float                                         AxisScale;
	float                                         ArrowScale;
	struct FColor                                 RigidBodyIdColor;
	float                                         RigidBodyTransformScale;
	struct FColor                                 RigidBodyCollisionColor;
	struct FColor                                 RigidBodyInertiaColor;
	struct FColor                                 RigidBodyVelocityColor;
	struct FColor                                 RigidBodyForceColor;
	struct FColor                                 RigidBodyInfoColor;
	struct FColor                                 TransformIndexColor;
	float                                         TransformScale;
	struct FColor                                 LevelColor;
	struct FColor                                 ParentColor;
	float                                         ConnectivityEdgeThickness;
	struct FColor                                 GeometryIndexColor;
	float                                         GeometryTransformScale;
	struct FColor                                 BoundingBoxColor;
	struct FColor                                 FaceColor;
	struct FColor                                 FaceIndexColor;
	struct FColor                                 FaceNormalColor;
	struct FColor                                 SingleFaceColor;
	struct FColor                                 VertexColor;
	struct FColor                                 VertexIndexColor;
	struct FColor                                 VertexNormalColor;
	uint8                                         Pad_33C[0x4];
	class UBillboardComponent*                    SpriteComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionDebugDrawActor">();
	}
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCollectionDebugDrawActor>();
	}
};
static_assert(alignof(AGeometryCollectionDebugDrawActor) == 0x000008, "Wrong alignment on AGeometryCollectionDebugDrawActor");
static_assert(sizeof(AGeometryCollectionDebugDrawActor) == 0x000348, "Wrong size on AGeometryCollectionDebugDrawActor");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, WarningMessage) == 0x000288, "Member 'AGeometryCollectionDebugDrawActor::WarningMessage' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SelectedRigidBody) == 0x000290, "Member 'AGeometryCollectionDebugDrawActor::SelectedRigidBody' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bDebugDrawWholeCollection) == 0x0002A8, "Member 'AGeometryCollectionDebugDrawActor::bDebugDrawWholeCollection' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bDebugDrawHierarchy) == 0x0002A9, "Member 'AGeometryCollectionDebugDrawActor::bDebugDrawHierarchy' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bDebugDrawClustering) == 0x0002AA, "Member 'AGeometryCollectionDebugDrawActor::bDebugDrawClustering' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, HideGeometry) == 0x0002AB, "Member 'AGeometryCollectionDebugDrawActor::HideGeometry' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyId) == 0x0002AC, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyId' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyCollision) == 0x0002AD, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyCollision' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bCollisionAtOrigin) == 0x0002AE, "Member 'AGeometryCollectionDebugDrawActor::bCollisionAtOrigin' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyTransform) == 0x0002AF, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyTransform' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyInertia) == 0x0002B0, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyInertia' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyVelocity) == 0x0002B1, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyVelocity' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyForce) == 0x0002B2, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyForce' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyInfos) == 0x0002B3, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyInfos' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowTransformIndex) == 0x0002B4, "Member 'AGeometryCollectionDebugDrawActor::bShowTransformIndex' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowTransform) == 0x0002B5, "Member 'AGeometryCollectionDebugDrawActor::bShowTransform' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowParent) == 0x0002B6, "Member 'AGeometryCollectionDebugDrawActor::bShowParent' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowLevel) == 0x0002B7, "Member 'AGeometryCollectionDebugDrawActor::bShowLevel' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowConnectivityEdges) == 0x0002B8, "Member 'AGeometryCollectionDebugDrawActor::bShowConnectivityEdges' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowGeometryIndex) == 0x0002B9, "Member 'AGeometryCollectionDebugDrawActor::bShowGeometryIndex' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowGeometryTransform) == 0x0002BA, "Member 'AGeometryCollectionDebugDrawActor::bShowGeometryTransform' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowBoundingBox) == 0x0002BB, "Member 'AGeometryCollectionDebugDrawActor::bShowBoundingBox' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowFaces) == 0x0002BC, "Member 'AGeometryCollectionDebugDrawActor::bShowFaces' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowFaceIndices) == 0x0002BD, "Member 'AGeometryCollectionDebugDrawActor::bShowFaceIndices' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowFaceNormals) == 0x0002BE, "Member 'AGeometryCollectionDebugDrawActor::bShowFaceNormals' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowSingleFace) == 0x0002BF, "Member 'AGeometryCollectionDebugDrawActor::bShowSingleFace' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SingleFaceIndex) == 0x0002C0, "Member 'AGeometryCollectionDebugDrawActor::SingleFaceIndex' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowVertices) == 0x0002C4, "Member 'AGeometryCollectionDebugDrawActor::bShowVertices' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowVertexIndices) == 0x0002C5, "Member 'AGeometryCollectionDebugDrawActor::bShowVertexIndices' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowVertexNormals) == 0x0002C6, "Member 'AGeometryCollectionDebugDrawActor::bShowVertexNormals' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bUseActiveVisualization) == 0x0002C7, "Member 'AGeometryCollectionDebugDrawActor::bUseActiveVisualization' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, PointThickness) == 0x0002C8, "Member 'AGeometryCollectionDebugDrawActor::PointThickness' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, LineThickness) == 0x0002CC, "Member 'AGeometryCollectionDebugDrawActor::LineThickness' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bTextShadow) == 0x0002D0, "Member 'AGeometryCollectionDebugDrawActor::bTextShadow' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TextScale) == 0x0002D4, "Member 'AGeometryCollectionDebugDrawActor::TextScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, NormalScale) == 0x0002D8, "Member 'AGeometryCollectionDebugDrawActor::NormalScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, AxisScale) == 0x0002DC, "Member 'AGeometryCollectionDebugDrawActor::AxisScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ArrowScale) == 0x0002E0, "Member 'AGeometryCollectionDebugDrawActor::ArrowScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyIdColor) == 0x0002E4, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyIdColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyTransformScale) == 0x0002E8, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyTransformScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyCollisionColor) == 0x0002EC, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyCollisionColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInertiaColor) == 0x0002F0, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyInertiaColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyVelocityColor) == 0x0002F4, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyVelocityColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyForceColor) == 0x0002F8, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyForceColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInfoColor) == 0x0002FC, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyInfoColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TransformIndexColor) == 0x000300, "Member 'AGeometryCollectionDebugDrawActor::TransformIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TransformScale) == 0x000304, "Member 'AGeometryCollectionDebugDrawActor::TransformScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, LevelColor) == 0x000308, "Member 'AGeometryCollectionDebugDrawActor::LevelColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ParentColor) == 0x00030C, "Member 'AGeometryCollectionDebugDrawActor::ParentColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ConnectivityEdgeThickness) == 0x000310, "Member 'AGeometryCollectionDebugDrawActor::ConnectivityEdgeThickness' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, GeometryIndexColor) == 0x000314, "Member 'AGeometryCollectionDebugDrawActor::GeometryIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, GeometryTransformScale) == 0x000318, "Member 'AGeometryCollectionDebugDrawActor::GeometryTransformScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, BoundingBoxColor) == 0x00031C, "Member 'AGeometryCollectionDebugDrawActor::BoundingBoxColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceColor) == 0x000320, "Member 'AGeometryCollectionDebugDrawActor::FaceColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceIndexColor) == 0x000324, "Member 'AGeometryCollectionDebugDrawActor::FaceIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceNormalColor) == 0x000328, "Member 'AGeometryCollectionDebugDrawActor::FaceNormalColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SingleFaceColor) == 0x00032C, "Member 'AGeometryCollectionDebugDrawActor::SingleFaceColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexColor) == 0x000330, "Member 'AGeometryCollectionDebugDrawActor::VertexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexIndexColor) == 0x000334, "Member 'AGeometryCollectionDebugDrawActor::VertexIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexNormalColor) == 0x000338, "Member 'AGeometryCollectionDebugDrawActor::VertexNormalColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SpriteComponent) == 0x000340, "Member 'AGeometryCollectionDebugDrawActor::SpriteComponent' has a wrong offset!");

class UGeometryCollectionDebugDrawComponent final : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*      GeometryCollectionDebugDrawActor;
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;
	uint8                                         Pad_B0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionDebugDrawComponent">();
	}
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionDebugDrawComponent>();
	}
};
static_assert(alignof(UGeometryCollectionDebugDrawComponent) == 0x000008, "Wrong alignment on UGeometryCollectionDebugDrawComponent");
static_assert(sizeof(UGeometryCollectionDebugDrawComponent) == 0x0000B8, "Wrong size on UGeometryCollectionDebugDrawComponent");
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor) == 0x0000A0, "Member 'UGeometryCollectionDebugDrawComponent::GeometryCollectionDebugDrawActor' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor) == 0x0000A8, "Member 'UGeometryCollectionDebugDrawComponent::GeometryCollectionRenderLevelSetActor' has a wrong offset!");

class AGeometryCollectionISMPoolActor final : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*    ISMPoolComp;
	class UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionISMPoolActor">();
	}
	static class AGeometryCollectionISMPoolActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCollectionISMPoolActor>();
	}
};
static_assert(alignof(AGeometryCollectionISMPoolActor) == 0x000008, "Wrong alignment on AGeometryCollectionISMPoolActor");
static_assert(sizeof(AGeometryCollectionISMPoolActor) == 0x000298, "Wrong size on AGeometryCollectionISMPoolActor");
static_assert(offsetof(AGeometryCollectionISMPoolActor, ISMPoolComp) == 0x000288, "Member 'AGeometryCollectionISMPoolActor::ISMPoolComp' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionISMPoolActor, ISMPoolDebugDrawComp) == 0x000290, "Member 'AGeometryCollectionISMPoolActor::ISMPoolDebugDrawComp' has a wrong offset!");

class UGeometryCollectionISMPoolComponent final : public USceneComponent
{
public:
	uint8                                         Pad_2A0[0xC0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionISMPoolComponent">();
	}
	static class UGeometryCollectionISMPoolComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionISMPoolComponent>();
	}
};
static_assert(alignof(UGeometryCollectionISMPoolComponent) == 0x000010, "Wrong alignment on UGeometryCollectionISMPoolComponent");
static_assert(sizeof(UGeometryCollectionISMPoolComponent) == 0x000360, "Wrong size on UGeometryCollectionISMPoolComponent");

class UGeometryCollection final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	bool                                          EnableClustering;
	uint8                                         Pad_39[0x3];
	int32                                         ClusterGroupIndex;
	int32                                         MaxClusterLevel;
	uint8                                         Pad_44[0x4];
	TArray<float>                                 DamageThreshold;
	bool                                          bUseSizeSpecificDamageThreshold;
	bool                                          PerClusterOnlyDamageThreshold;
	uint8                                         Pad_5A[0x2];
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;
	EClusterConnectionTypeEnum                    ClusterConnectionType;
	uint8                                         Pad_69[0x3];
	float                                         ConnectionGraphBoundsFilteringMargin;
	TArray<class UMaterialInterface*>             Materials;
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;
	bool                                          bUseFullPrecisionUVs;
	bool                                          bStripOnCook;
	bool                                          bStripRenderDataOnCook;
	uint8                                         Pad_93[0x5];
	struct FGeometryCollectionProxyMeshData       RootProxyData;
	TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;
	TArray<float>                                 AutoInstanceMaterialCustomData;
	bool                                          EnableNanite;
	bool                                          bMassAsDensity;
	uint8                                         Pad_CA[0x2];
	float                                         Mass;
	float                                         MinimumMassClamp;
	bool                                          bImportCollisionFromSource;
	bool                                          bScaleOnRemoval;
	bool                                          bRemoveOnMaxSleep;
	uint8                                         Pad_D7[0x1];
	struct FVector2D                              MaximumSleepTime;
	struct FVector2D                              RemovalDuration;
	bool                                          bSlowMovingAsSleeping;
	uint8                                         Pad_F9[0x3];
	float                                         SlowMovingVelocityThreshold;
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;
	bool                                          EnableRemovePiecesOnFracture;
	uint8                                         Pad_111[0x7];
	TArray<class UMaterialInterface*>             RemoveOnFractureMaterials;
	class UDataflow*                              DataflowAsset;
	class FString                                 DataflowTerminal;
	struct FGuid                                  PersistentGuid;
	struct FGuid                                  StateGuid;
	int32                                         RootIndex;
	int32                                         BoneSelectedMaterialIndex;
	class UMaterialInterface*                     BoneSelectedMaterial;
	uint8                                         Pad_170[0x10];
	TArray<class UAssetUserData*>                 AssetUserData;

public:
	void SetEnableNanite(bool bValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollection">();
	}
	static class UGeometryCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollection>();
	}
};
static_assert(alignof(UGeometryCollection) == 0x000008, "Wrong alignment on UGeometryCollection");
static_assert(sizeof(UGeometryCollection) == 0x000190, "Wrong size on UGeometryCollection");
static_assert(offsetof(UGeometryCollection, EnableClustering) == 0x000038, "Member 'UGeometryCollection::EnableClustering' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, ClusterGroupIndex) == 0x00003C, "Member 'UGeometryCollection::ClusterGroupIndex' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MaxClusterLevel) == 0x000040, "Member 'UGeometryCollection::MaxClusterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, DamageThreshold) == 0x000048, "Member 'UGeometryCollection::DamageThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bUseSizeSpecificDamageThreshold) == 0x000058, "Member 'UGeometryCollection::bUseSizeSpecificDamageThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, PerClusterOnlyDamageThreshold) == 0x000059, "Member 'UGeometryCollection::PerClusterOnlyDamageThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, DamagePropagationData) == 0x00005C, "Member 'UGeometryCollection::DamagePropagationData' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, ClusterConnectionType) == 0x000068, "Member 'UGeometryCollection::ClusterConnectionType' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, ConnectionGraphBoundsFilteringMargin) == 0x00006C, "Member 'UGeometryCollection::ConnectionGraphBoundsFilteringMargin' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, Materials) == 0x000070, "Member 'UGeometryCollection::Materials' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, EmbeddedGeometryExemplar) == 0x000080, "Member 'UGeometryCollection::EmbeddedGeometryExemplar' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bUseFullPrecisionUVs) == 0x000090, "Member 'UGeometryCollection::bUseFullPrecisionUVs' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bStripOnCook) == 0x000091, "Member 'UGeometryCollection::bStripOnCook' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bStripRenderDataOnCook) == 0x000092, "Member 'UGeometryCollection::bStripRenderDataOnCook' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, RootProxyData) == 0x000098, "Member 'UGeometryCollection::RootProxyData' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, AutoInstanceMeshes) == 0x0000A8, "Member 'UGeometryCollection::AutoInstanceMeshes' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, AutoInstanceMaterialCustomData) == 0x0000B8, "Member 'UGeometryCollection::AutoInstanceMaterialCustomData' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, EnableNanite) == 0x0000C8, "Member 'UGeometryCollection::EnableNanite' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bMassAsDensity) == 0x0000C9, "Member 'UGeometryCollection::bMassAsDensity' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, Mass) == 0x0000CC, "Member 'UGeometryCollection::Mass' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MinimumMassClamp) == 0x0000D0, "Member 'UGeometryCollection::MinimumMassClamp' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bImportCollisionFromSource) == 0x0000D4, "Member 'UGeometryCollection::bImportCollisionFromSource' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bScaleOnRemoval) == 0x0000D5, "Member 'UGeometryCollection::bScaleOnRemoval' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bRemoveOnMaxSleep) == 0x0000D6, "Member 'UGeometryCollection::bRemoveOnMaxSleep' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MaximumSleepTime) == 0x0000D8, "Member 'UGeometryCollection::MaximumSleepTime' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, RemovalDuration) == 0x0000E8, "Member 'UGeometryCollection::RemovalDuration' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bSlowMovingAsSleeping) == 0x0000F8, "Member 'UGeometryCollection::bSlowMovingAsSleeping' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, SlowMovingVelocityThreshold) == 0x0000FC, "Member 'UGeometryCollection::SlowMovingVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, SizeSpecificData) == 0x000100, "Member 'UGeometryCollection::SizeSpecificData' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, EnableRemovePiecesOnFracture) == 0x000110, "Member 'UGeometryCollection::EnableRemovePiecesOnFracture' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, RemoveOnFractureMaterials) == 0x000118, "Member 'UGeometryCollection::RemoveOnFractureMaterials' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, DataflowAsset) == 0x000128, "Member 'UGeometryCollection::DataflowAsset' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, DataflowTerminal) == 0x000130, "Member 'UGeometryCollection::DataflowTerminal' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, PersistentGuid) == 0x000140, "Member 'UGeometryCollection::PersistentGuid' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, StateGuid) == 0x000150, "Member 'UGeometryCollection::StateGuid' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, RootIndex) == 0x000160, "Member 'UGeometryCollection::RootIndex' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, BoneSelectedMaterialIndex) == 0x000164, "Member 'UGeometryCollection::BoneSelectedMaterialIndex' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, BoneSelectedMaterial) == 0x000168, "Member 'UGeometryCollection::BoneSelectedMaterial' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, AssetUserData) == 0x000180, "Member 'UGeometryCollection::AssetUserData' has a wrong offset!");

class alignas(0x10) AGeometryCollectionRenderLevelSetActor final : public AActor
{
public:
	class UVolumeTexture*                         TargetVolumeTexture;
	class UMaterial*                              RayMarchMaterial;
	float                                         SurfaceTolerance;
	float                                         Isovalue;
	bool                                          Enabled;
	bool                                          RenderVolumeBoundingBox;
	uint8                                         Pad_2A2[0xDE];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionRenderLevelSetActor">();
	}
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCollectionRenderLevelSetActor>();
	}
};
static_assert(alignof(AGeometryCollectionRenderLevelSetActor) == 0x000010, "Wrong alignment on AGeometryCollectionRenderLevelSetActor");
static_assert(sizeof(AGeometryCollectionRenderLevelSetActor) == 0x000380, "Wrong size on AGeometryCollectionRenderLevelSetActor");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture) == 0x000288, "Member 'AGeometryCollectionRenderLevelSetActor::TargetVolumeTexture' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial) == 0x000290, "Member 'AGeometryCollectionRenderLevelSetActor::RayMarchMaterial' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, SurfaceTolerance) == 0x000298, "Member 'AGeometryCollectionRenderLevelSetActor::SurfaceTolerance' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, Isovalue) == 0x00029C, "Member 'AGeometryCollectionRenderLevelSetActor::Isovalue' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, Enabled) == 0x0002A0, "Member 'AGeometryCollectionRenderLevelSetActor::Enabled' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, RenderVolumeBoundingBox) == 0x0002A1, "Member 'AGeometryCollectionRenderLevelSetActor::RenderVolumeBoundingBox' has a wrong offset!");

class UGeometryCollectionISMPoolDebugDrawComponent final : public UDebugDrawComponent
{
public:
	bool                                          bShowGlobalStats;
	bool                                          bShowStats;
	bool                                          bShowBounds;
	uint8                                         Pad_5BB[0x5];
	class UInstancedStaticMeshComponent*          SelectedComponent;
	uint8                                         Pad_5C8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionISMPoolDebugDrawComponent">();
	}
	static class UGeometryCollectionISMPoolDebugDrawComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionISMPoolDebugDrawComponent>();
	}
};
static_assert(alignof(UGeometryCollectionISMPoolDebugDrawComponent) == 0x000010, "Wrong alignment on UGeometryCollectionISMPoolDebugDrawComponent");
static_assert(sizeof(UGeometryCollectionISMPoolDebugDrawComponent) == 0x0005D0, "Wrong size on UGeometryCollectionISMPoolDebugDrawComponent");
static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, bShowGlobalStats) == 0x0005B8, "Member 'UGeometryCollectionISMPoolDebugDrawComponent::bShowGlobalStats' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, bShowStats) == 0x0005B9, "Member 'UGeometryCollectionISMPoolDebugDrawComponent::bShowStats' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, bShowBounds) == 0x0005BA, "Member 'UGeometryCollectionISMPoolDebugDrawComponent::bShowBounds' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, SelectedComponent) == 0x0005C0, "Member 'UGeometryCollectionISMPoolDebugDrawComponent::SelectedComponent' has a wrong offset!");

}
