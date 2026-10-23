#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "EntityActor_structs.hpp"
#include "EntityCore_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IEntityAbilityInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityAbilityInterface">();
	}
	static class IEntityAbilityInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IEntityAbilityInterface>();
	}
};
static_assert(alignof(IEntityAbilityInterface) == 0x000008, "Wrong alignment on IEntityAbilityInterface");
static_assert(sizeof(IEntityAbilityInterface) == 0x000028, "Wrong size on IEntityAbilityInterface");

class UEntityActorCustomReplicationComponent final : public UEntityComponent
{
public:
	EEntityActorReplicationOverrideType           ReplicationOverride;
	EEntityActorReplicationRelevancyBucketType    ReplicationRelevancyBucketType;
	uint8                                         Pad_62[0x2];
	float                                         CustomReplicationRelevancyRange;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorCustomReplicationComponent">();
	}
	static class UEntityActorCustomReplicationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorCustomReplicationComponent>();
	}
};
static_assert(alignof(UEntityActorCustomReplicationComponent) == 0x000008, "Wrong alignment on UEntityActorCustomReplicationComponent");
static_assert(sizeof(UEntityActorCustomReplicationComponent) == 0x000068, "Wrong size on UEntityActorCustomReplicationComponent");
static_assert(offsetof(UEntityActorCustomReplicationComponent, ReplicationOverride) == 0x000060, "Member 'UEntityActorCustomReplicationComponent::ReplicationOverride' has a wrong offset!");
static_assert(offsetof(UEntityActorCustomReplicationComponent, ReplicationRelevancyBucketType) == 0x000061, "Member 'UEntityActorCustomReplicationComponent::ReplicationRelevancyBucketType' has a wrong offset!");
static_assert(offsetof(UEntityActorCustomReplicationComponent, CustomReplicationRelevancyRange) == 0x000064, "Member 'UEntityActorCustomReplicationComponent::CustomReplicationRelevancyRange' has a wrong offset!");

class ASimObject final : public AActor
{
public:
	uint8                                         Pad_288[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimObject">();
	}
	static class ASimObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASimObject>();
	}
};
static_assert(alignof(ASimObject) == 0x000008, "Wrong alignment on ASimObject");
static_assert(sizeof(ASimObject) == 0x000290, "Wrong size on ASimObject");

class UActorToEntityAdapterComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TArray<class UEntityComponent*>               SerializedComponents;
	uint8                                         bForceOwnerReplication : 1;
	uint8                                         Pad_B9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActorToEntityAdapterComponent">();
	}
	static class UActorToEntityAdapterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActorToEntityAdapterComponent>();
	}
};
static_assert(alignof(UActorToEntityAdapterComponent) == 0x000008, "Wrong alignment on UActorToEntityAdapterComponent");
static_assert(sizeof(UActorToEntityAdapterComponent) == 0x0000C0, "Wrong size on UActorToEntityAdapterComponent");
static_assert(offsetof(UActorToEntityAdapterComponent, SerializedComponents) == 0x0000A8, "Member 'UActorToEntityAdapterComponent::SerializedComponents' has a wrong offset!");

class UEntityActorComponent : public UEntityComponent
{
public:
	uint8                                         Pad_60[0x8];
	class UActorComponent*                        ActorComponent;
	bool                                          bCreatedActorComponent;
	uint8                                         Pad_71[0x1F];

public:
	void OnRep_ActorComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorComponent">();
	}
	static class UEntityActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorComponent>();
	}
};
static_assert(alignof(UEntityActorComponent) == 0x000008, "Wrong alignment on UEntityActorComponent");
static_assert(sizeof(UEntityActorComponent) == 0x000090, "Wrong size on UEntityActorComponent");
static_assert(offsetof(UEntityActorComponent, ActorComponent) == 0x000068, "Member 'UEntityActorComponent::ActorComponent' has a wrong offset!");
static_assert(offsetof(UEntityActorComponent, bCreatedActorComponent) == 0x000070, "Member 'UEntityActorComponent::bCreatedActorComponent' has a wrong offset!");

class UEntityActorSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorSubsystem">();
	}
	static class UEntityActorSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorSubsystem>();
	}
};
static_assert(alignof(UEntityActorSubsystem) == 0x000008, "Wrong alignment on UEntityActorSubsystem");
static_assert(sizeof(UEntityActorSubsystem) == 0x000068, "Wrong size on UEntityActorSubsystem");

class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{
public:
	uint8                                         Pad_80[0x8];
	float                                         TransitionTargetTime;
	bool                                          bTargetState;
	uint8                                         Pad_8D[0x3];
	TArray<class UEntityComponent*>               LinkedComponents;
	uint8                                         Pad_A0[0x18];

public:
	void OnEnabledChanged(bool bIsEnabled);
	void OnRep_TransitionTarget();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityDynamicActivationComponent">();
	}
	static class UEntityDynamicActivationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityDynamicActivationComponent>();
	}
};
static_assert(alignof(UEntityDynamicActivationComponent) == 0x000008, "Wrong alignment on UEntityDynamicActivationComponent");
static_assert(sizeof(UEntityDynamicActivationComponent) == 0x0000B8, "Wrong size on UEntityDynamicActivationComponent");
static_assert(offsetof(UEntityDynamicActivationComponent, TransitionTargetTime) == 0x000088, "Member 'UEntityDynamicActivationComponent::TransitionTargetTime' has a wrong offset!");
static_assert(offsetof(UEntityDynamicActivationComponent, bTargetState) == 0x00008C, "Member 'UEntityDynamicActivationComponent::bTargetState' has a wrong offset!");
static_assert(offsetof(UEntityDynamicActivationComponent, LinkedComponents) == 0x000090, "Member 'UEntityDynamicActivationComponent::LinkedComponents' has a wrong offset!");

class UEntityToActorAdapterComponent final : public UEntityComponent
{
public:
	uint8                                         Pad_60[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityToActorAdapterComponent">();
	}
	static class UEntityToActorAdapterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityToActorAdapterComponent>();
	}
};
static_assert(alignof(UEntityToActorAdapterComponent) == 0x000008, "Wrong alignment on UEntityToActorAdapterComponent");
static_assert(sizeof(UEntityToActorAdapterComponent) == 0x000068, "Wrong size on UEntityToActorAdapterComponent");

class UEntityActorLocalInputComponent final : public UEntityComponent
{
public:
	EAutoReceiveInput                             AutoReceiveControllerInput;
	uint8                                         Pad_61[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorLocalInputComponent">();
	}
	static class UEntityActorLocalInputComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorLocalInputComponent>();
	}
};
static_assert(alignof(UEntityActorLocalInputComponent) == 0x000008, "Wrong alignment on UEntityActorLocalInputComponent");
static_assert(sizeof(UEntityActorLocalInputComponent) == 0x000068, "Wrong size on UEntityActorLocalInputComponent");
static_assert(offsetof(UEntityActorLocalInputComponent, AutoReceiveControllerInput) == 0x000060, "Member 'UEntityActorLocalInputComponent::AutoReceiveControllerInput' has a wrong offset!");

class UEntityActorCollisionComponent : public UEntityEnableableComponent
{
public:
	uint8                                         Pad_80[0x48];
	class FName                                   ShadowVar_CollisionProfileName;
	uint8                                         Pad_CC[0x4];
	TSoftObjectPtr<class UPrimitiveComponent>     PrimitiveComponentCache;
	uint8                                         Pad_F8[0x2];
	ECollisionShapeMode                           CollisionShapeMode;
	uint8                                         Pad_FB[0x5];

public:
	void OnEnabledChanged(bool bIsEnabled);
	void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_CollisionProfileName();
	void OnRep_PrimitiveComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorCollisionComponent">();
	}
	static class UEntityActorCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorCollisionComponent>();
	}
};
static_assert(alignof(UEntityActorCollisionComponent) == 0x000008, "Wrong alignment on UEntityActorCollisionComponent");
static_assert(sizeof(UEntityActorCollisionComponent) == 0x000100, "Wrong size on UEntityActorCollisionComponent");
static_assert(offsetof(UEntityActorCollisionComponent, ShadowVar_CollisionProfileName) == 0x0000C8, "Member 'UEntityActorCollisionComponent::ShadowVar_CollisionProfileName' has a wrong offset!");
static_assert(offsetof(UEntityActorCollisionComponent, PrimitiveComponentCache) == 0x0000D0, "Member 'UEntityActorCollisionComponent::PrimitiveComponentCache' has a wrong offset!");
static_assert(offsetof(UEntityActorCollisionComponent, CollisionShapeMode) == 0x0000FA, "Member 'UEntityActorCollisionComponent::CollisionShapeMode' has a wrong offset!");

class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{
public:
	struct FUniqueNetIdRepl                       PlayerId;
	TSoftObjectPtr<class APlayerController>       PlayerControllerCache;
	TSoftObjectPtr<class APlayerState>            PlayerStateCache;

public:
	void OnRep_PlayerId();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorPlayerComponent">();
	}
	static class UEntityActorPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorPlayerComponent>();
	}
};
static_assert(alignof(UEntityActorPlayerComponent) == 0x000008, "Wrong alignment on UEntityActorPlayerComponent");
static_assert(sizeof(UEntityActorPlayerComponent) == 0x0000E8, "Wrong size on UEntityActorPlayerComponent");
static_assert(offsetof(UEntityActorPlayerComponent, PlayerId) == 0x000068, "Member 'UEntityActorPlayerComponent::PlayerId' has a wrong offset!");
static_assert(offsetof(UEntityActorPlayerComponent, PlayerControllerCache) == 0x000098, "Member 'UEntityActorPlayerComponent::PlayerControllerCache' has a wrong offset!");
static_assert(offsetof(UEntityActorPlayerComponent, PlayerStateCache) == 0x0000C0, "Member 'UEntityActorPlayerComponent::PlayerStateCache' has a wrong offset!");

class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{
public:
	uint8                                         Pad_60[0x8];
	bool                                          bAddedMeshRenderComponent;
	uint8                                         Pad_69[0x7];
	class USkeletalMesh*                          ShadowVar_SkeletalMesh;
	ECollisionEnabled                             ShadowVar_EnableCollision;
	uint8                                         Pad_79[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorSkeletalMeshRenderComponent">();
	}
	static class UEntityActorSkeletalMeshRenderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorSkeletalMeshRenderComponent>();
	}
};
static_assert(alignof(UEntityActorSkeletalMeshRenderComponent) == 0x000008, "Wrong alignment on UEntityActorSkeletalMeshRenderComponent");
static_assert(sizeof(UEntityActorSkeletalMeshRenderComponent) == 0x000080, "Wrong size on UEntityActorSkeletalMeshRenderComponent");
static_assert(offsetof(UEntityActorSkeletalMeshRenderComponent, bAddedMeshRenderComponent) == 0x000068, "Member 'UEntityActorSkeletalMeshRenderComponent::bAddedMeshRenderComponent' has a wrong offset!");
static_assert(offsetof(UEntityActorSkeletalMeshRenderComponent, ShadowVar_SkeletalMesh) == 0x000070, "Member 'UEntityActorSkeletalMeshRenderComponent::ShadowVar_SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UEntityActorSkeletalMeshRenderComponent, ShadowVar_EnableCollision) == 0x000078, "Member 'UEntityActorSkeletalMeshRenderComponent::ShadowVar_EnableCollision' has a wrong offset!");

class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent
{
public:
	TArray<class UMaterialInterface*>             ShadowVar_MeshMaterials;
	ECollisionEnabled                             ShadowVar_EnableCollision;
	uint8                                         Pad_A1[0x3];
	float                                         ShadowVar_MaxDrawDistance;

public:
	void OnRep_EnableCollision();
	void OnRep_MaxDrawDistance();
	void OnRep_MeshMaterials();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorStaticMeshRenderComponent">();
	}
	static class UEntityActorStaticMeshRenderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorStaticMeshRenderComponent>();
	}
};
static_assert(alignof(UEntityActorStaticMeshRenderComponent) == 0x000008, "Wrong alignment on UEntityActorStaticMeshRenderComponent");
static_assert(sizeof(UEntityActorStaticMeshRenderComponent) == 0x0000A8, "Wrong size on UEntityActorStaticMeshRenderComponent");
static_assert(offsetof(UEntityActorStaticMeshRenderComponent, ShadowVar_MeshMaterials) == 0x000090, "Member 'UEntityActorStaticMeshRenderComponent::ShadowVar_MeshMaterials' has a wrong offset!");
static_assert(offsetof(UEntityActorStaticMeshRenderComponent, ShadowVar_EnableCollision) == 0x0000A0, "Member 'UEntityActorStaticMeshRenderComponent::ShadowVar_EnableCollision' has a wrong offset!");
static_assert(offsetof(UEntityActorStaticMeshRenderComponent, ShadowVar_MaxDrawDistance) == 0x0000A4, "Member 'UEntityActorStaticMeshRenderComponent::ShadowVar_MaxDrawDistance' has a wrong offset!");

class UEntityActorTextDisplayComponent final : public UEntityActorComponent
{
public:
	class FText                                   DisplayText;
	float                                         ShadowVar_WorldSize;
	struct FColor                                 ShadowVar_TextRenderColor;
	bool                                          bAddedTextRenderComponent;
	uint8                                         Pad_B1[0x7];

public:
	EHorizTextAligment GetHorizontalAlignment();
	struct FVector GetRelativeLocation();
	EVerticalTextAligment GetVerticalAlignment();
	void OnRep_DisplayText();
	void OnRep_TextRenderColor();
	void OnRep_WorldSize();
	void SetHorizontalAlignment(EHorizTextAligment Value);
	void SetRelativeLocation(const struct FVector& RelativeLocation);
	void SetRelativeRotation(const struct FRotator& RelativeRotation);
	void SetRelativeScale(const struct FVector& RelativeScale);
	void SetText(const class FText& Text);
	void SetTextRenderColor(const struct FColor& Value);
	void SetVerticalAlignment(EVerticalTextAligment Value);
	void SetWorldSize(float Value);

	class FText GetText() const;
	struct FColor GetTextRenderColor() const;
	float GetWorldSize() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorTextDisplayComponent">();
	}
	static class UEntityActorTextDisplayComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorTextDisplayComponent>();
	}
};
static_assert(alignof(UEntityActorTextDisplayComponent) == 0x000008, "Wrong alignment on UEntityActorTextDisplayComponent");
static_assert(sizeof(UEntityActorTextDisplayComponent) == 0x0000B8, "Wrong size on UEntityActorTextDisplayComponent");
static_assert(offsetof(UEntityActorTextDisplayComponent, DisplayText) == 0x000090, "Member 'UEntityActorTextDisplayComponent::DisplayText' has a wrong offset!");
static_assert(offsetof(UEntityActorTextDisplayComponent, ShadowVar_WorldSize) == 0x0000A8, "Member 'UEntityActorTextDisplayComponent::ShadowVar_WorldSize' has a wrong offset!");
static_assert(offsetof(UEntityActorTextDisplayComponent, ShadowVar_TextRenderColor) == 0x0000AC, "Member 'UEntityActorTextDisplayComponent::ShadowVar_TextRenderColor' has a wrong offset!");
static_assert(offsetof(UEntityActorTextDisplayComponent, bAddedTextRenderComponent) == 0x0000B0, "Member 'UEntityActorTextDisplayComponent::bAddedTextRenderComponent' has a wrong offset!");

class UEntityActorPositionComponent : public UEntityPositionComponent
{
public:
	struct FVector                                ShadowVar_Location;
	uint8                                         Pad_80[0x8];

public:
	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorPositionComponent">();
	}
	static class UEntityActorPositionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorPositionComponent>();
	}
};
static_assert(alignof(UEntityActorPositionComponent) == 0x000008, "Wrong alignment on UEntityActorPositionComponent");
static_assert(sizeof(UEntityActorPositionComponent) == 0x000088, "Wrong size on UEntityActorPositionComponent");
static_assert(offsetof(UEntityActorPositionComponent, ShadowVar_Location) == 0x000068, "Member 'UEntityActorPositionComponent::ShadowVar_Location' has a wrong offset!");

class UEntityActorRotationComponent : public UEntityRotationComponent
{
public:
	struct FRotator                               ShadowVar_Rotation;
	uint8                                         Pad_80[0x10];

public:
	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorRotationComponent">();
	}
	static class UEntityActorRotationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorRotationComponent>();
	}
};
static_assert(alignof(UEntityActorRotationComponent) == 0x000008, "Wrong alignment on UEntityActorRotationComponent");
static_assert(sizeof(UEntityActorRotationComponent) == 0x000090, "Wrong size on UEntityActorRotationComponent");
static_assert(offsetof(UEntityActorRotationComponent, ShadowVar_Rotation) == 0x000068, "Member 'UEntityActorRotationComponent::ShadowVar_Rotation' has a wrong offset!");

class UEntityActorScaleComponent : public UEntityScaleComponent
{
public:
	struct FVector                                ShadowVar_Scale;
	uint8                                         Pad_80[0x8];

public:
	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityActorScaleComponent">();
	}
	static class UEntityActorScaleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityActorScaleComponent>();
	}
};
static_assert(alignof(UEntityActorScaleComponent) == 0x000008, "Wrong alignment on UEntityActorScaleComponent");
static_assert(sizeof(UEntityActorScaleComponent) == 0x000088, "Wrong size on UEntityActorScaleComponent");
static_assert(offsetof(UEntityActorScaleComponent, ShadowVar_Scale) == 0x000068, "Member 'UEntityActorScaleComponent::ShadowVar_Scale' has a wrong offset!");

}
