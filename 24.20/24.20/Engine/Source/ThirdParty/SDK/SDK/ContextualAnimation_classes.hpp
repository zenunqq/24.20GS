#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ContextualAnimation_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAnimNotifyState_EarlyOutContextualAnimWindow final : public UAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_EarlyOutContextualAnimWindow">();
	}
	static class UAnimNotifyState_EarlyOutContextualAnimWindow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_EarlyOutContextualAnimWindow>();
	}
};
static_assert(alignof(UAnimNotifyState_EarlyOutContextualAnimWindow) == 0x000008, "Wrong alignment on UAnimNotifyState_EarlyOutContextualAnimWindow");
static_assert(sizeof(UAnimNotifyState_EarlyOutContextualAnimWindow) == 0x000030, "Wrong size on UAnimNotifyState_EarlyOutContextualAnimWindow");

class UAnimNotifyState_IKWindow final : public UAnimNotifyState
{
public:
	class FName                                   GoalName;
	uint8                                         Pad_34[0x4];
	struct FAlphaBlend                            BlendIn;
	struct FAlphaBlend                            BlendOut;
	bool                                          bEnable;
	uint8                                         Pad_99[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_IKWindow">();
	}
	static class UAnimNotifyState_IKWindow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_IKWindow>();
	}
};
static_assert(alignof(UAnimNotifyState_IKWindow) == 0x000008, "Wrong alignment on UAnimNotifyState_IKWindow");
static_assert(sizeof(UAnimNotifyState_IKWindow) == 0x0000A0, "Wrong size on UAnimNotifyState_IKWindow");
static_assert(offsetof(UAnimNotifyState_IKWindow, GoalName) == 0x000030, "Member 'UAnimNotifyState_IKWindow::GoalName' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_IKWindow, BlendIn) == 0x000038, "Member 'UAnimNotifyState_IKWindow::BlendIn' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_IKWindow, BlendOut) == 0x000068, "Member 'UAnimNotifyState_IKWindow::BlendOut' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_IKWindow, bEnable) == 0x000098, "Member 'UAnimNotifyState_IKWindow::bEnable' has a wrong offset!");

class IContextualAnimActorInterface final : public IInterface
{
public:
	class USkeletalMeshComponent* GetMesh() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimActorInterface">();
	}
	static class IContextualAnimActorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IContextualAnimActorInterface>();
	}
};
static_assert(alignof(IContextualAnimActorInterface) == 0x000008, "Wrong alignment on IContextualAnimActorInterface");
static_assert(sizeof(IContextualAnimActorInterface) == 0x000028, "Wrong size on IContextualAnimActorInterface");

class UContextualAnimManager final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TSet<class UContextualAnimSceneActorComponent*> SceneActorCompContainer;
	TArray<class UContextualAnimSceneInstance*>   Instances;

public:
	static class UContextualAnimManager* GetContextualAnimManager(class UObject* WorldContextObject);

	class UContextualAnimSceneInstance* BP_TryStartScene(const class UContextualAnimSceneAsset* SceneAsset, const struct FContextualAnimStartSceneParams& Params_0);
	class UContextualAnimSceneInstance* GetSceneWithActor(class AActor* Actor);
	void OnSceneInstanceEnded(class UContextualAnimSceneInstance* SceneInstance);
	bool TryStopSceneWithActor(class AActor* Actor);

	bool IsActorInAnyScene(class AActor* Actor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimManager">();
	}
	static class UContextualAnimManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimManager>();
	}
};
static_assert(alignof(UContextualAnimManager) == 0x000008, "Wrong alignment on UContextualAnimManager");
static_assert(sizeof(UContextualAnimManager) == 0x000090, "Wrong size on UContextualAnimManager");
static_assert(offsetof(UContextualAnimManager, SceneActorCompContainer) == 0x000030, "Member 'UContextualAnimManager::SceneActorCompContainer' has a wrong offset!");
static_assert(offsetof(UContextualAnimManager, Instances) == 0x000080, "Member 'UContextualAnimManager::Instances' has a wrong offset!");

class UContextualAnimSceneActorComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_568[0x8];
	TMulticastInlineDelegate<void(class UContextualAnimSceneActorComponent* SceneActorComponent)> OnJoinedSceneDelegate;
	TMulticastInlineDelegate<void(class UContextualAnimSceneActorComponent* SceneActorComponent)> OnLeftSceneDelegate;
	class UContextualAnimSceneAsset*              SceneAsset;
	bool                                          bEnableDebug;
	uint8                                         Pad_599[0x7];
	struct FContextualAnimRepBindingsData         RepBindings;
	struct FContextualAnimRepLateJoinData         RepLateJoinData;
	struct FContextualAnimRepTransitionData       RepTransitionData;
	struct FContextualAnimRepTransitionData       RepTransitionSingleActorData;
	struct FContextualAnimSceneBindings           Bindings;
	TArray<struct FContextualAnimIKTarget>        IKTargets;
	uint8                                         Pad_670[0x10];

public:
	bool LateJoinContextualAnimScene(class AActor* Actor, class FName Role);
	void OnJoinedScene(const struct FContextualAnimSceneBindings& InBindings);
	void OnLeftScene();
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnRep_Bindings();
	void OnRep_LateJoinData();
	void OnRep_RepTransitionSingleActor();
	void OnRep_TransitionData();
	void OnTickPose(class USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion);
	void ServerEarlyOutContextualAnimScene();
	void ServerStartContextualAnimScene(const struct FContextualAnimSceneBindings& InBindings);
	bool StartContextualAnimScene(const struct FContextualAnimSceneBindings& InBindings);
	bool TransitionContextualAnimScene(class FName SectionName);
	bool TransitionSingleActor(int32 SectionIdx, int32 AnimSetIdx);

	const struct FContextualAnimIKTarget GetIKTargetByGoalName(class FName GoalName) const;
	const TArray<struct FContextualAnimIKTarget> GetIKTargets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSceneActorComponent">();
	}
	static class UContextualAnimSceneActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSceneActorComponent>();
	}
};
static_assert(alignof(UContextualAnimSceneActorComponent) == 0x000010, "Wrong alignment on UContextualAnimSceneActorComponent");
static_assert(sizeof(UContextualAnimSceneActorComponent) == 0x000680, "Wrong size on UContextualAnimSceneActorComponent");
static_assert(offsetof(UContextualAnimSceneActorComponent, OnJoinedSceneDelegate) == 0x000570, "Member 'UContextualAnimSceneActorComponent::OnJoinedSceneDelegate' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, OnLeftSceneDelegate) == 0x000580, "Member 'UContextualAnimSceneActorComponent::OnLeftSceneDelegate' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, SceneAsset) == 0x000590, "Member 'UContextualAnimSceneActorComponent::SceneAsset' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, bEnableDebug) == 0x000598, "Member 'UContextualAnimSceneActorComponent::bEnableDebug' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepBindings) == 0x0005A0, "Member 'UContextualAnimSceneActorComponent::RepBindings' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepLateJoinData) == 0x0005E0, "Member 'UContextualAnimSceneActorComponent::RepLateJoinData' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepTransitionData) == 0x000608, "Member 'UContextualAnimSceneActorComponent::RepTransitionData' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepTransitionSingleActorData) == 0x000620, "Member 'UContextualAnimSceneActorComponent::RepTransitionSingleActorData' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, Bindings) == 0x000638, "Member 'UContextualAnimSceneActorComponent::Bindings' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneActorComponent, IKTargets) == 0x000660, "Member 'UContextualAnimSceneActorComponent::IKTargets' has a wrong offset!");

class UContextualAnimRolesAsset final : public UDataAsset
{
public:
	TArray<struct FContextualAnimRoleDefinition>  Roles;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimRolesAsset">();
	}
	static class UContextualAnimRolesAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimRolesAsset>();
	}
};
static_assert(alignof(UContextualAnimRolesAsset) == 0x000008, "Wrong alignment on UContextualAnimRolesAsset");
static_assert(sizeof(UContextualAnimRolesAsset) == 0x000040, "Wrong size on UContextualAnimRolesAsset");
static_assert(offsetof(UContextualAnimRolesAsset, Roles) == 0x000030, "Member 'UContextualAnimRolesAsset::Roles' has a wrong offset!");

class UContextualAnimSceneAsset final : public UDataAsset
{
public:
	class UContextualAnimRolesAsset*              RolesAsset;
	class FName                                   PrimaryRole;
	uint8                                         Pad_3C[0x4];
	TArray<struct FContextualAnimActorPreviewData> OverridePreviewData;
	TArray<struct FContextualAnimSceneSection>    Sections;
	float                                         Radius;
	uint8                                         Pad_64[0x4];
	TSubclassOf<class UContextualAnimSceneInstance> SceneInstanceClass;
	bool                                          bDisableCollisionBetweenActors;
	bool                                          bPrecomputeAlignmentTracks;
	uint8                                         Pad_72[0x2];
	int32                                         SampleRate;

public:
	class UAnimSequenceBase* BP_FindAnimationForRole(int32 SectionIdx, int32 AnimSetIdx, class FName Role) const;
	int32 BP_FindAnimSetIndexByAnimation(int32 SectionIdx, const class UAnimSequenceBase* Animation) const;
	struct FTransform BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32 SectionIdx, int32 AnimSetIdx, class FName Role, float Time) const;
	struct FTransform BP_GetIKTargetTransformForRoleAtTime(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName trackName, float Time) const;
	void BP_GetStartAndEndTimeForWarpSection(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName WarpSectionName, float* OutStartTime, float* OutEndTime) const;
	void GetAlignmentPointsForSecondaryRole(EContextualAnimPointType Type, int32 SectionIdx, const struct FContextualAnimSceneBindingContext& Primary, TArray<struct FContextualAnimPoint>* outResult) const;
	void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType Type, int32 SectionIdx, const struct FContextualAnimSceneBindingContext& Primary, const struct FContextualAnimSceneBindingContext& Querier, EContextualAnimCriterionToConsider CriterionToConsider, TArray<struct FContextualAnimPoint>* outResult) const;
	TArray<class FName> GetRoles() const;
	bool Query(class FName Role, struct FContextualAnimQueryResult* outResult, const struct FContextualAnimQueryParams& QueryParams, const struct FTransform& ToWorldTransform) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSceneAsset">();
	}
	static class UContextualAnimSceneAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSceneAsset>();
	}
};
static_assert(alignof(UContextualAnimSceneAsset) == 0x000008, "Wrong alignment on UContextualAnimSceneAsset");
static_assert(sizeof(UContextualAnimSceneAsset) == 0x000078, "Wrong size on UContextualAnimSceneAsset");
static_assert(offsetof(UContextualAnimSceneAsset, RolesAsset) == 0x000030, "Member 'UContextualAnimSceneAsset::RolesAsset' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, PrimaryRole) == 0x000038, "Member 'UContextualAnimSceneAsset::PrimaryRole' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, OverridePreviewData) == 0x000040, "Member 'UContextualAnimSceneAsset::OverridePreviewData' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, Sections) == 0x000050, "Member 'UContextualAnimSceneAsset::Sections' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, Radius) == 0x000060, "Member 'UContextualAnimSceneAsset::Radius' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, SceneInstanceClass) == 0x000068, "Member 'UContextualAnimSceneAsset::SceneInstanceClass' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, bDisableCollisionBetweenActors) == 0x000070, "Member 'UContextualAnimSceneAsset::bDisableCollisionBetweenActors' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, bPrecomputeAlignmentTracks) == 0x000071, "Member 'UContextualAnimSceneAsset::bPrecomputeAlignmentTracks' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneAsset, SampleRate) == 0x000074, "Member 'UContextualAnimSceneAsset::SampleRate' has a wrong offset!");

class UContextualAnimSceneInstance final : public UObject
{
public:
	TMulticastInlineDelegate<void(class UContextualAnimSceneInstance* SceneInstance)> OnSectionEndTimeReached;
	TMulticastInlineDelegate<void(class UContextualAnimSceneInstance* SceneInstance)> OnSceneEnded;
	TMulticastInlineDelegate<void(class UContextualAnimSceneInstance* SceneInstance, class AActor* Actor)> OnActorJoined;
	TMulticastInlineDelegate<void(class UContextualAnimSceneInstance* SceneInstance, class AActor* Actor)> OnActorLeft;
	TMulticastInlineDelegate<void(class UContextualAnimSceneInstance* SceneInstance, class AActor* Actor, class FName NotifyName)> OnNotifyBegin;
	TMulticastInlineDelegate<void(class UContextualAnimSceneInstance* SceneInstance, class AActor* Actor, class FName NotifyName)> OnNotifyEnd;
	class UContextualAnimSceneAsset*              SceneAsset;
	struct FContextualAnimSceneBindings           Bindings;
	uint8                                         Pad_B8[0x18];

public:
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	class AActor* GetActorByRole(class FName Role) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSceneInstance">();
	}
	static class UContextualAnimSceneInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSceneInstance>();
	}
};
static_assert(alignof(UContextualAnimSceneInstance) == 0x000008, "Wrong alignment on UContextualAnimSceneInstance");
static_assert(sizeof(UContextualAnimSceneInstance) == 0x0000D0, "Wrong size on UContextualAnimSceneInstance");
static_assert(offsetof(UContextualAnimSceneInstance, OnSectionEndTimeReached) == 0x000028, "Member 'UContextualAnimSceneInstance::OnSectionEndTimeReached' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneInstance, OnSceneEnded) == 0x000038, "Member 'UContextualAnimSceneInstance::OnSceneEnded' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneInstance, OnActorJoined) == 0x000048, "Member 'UContextualAnimSceneInstance::OnActorJoined' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneInstance, OnActorLeft) == 0x000058, "Member 'UContextualAnimSceneInstance::OnActorLeft' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneInstance, OnNotifyBegin) == 0x000068, "Member 'UContextualAnimSceneInstance::OnNotifyBegin' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneInstance, OnNotifyEnd) == 0x000078, "Member 'UContextualAnimSceneInstance::OnNotifyEnd' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneInstance, SceneAsset) == 0x000088, "Member 'UContextualAnimSceneInstance::SceneAsset' has a wrong offset!");
static_assert(offsetof(UContextualAnimSceneInstance, Bindings) == 0x000090, "Member 'UContextualAnimSceneInstance::Bindings' has a wrong offset!");

class UContextualAnimSelectionCriterion : public UObject
{
public:
	EContextualAnimCriterionType                  Type;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSelectionCriterion">();
	}
	static class UContextualAnimSelectionCriterion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSelectionCriterion>();
	}
};
static_assert(alignof(UContextualAnimSelectionCriterion) == 0x000008, "Wrong alignment on UContextualAnimSelectionCriterion");
static_assert(sizeof(UContextualAnimSelectionCriterion) == 0x000030, "Wrong size on UContextualAnimSelectionCriterion");
static_assert(offsetof(UContextualAnimSelectionCriterion, Type) == 0x000028, "Member 'UContextualAnimSelectionCriterion::Type' has a wrong offset!");

class UContextualAnimSelectionCriterion_Blueprint final : public UContextualAnimSelectionCriterion
{
public:
	bool BP_DoesQuerierPassCondition(const struct FContextualAnimSceneBindingContext& Primary, const struct FContextualAnimSceneBindingContext& Querier) const;
	const class UContextualAnimSceneAsset* GetSceneAsset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSelectionCriterion_Blueprint">();
	}
	static class UContextualAnimSelectionCriterion_Blueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSelectionCriterion_Blueprint>();
	}
};
static_assert(alignof(UContextualAnimSelectionCriterion_Blueprint) == 0x000008, "Wrong alignment on UContextualAnimSelectionCriterion_Blueprint");
static_assert(sizeof(UContextualAnimSelectionCriterion_Blueprint) == 0x000030, "Wrong size on UContextualAnimSelectionCriterion_Blueprint");

class UContextualAnimSelectionCriterion_TriggerArea final : public UContextualAnimSelectionCriterion
{
public:
	TArray<struct FVector>                        PolygonPoints;
	float                                         Height;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSelectionCriterion_TriggerArea">();
	}
	static class UContextualAnimSelectionCriterion_TriggerArea* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSelectionCriterion_TriggerArea>();
	}
};
static_assert(alignof(UContextualAnimSelectionCriterion_TriggerArea) == 0x000008, "Wrong alignment on UContextualAnimSelectionCriterion_TriggerArea");
static_assert(sizeof(UContextualAnimSelectionCriterion_TriggerArea) == 0x000048, "Wrong size on UContextualAnimSelectionCriterion_TriggerArea");
static_assert(offsetof(UContextualAnimSelectionCriterion_TriggerArea, PolygonPoints) == 0x000030, "Member 'UContextualAnimSelectionCriterion_TriggerArea::PolygonPoints' has a wrong offset!");
static_assert(offsetof(UContextualAnimSelectionCriterion_TriggerArea, Height) == 0x000040, "Member 'UContextualAnimSelectionCriterion_TriggerArea::Height' has a wrong offset!");

class UContextualAnimSelectionCriterion_Cone final : public UContextualAnimSelectionCriterion
{
public:
	EContextualAnimCriterionConeMode              Mode;
	uint8                                         Pad_31[0x3];
	float                                         Distance;
	float                                         HalfAngle;
	float                                         Offset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSelectionCriterion_Cone">();
	}
	static class UContextualAnimSelectionCriterion_Cone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSelectionCriterion_Cone>();
	}
};
static_assert(alignof(UContextualAnimSelectionCriterion_Cone) == 0x000008, "Wrong alignment on UContextualAnimSelectionCriterion_Cone");
static_assert(sizeof(UContextualAnimSelectionCriterion_Cone) == 0x000040, "Wrong size on UContextualAnimSelectionCriterion_Cone");
static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, Mode) == 0x000030, "Member 'UContextualAnimSelectionCriterion_Cone::Mode' has a wrong offset!");
static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, Distance) == 0x000034, "Member 'UContextualAnimSelectionCriterion_Cone::Distance' has a wrong offset!");
static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, HalfAngle) == 0x000038, "Member 'UContextualAnimSelectionCriterion_Cone::HalfAngle' has a wrong offset!");
static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, Offset) == 0x00003C, "Member 'UContextualAnimSelectionCriterion_Cone::Offset' has a wrong offset!");

class UContextualAnimSelectionCriterion_Distance final : public UContextualAnimSelectionCriterion
{
public:
	EContextualAnimCriterionDistanceMode          Mode;
	uint8                                         Pad_31[0x3];
	float                                         MinDistance;
	float                                         MaxDistance;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimSelectionCriterion_Distance">();
	}
	static class UContextualAnimSelectionCriterion_Distance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimSelectionCriterion_Distance>();
	}
};
static_assert(alignof(UContextualAnimSelectionCriterion_Distance) == 0x000008, "Wrong alignment on UContextualAnimSelectionCriterion_Distance");
static_assert(sizeof(UContextualAnimSelectionCriterion_Distance) == 0x000040, "Wrong size on UContextualAnimSelectionCriterion_Distance");
static_assert(offsetof(UContextualAnimSelectionCriterion_Distance, Mode) == 0x000030, "Member 'UContextualAnimSelectionCriterion_Distance::Mode' has a wrong offset!");
static_assert(offsetof(UContextualAnimSelectionCriterion_Distance, MinDistance) == 0x000034, "Member 'UContextualAnimSelectionCriterion_Distance::MinDistance' has a wrong offset!");
static_assert(offsetof(UContextualAnimSelectionCriterion_Distance, MaxDistance) == 0x000038, "Member 'UContextualAnimSelectionCriterion_Distance::MaxDistance' has a wrong offset!");

class UContextualAnimTransition final : public UObject
{
public:
	bool CanEnterTransition(const class UContextualAnimSceneInstance* SceneInstance, const class FName& FromSection, const class FName& ToSection) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimTransition">();
	}
	static class UContextualAnimTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimTransition>();
	}
};
static_assert(alignof(UContextualAnimTransition) == 0x000008, "Wrong alignment on UContextualAnimTransition");
static_assert(sizeof(UContextualAnimTransition) == 0x000028, "Wrong size on UContextualAnimTransition");

class UContextualAnimUtilities final : public UBlueprintFunctionLibrary
{
public:
	static bool BP_CreateContextualAnimSceneBindings(const class UContextualAnimSceneAsset* SceneAsset, const TMap<class FName, struct FContextualAnimSceneBindingContext>& Params_0, struct FContextualAnimSceneBindings* OutBindings);
	static bool BP_CreateContextualAnimSceneBindingsForTwoActors(const class UContextualAnimSceneAsset* SceneAsset, const struct FContextualAnimSceneBindingContext& Primary, const struct FContextualAnimSceneBindingContext& Secondary, struct FContextualAnimSceneBindings* OutBindings);
	static void BP_DrawDebugPose(const class UObject* WorldContextObject, const class UAnimSequenceBase* Animation, float Time, const struct FTransform& LocalToWorldTransform, const struct FLinearColor& Color, float LifeTime, float Thickness);
	static float BP_Montage_GetSectionLength(const class UAnimMontage* Montage, int32 SectionIndex);
	static void BP_Montage_GetSectionStartAndEndTime(const class UAnimMontage* Montage, int32 SectionIndex, float* OutStartTime, float* OutEndTime);
	static float BP_Montage_GetSectionTimeLeftFromPos(const class UAnimMontage* Montage, float Position);
	static class AActor* BP_SceneBinding_GetActor(const struct FContextualAnimSceneBinding& Binding);
	static const class UAnimSequenceBase* BP_SceneBinding_GetAnimationFromBinding(const struct FContextualAnimSceneBindings& Bindings, const struct FContextualAnimSceneBinding& Binding);
	static class FName BP_SceneBinding_GetRoleFromBinding(const struct FContextualAnimSceneBindings& Bindings, const struct FContextualAnimSceneBinding& Binding);
	static class USkeletalMeshComponent* BP_SceneBinding_GetSkeletalMesh(const struct FContextualAnimSceneBinding& Binding);
	static class AActor* BP_SceneBindingContext_GetActor(const struct FContextualAnimSceneBindingContext& BindingContext);
	static struct FTransform BP_SceneBindingContext_GetTransform(const struct FContextualAnimSceneBindingContext& BindingContext);
	static struct FVector BP_SceneBindingContext_GetVelocity(const struct FContextualAnimSceneBindingContext& BindingContext);
	static struct FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActor(class AActor* Actor);
	static struct FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActorWithExternalTransform(class AActor* Actor, const struct FTransform& ExternalTransform);
	static void BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(const struct FContextualAnimSceneBindings& Bindings);
	static void BP_SceneBindings_CalculateWarpPoints(const struct FContextualAnimSceneBindings& Bindings, TArray<struct FContextualAnimWarpPoint>* OutWarpPoints);
	static struct FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(const struct FContextualAnimSceneBindings& Bindings, class FName Role, class FName RelativeToRole, float Time);
	static struct FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(const struct FContextualAnimSceneBindings& Bindings, class FName Role, const struct FContextualAnimWarpPoint& WarpPoint, float Time);
	static struct FTransform BP_SceneBindings_GetAlignmentTransformFromBinding(const struct FContextualAnimSceneBindings& Bindings, const struct FContextualAnimSceneBinding& Binding, const struct FContextualAnimWarpPoint& WarpPoint);
	static const struct FContextualAnimSceneBinding BP_SceneBindings_GetBindingByActor(const struct FContextualAnimSceneBindings& Bindings, const class AActor* Actor);
	static const struct FContextualAnimSceneBinding BP_SceneBindings_GetBindingByRole(const struct FContextualAnimSceneBindings& Bindings, class FName Role);
	static const TArray<struct FContextualAnimSceneBinding> BP_SceneBindings_GetBindings(const struct FContextualAnimSceneBindings& Bindings);
	static const class UContextualAnimSceneAsset* BP_SceneBindings_GetSceneAsset(const struct FContextualAnimSceneBindings& Bindings);
	static void BP_SceneBindings_GetSectionAndAnimSetIndices(const struct FContextualAnimSceneBindings& Bindings, int32* SectionIdx, int32* AnimSetIdx);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextualAnimUtilities">();
	}
	static class UContextualAnimUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualAnimUtilities>();
	}
};
static_assert(alignof(UContextualAnimUtilities) == 0x000008, "Wrong alignment on UContextualAnimUtilities");
static_assert(sizeof(UContextualAnimUtilities) == 0x000028, "Wrong size on UContextualAnimUtilities");

}
