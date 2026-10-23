#pragma once

#include "Basic.hpp"

#include "PropertyPath_structs.hpp"
#include "ControlRig_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "RigVM_structs.hpp"
#include "RigVM_classes.hpp"
#include "Constraints_structs.hpp"
#include "Constraints_classes.hpp"
#include "Engine_classes.hpp"
#include "LevelSequence_classes.hpp"
#include "MovieSceneTracks_structs.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class alignas(0x10) URigHierarchy final : public UObject
{
public:
	uint8                                         Pad_28[0x60];
	uint16                                        TopologyVersion;
	uint16                                        MetadataVersion;
	uint16                                        MetadataTagVersion;
	bool                                          bEnableDirtyPropagation;
	uint8                                         Pad_8F[0x71];
	int32                                         TransformStackIndex;
	uint8                                         Pad_104[0x6C];
	class URigHierarchyController*                HierarchyController;
	uint8                                         Pad_178[0x58];
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;
	uint8                                         Pad_220[0x80];
	class URigHierarchy*                          HierarchyForCacheValidation;
	uint8                                         Pad_2A8[0x78];

public:
	static struct FEulerTransform GetEulerTransformFromControlValue(const struct FRigControlValue& InValue);
	static float GetFloatFromControlValue(const struct FRigControlValue& InValue);
	static int32 GetIntFromControlValue(const struct FRigControlValue& InValue);
	static struct FRotator GetRotatorFromControlValue(const struct FRigControlValue& InValue);
	static struct FTransform GetTransformFromControlValue(const struct FRigControlValue& InValue);
	static struct FTransformNoScale GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue);
	static struct FVector2D GetVector2DFromControlValue(const struct FRigControlValue& InValue);
	static struct FVector GetVectorFromControlValue(const struct FRigControlValue& InValue);
	static struct FRigControlValue MakeControlValueFromBool(bool InValue);
	static struct FRigControlValue MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue);
	static struct FRigControlValue MakeControlValueFromFloat(float InValue);
	static struct FRigControlValue MakeControlValueFromInt(int32 InValue);
	static struct FRigControlValue MakeControlValueFromRotator(const struct FRotator& InValue);
	static struct FRigControlValue MakeControlValueFromTransform(const struct FTransform& InValue);
	static struct FRigControlValue MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue);
	static struct FRigControlValue MakeControlValueFromVector(const struct FVector& InValue);
	static struct FRigControlValue MakeControlValueFromVector2D(const struct FVector2D& InValue);

	void CopyHierarchy(class URigHierarchy* InHierarchy);
	void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
	class URigHierarchyController* GetController(bool bCreateIfNeeded);
	TArray<class FName> GetMetadataNames(const struct FRigElementKey& InItem);
	ERigMetadataType GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool RemoveAllMetadata(const struct FRigElementKey& InItem);
	bool RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	void Reset();
	void ResetCurveValues();
	void ResetPoseToInitial(ERigElementType InTypeFilter);
	void ResetToDefault();
	void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
	bool SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& InValue);
	bool SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool InValue);
	void SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlOffsetTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlPreferredRotator(const struct FRigElementKey& InKey, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredRotatorByIndex(int32 InElementIndex, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips);
	void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlShapeTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlValueByIndex(int32 InElementIndex, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility);
	void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
	void SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo);
	void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
	bool SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& InValue);
	bool SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float InValue);
	void SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	void SetGlobalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& InValue);
	bool SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 InValue);
	bool SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& InValue);
	bool SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& InValue);
	void SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetLocalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& InValue);
	bool SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName InValue);
	bool SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren);
	bool SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool bInitial, bool bAffectChildren);
	void SetPose_ForBlueprint(const struct FRigPose& InPose);
	bool SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& InValue);
	bool SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& InValue);
	bool SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& InValue);
	bool SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& InValue);
	bool SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& InValue);
	bool SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& InValue);
	bool SetTag(const struct FRigElementKey& InItem, class FName InTag);
	bool SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& InValue);
	bool SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& InValue);
	bool SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& InValue);
	bool SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& InValue);
	bool SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
	bool SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren);
	bool SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
	void UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo);
	void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);

	bool Contains_ForBlueprint(const struct FRigElementKey& InKey) const;
	struct FRigBoneElement FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey) const;
	struct FRigControlElement FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey) const;
	struct FRigNullElement FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey) const;
	TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse) const;
	TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse) const;
	TArray<bool> GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	bool GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool DefaultValue) const;
	TArray<struct FRigElementKey> GetChildren(const struct FRigElementKey& InKey, bool bRecursive) const;
	TArray<struct FRigElementKey> GetControlKeys(bool bTraverse) const;
	struct FRotator GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial) const;
	struct FRotator GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial) const;
	struct FRigControlValue GetControlValue(const struct FRigElementKey& InKey, ERigControlValueType InValueType) const;
	struct FRigControlValue GetControlValueByIndex(int32 InElementIndex, ERigControlValueType InValueType) const;
	TArray<struct FRigElementKey> GetCurveKeys() const;
	float GetCurveValue(const struct FRigElementKey& InKey) const;
	float GetCurveValueByIndex(int32 InElementIndex) const;
	struct FRigElementKey GetDefaultParent(const struct FRigElementKey& InKey) const;
	struct FRigElementKey GetFirstParent(const struct FRigElementKey& InKey) const;
	TArray<float> GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	float GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float DefaultValue) const;
	struct FTransform GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial) const;
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial) const;
	struct FTransform GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial) const;
	struct FTransform GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const;
	struct FTransform GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial) const;
	struct FTransform GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial) const;
	int32 GetIndex_ForBlueprint(const struct FRigElementKey& InKey) const;
	TArray<int32> GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	int32 GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 DefaultValue) const;
	struct FRigElementKey GetKey(int32 InElementIndex) const;
	TArray<struct FRigElementKey> GetKeys(const TArray<int32>& InElementIndices) const;
	TArray<struct FLinearColor> GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	struct FLinearColor GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& DefaultValue) const;
	struct FTransform GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial) const;
	struct FTransform GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const;
	struct FTransform GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial) const;
	struct FTransform GetLocalTransformByIndex(int32 InElementIndex, bool bInitial) const;
	TArray<class FName> GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	class FName GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName DefaultValue) const;
	TArray<struct FRigElementKey> GetNullKeys(bool bTraverse) const;
	int32 GetNumberOfParents(const struct FRigElementKey& InKey) const;
	TArray<struct FRigElementKey> GetParents(const struct FRigElementKey& InKey, bool bRecursive) const;
	struct FTransform GetParentTransform(const struct FRigElementKey& InKey, bool bInitial) const;
	struct FTransform GetParentTransformByIndex(int32 InElementIndex, bool bInitial) const;
	struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial) const;
	TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial) const;
	struct FRigPose GetPose(bool bInitial) const;
	class FName GetPreviousName(const struct FRigElementKey& InKey) const;
	struct FRigElementKey GetPreviousParent(const struct FRigElementKey& InKey) const;
	TArray<struct FQuat> GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	struct FQuat GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& DefaultValue) const;
	TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse) const;
	TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	struct FRigElementKey GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& DefaultValue) const;
	TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse) const;
	TArray<struct FRotator> GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	struct FRotator GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& DefaultValue) const;
	TArray<struct FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter) const;
	TArray<class FName> GetTags(const struct FRigElementKey& InItem) const;
	TArray<struct FTransform> GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	struct FTransform GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& DefaultValue) const;
	TArray<struct FVector> GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const;
	struct FVector GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& DefaultValue) const;
	bool HasTag(const struct FRigElementKey& InItem, class FName InTag) const;
	bool IsControllerAvailable() const;
	bool IsCurveValueSet(const struct FRigElementKey& InKey) const;
	bool IsCurveValueSetByIndex(int32 InElementIndex) const;
	bool IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent) const;
	bool IsProcedural(const struct FRigElementKey& InKey) const;
	bool IsSelected(const struct FRigElementKey& InKey) const;
	bool IsSelectedByIndex(int32 InIndex) const;
	bool IsValidIndex(int32 InElementIndex) const;
	int32 Num() const;
	TArray<struct FRigElementKey> SortKeys(const TArray<struct FRigElementKey>& InKeys) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigHierarchy">();
	}
	static class URigHierarchy* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigHierarchy>();
	}
};
static_assert(alignof(URigHierarchy) == 0x000010, "Wrong alignment on URigHierarchy");
static_assert(sizeof(URigHierarchy) == 0x000320, "Wrong size on URigHierarchy");
static_assert(offsetof(URigHierarchy, TopologyVersion) == 0x000088, "Member 'URigHierarchy::TopologyVersion' has a wrong offset!");
static_assert(offsetof(URigHierarchy, MetadataVersion) == 0x00008A, "Member 'URigHierarchy::MetadataVersion' has a wrong offset!");
static_assert(offsetof(URigHierarchy, MetadataTagVersion) == 0x00008C, "Member 'URigHierarchy::MetadataTagVersion' has a wrong offset!");
static_assert(offsetof(URigHierarchy, bEnableDirtyPropagation) == 0x00008E, "Member 'URigHierarchy::bEnableDirtyPropagation' has a wrong offset!");
static_assert(offsetof(URigHierarchy, TransformStackIndex) == 0x000100, "Member 'URigHierarchy::TransformStackIndex' has a wrong offset!");
static_assert(offsetof(URigHierarchy, HierarchyController) == 0x000170, "Member 'URigHierarchy::HierarchyController' has a wrong offset!");
static_assert(offsetof(URigHierarchy, PreviousNameMap) == 0x0001D0, "Member 'URigHierarchy::PreviousNameMap' has a wrong offset!");
static_assert(offsetof(URigHierarchy, HierarchyForCacheValidation) == 0x0002A0, "Member 'URigHierarchy::HierarchyForCacheValidation' has a wrong offset!");

class UTransformableControlHandle final : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>             ControlRig;
	class FName                                   ControlName;
	uint8                                         Pad_84[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TransformableControlHandle">();
	}
	static class UTransformableControlHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTransformableControlHandle>();
	}
};
static_assert(alignof(UTransformableControlHandle) == 0x000008, "Wrong alignment on UTransformableControlHandle");
static_assert(sizeof(UTransformableControlHandle) == 0x000088, "Wrong size on UTransformableControlHandle");
static_assert(offsetof(UTransformableControlHandle, ControlRig) == 0x000058, "Member 'UTransformableControlHandle::ControlRig' has a wrong offset!");
static_assert(offsetof(UTransformableControlHandle, ControlName) == 0x000080, "Member 'UTransformableControlHandle::ControlName' has a wrong offset!");

class UControlRig : public UObject
{
public:
	uint8                                         Pad_28[0x1E];
	ERigExecutionType                             ExecutionType;
	uint8                                         Pad_47[0x1];
	struct FRigHierarchySettings                  HierarchySettings;
	uint8                                         Pad_4C[0x4];
	struct FRigVMRuntimeSettings                  VMRuntimeSettings;
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;
	class URigVM*                                 VM;
	TMap<uint32, class URigVM*>                   InitializedVMSnapshots;
	uint8                                         Pad_110[0x8];
	class URigHierarchy*                          DynamicHierarchy;
	TSoftObjectPtr<class UControlRigShapeLibrary> GizmoLibrary;
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;
	uint8                                         Pad_158[0x10];
	TMap<class FName, struct FCachedPropertyPath> InputProperties;
	TMap<class FName, struct FCachedPropertyPath> OutputProperties;
	uint8                                         Pad_208[0xA8];
	struct FControlRigDrawContainer               DrawContainer;
	uint8                                         Pad_2C8[0x18];
	class UAnimationDataSourceRegistry*           DataSourceRegistry;
	TArray<class FName>                           EventQueue;
	uint8                                         Pad_2F8[0xD0];
	struct FRigInfluenceMapPerEvent               Influences;
	class UControlRig*                            InteractionRig;
	TSubclassOf<class UControlRig>                InteractionRigClass;
	TArray<class UAssetUserData*>                 AssetUserData;
	uint8                                         Pad_448[0xC8];
	FMulticastSparseDelegateProperty_             OnControlSelected_BP;
	uint8                                         Pad_511[0x47];

public:
	static TArray<class UControlRig*> FindControlRigs(class UObject* Outer_0, TSubclassOf<class UControlRig> OptionalClass);

	bool ClearControlSelection();
	bool Execute(const EControlRigState State, const class FName& InEventName);
	bool ExecuteEvent(const class FName& InEventName);
	class URigHierarchy* GetHierarchy();
	class URigVM* GetVM();
	void RequestConstruction();
	void RequestInit();
	void SelectControl(const class FName& InControlName, bool bSelect);
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
	void SetDeltaTime(float InDeltaTime);
	void SetFramesPerSecond(float InFramesPerSecond);
	void SetInteractionRig(class UControlRig* InInteractionRig);
	void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
	bool SetVariableFromString(const class FName& InVariableName, const class FString& InValue);

	bool CanExecute() const;
	bool ContainsEvent(const class FName& InEventName) const;
	class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer_0, const class FName& ControlName) const;
	TArray<class FName> CurrentControlSelection() const;
	float GetAbsoluteTime() const;
	float GetCurrentFramesPerSecond() const;
	TArray<class FName> GetEvents() const;
	class AActor* GetHostingActor() const;
	class UControlRig* GetInteractionRig() const;
	TSubclassOf<class UControlRig> GetInteractionRigClass() const;
	TArray<class FName> GetScriptAccessibleVariables() const;
	TArray<class FName> GetSupportedEvents() const;
	class FString GetVariableAsString(const class FName& InVariableName) const;
	class FName GetVariableType(const class FName& InVariableName) const;
	bool IsControlSelected(const class FName& InControlName) const;
	bool SupportsEvent(const class FName& InEventName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRig">();
	}
	static class UControlRig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRig>();
	}
};
static_assert(alignof(UControlRig) == 0x000008, "Wrong alignment on UControlRig");
static_assert(sizeof(UControlRig) == 0x000558, "Wrong size on UControlRig");
static_assert(offsetof(UControlRig, ExecutionType) == 0x000046, "Member 'UControlRig::ExecutionType' has a wrong offset!");
static_assert(offsetof(UControlRig, HierarchySettings) == 0x000048, "Member 'UControlRig::HierarchySettings' has a wrong offset!");
static_assert(offsetof(UControlRig, VMRuntimeSettings) == 0x000050, "Member 'UControlRig::VMRuntimeSettings' has a wrong offset!");
static_assert(offsetof(UControlRig, ControlCustomizations) == 0x000068, "Member 'UControlRig::ControlCustomizations' has a wrong offset!");
static_assert(offsetof(UControlRig, VM) == 0x0000B8, "Member 'UControlRig::VM' has a wrong offset!");
static_assert(offsetof(UControlRig, InitializedVMSnapshots) == 0x0000C0, "Member 'UControlRig::InitializedVMSnapshots' has a wrong offset!");
static_assert(offsetof(UControlRig, DynamicHierarchy) == 0x000118, "Member 'UControlRig::DynamicHierarchy' has a wrong offset!");
static_assert(offsetof(UControlRig, GizmoLibrary) == 0x000120, "Member 'UControlRig::GizmoLibrary' has a wrong offset!");
static_assert(offsetof(UControlRig, ShapeLibraries) == 0x000148, "Member 'UControlRig::ShapeLibraries' has a wrong offset!");
static_assert(offsetof(UControlRig, InputProperties) == 0x000168, "Member 'UControlRig::InputProperties' has a wrong offset!");
static_assert(offsetof(UControlRig, OutputProperties) == 0x0001B8, "Member 'UControlRig::OutputProperties' has a wrong offset!");
static_assert(offsetof(UControlRig, DrawContainer) == 0x0002B0, "Member 'UControlRig::DrawContainer' has a wrong offset!");
static_assert(offsetof(UControlRig, DataSourceRegistry) == 0x0002E0, "Member 'UControlRig::DataSourceRegistry' has a wrong offset!");
static_assert(offsetof(UControlRig, EventQueue) == 0x0002E8, "Member 'UControlRig::EventQueue' has a wrong offset!");
static_assert(offsetof(UControlRig, Influences) == 0x0003C8, "Member 'UControlRig::Influences' has a wrong offset!");
static_assert(offsetof(UControlRig, InteractionRig) == 0x000428, "Member 'UControlRig::InteractionRig' has a wrong offset!");
static_assert(offsetof(UControlRig, InteractionRigClass) == 0x000430, "Member 'UControlRig::InteractionRigClass' has a wrong offset!");
static_assert(offsetof(UControlRig, AssetUserData) == 0x000438, "Member 'UControlRig::AssetUserData' has a wrong offset!");
static_assert(offsetof(UControlRig, OnControlSelected_BP) == 0x000510, "Member 'UControlRig::OnControlSelected_BP' has a wrong offset!");

class UControlRigAnimInstance final : public UAnimInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigAnimInstance">();
	}
	static class UControlRigAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigAnimInstance>();
	}
};
static_assert(alignof(UControlRigAnimInstance) == 0x000010, "Wrong alignment on UControlRigAnimInstance");
static_assert(sizeof(UControlRigAnimInstance) == 0x000350, "Wrong size on UControlRigAnimInstance");

class UControlRigBlueprintGeneratedClass final : public UBlueprintGeneratedClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigBlueprintGeneratedClass">();
	}
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigBlueprintGeneratedClass>();
	}
};
static_assert(alignof(UControlRigBlueprintGeneratedClass) == 0x000010, "Wrong alignment on UControlRigBlueprintGeneratedClass");
static_assert(sizeof(UControlRigBlueprintGeneratedClass) == 0x000350, "Wrong size on UControlRigBlueprintGeneratedClass");

class UControlRigComponent final : public UPrimitiveComponent
{
public:
	TSubclassOf<class UControlRig>                ControlRigClass;
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPreInitializeDelegate;
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPostInitializeDelegate;
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPreConstructionDelegate;
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPostConstructionDelegate;
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPreForwardsSolveDelegate;
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPostForwardsSolveDelegate;
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;
	TArray<struct FControlRigComponentMappedElement> MappedElements;
	bool                                          bEnableLazyEvaluation;
	uint8                                         Pad_5F1[0x3];
	float                                         LazyEvaluationPositionThreshold;
	float                                         LazyEvaluationRotationThreshold;
	float                                         LazyEvaluationScaleThreshold;
	bool                                          bResetTransformBeforeTick;
	bool                                          bResetInitialsBeforeConstruction;
	bool                                          bUpdateRigOnTick;
	bool                                          bUpdateInEditor;
	bool                                          bDrawBones;
	bool                                          bShowDebugDrawing;
	uint8                                         Pad_606[0x2];
	class UControlRig*                            ControlRig;
	uint8                                         Pad_610[0xB0];

public:
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves);
	bool CanExecute();
	void ClearMappedElements();
	bool DoesElementExist(class FName Name_0, ERigElementType ElementType);
	struct FTransform GetBoneTransform(class FName BoneName, EControlRigComponentSpace Space);
	bool GetControlBool(class FName ControlName);
	float GetControlFloat(class FName ControlName);
	int32 GetControlInt(class FName ControlName);
	struct FTransform GetControlOffset(class FName ControlName, EControlRigComponentSpace Space);
	struct FVector GetControlPosition(class FName ControlName, EControlRigComponentSpace Space);
	class UControlRig* GetControlRig();
	struct FRotator GetControlRotator(class FName ControlName, EControlRigComponentSpace Space);
	struct FVector GetControlScale(class FName ControlName, EControlRigComponentSpace Space);
	struct FTransform GetControlTransform(class FName ControlName, EControlRigComponentSpace Space);
	struct FVector2D GetControlVector2D(class FName ControlName);
	TArray<class FName> GetElementNames(ERigElementType ElementType);
	struct FTransform GetInitialBoneTransform(class FName BoneName, EControlRigComponentSpace Space);
	struct FTransform GetInitialSpaceTransform(class FName SpaceName, EControlRigComponentSpace Space);
	struct FTransform GetSpaceTransform(class FName SpaceName, EControlRigComponentSpace Space);
	void Initialize();
	void OnPostConstruction(class UControlRigComponent* Component);
	void OnPostForwardsSolve(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void OnPreConstruction(class UControlRigComponent* Component);
	void OnPreForwardsSolve(class UControlRigComponent* Component);
	void OnPreInitialize(class UControlRigComponent* Component);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void SetBoneTransform(class FName BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
	void SetControlBool(class FName ControlName, bool Value);
	void SetControlFloat(class FName ControlName, float Value);
	void SetControlInt(class FName ControlName, int32 Value);
	void SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space);
	void SetControlPosition(class FName ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
	void SetControlRigClass(TSubclassOf<class UControlRig> InControlRigClass);
	void SetControlRotator(class FName ControlName, const struct FRotator& Value, EControlRigComponentSpace Space);
	void SetControlScale(class FName ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
	void SetControlTransform(class FName ControlName, const struct FTransform& Value, EControlRigComponentSpace Space);
	void SetControlVector2D(class FName ControlName, const struct FVector2D& Value);
	void SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
	void SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space);
	void SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void SetObjectBinding(class UObject* InObjectToBind);
	void Update(float DeltaTime);

	float GetAbsoluteTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigComponent">();
	}
	static class UControlRigComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigComponent>();
	}
};
static_assert(alignof(UControlRigComponent) == 0x000010, "Wrong alignment on UControlRigComponent");
static_assert(sizeof(UControlRigComponent) == 0x0006C0, "Wrong size on UControlRigComponent");
static_assert(offsetof(UControlRigComponent, ControlRigClass) == 0x000568, "Member 'UControlRigComponent::ControlRigClass' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, OnPreInitializeDelegate) == 0x000570, "Member 'UControlRigComponent::OnPreInitializeDelegate' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, OnPostInitializeDelegate) == 0x000580, "Member 'UControlRigComponent::OnPostInitializeDelegate' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, OnPreConstructionDelegate) == 0x000590, "Member 'UControlRigComponent::OnPreConstructionDelegate' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, OnPostConstructionDelegate) == 0x0005A0, "Member 'UControlRigComponent::OnPostConstructionDelegate' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, OnPreForwardsSolveDelegate) == 0x0005B0, "Member 'UControlRigComponent::OnPreForwardsSolveDelegate' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, OnPostForwardsSolveDelegate) == 0x0005C0, "Member 'UControlRigComponent::OnPostForwardsSolveDelegate' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, UserDefinedElements) == 0x0005D0, "Member 'UControlRigComponent::UserDefinedElements' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, MappedElements) == 0x0005E0, "Member 'UControlRigComponent::MappedElements' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, bEnableLazyEvaluation) == 0x0005F0, "Member 'UControlRigComponent::bEnableLazyEvaluation' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, LazyEvaluationPositionThreshold) == 0x0005F4, "Member 'UControlRigComponent::LazyEvaluationPositionThreshold' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, LazyEvaluationRotationThreshold) == 0x0005F8, "Member 'UControlRigComponent::LazyEvaluationRotationThreshold' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, LazyEvaluationScaleThreshold) == 0x0005FC, "Member 'UControlRigComponent::LazyEvaluationScaleThreshold' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, bResetTransformBeforeTick) == 0x000600, "Member 'UControlRigComponent::bResetTransformBeforeTick' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, bResetInitialsBeforeConstruction) == 0x000601, "Member 'UControlRigComponent::bResetInitialsBeforeConstruction' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, bUpdateRigOnTick) == 0x000602, "Member 'UControlRigComponent::bUpdateRigOnTick' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, bUpdateInEditor) == 0x000603, "Member 'UControlRigComponent::bUpdateInEditor' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, bDrawBones) == 0x000604, "Member 'UControlRigComponent::bDrawBones' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, bShowDebugDrawing) == 0x000605, "Member 'UControlRigComponent::bShowDebugDrawing' has a wrong offset!");
static_assert(offsetof(UControlRigComponent, ControlRig) == 0x000608, "Member 'UControlRigComponent::ControlRig' has a wrong offset!");

class AControlRigControlActor final : public AActor
{
public:
	class AActor*                                 ActorToTrack;
	TSubclassOf<class UControlRig>                ControlRigClass;
	bool                                          bRefreshOnTick;
	bool                                          bIsSelectable;
	uint8                                         Pad_29A[0x6];
	class UMaterialInterface*                     MaterialOverride;
	class FString                                 ColorParameter;
	bool                                          bCastShadows;
	uint8                                         Pad_2B9[0x7];
	class USceneComponent*                        ActorRootComponent;
	TSoftObjectPtr<class UControlRig>             ControlRig;
	TArray<class FName>                           ControlNames;
	TArray<struct FTransform>                     ShapeTransforms;
	TArray<class UStaticMeshComponent*>           Components;
	TArray<class UMaterialInstanceDynamic*>       Materials;
	class FName                                   ColorParameterName;
	uint8                                         Pad_334[0x4];

public:
	void Clear();
	void Refresh();
	void ResetControlActor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigControlActor">();
	}
	static class AControlRigControlActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AControlRigControlActor>();
	}
};
static_assert(alignof(AControlRigControlActor) == 0x000008, "Wrong alignment on AControlRigControlActor");
static_assert(sizeof(AControlRigControlActor) == 0x000338, "Wrong size on AControlRigControlActor");
static_assert(offsetof(AControlRigControlActor, ActorToTrack) == 0x000288, "Member 'AControlRigControlActor::ActorToTrack' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, ControlRigClass) == 0x000290, "Member 'AControlRigControlActor::ControlRigClass' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, bRefreshOnTick) == 0x000298, "Member 'AControlRigControlActor::bRefreshOnTick' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, bIsSelectable) == 0x000299, "Member 'AControlRigControlActor::bIsSelectable' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, MaterialOverride) == 0x0002A0, "Member 'AControlRigControlActor::MaterialOverride' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, ColorParameter) == 0x0002A8, "Member 'AControlRigControlActor::ColorParameter' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, bCastShadows) == 0x0002B8, "Member 'AControlRigControlActor::bCastShadows' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, ActorRootComponent) == 0x0002C0, "Member 'AControlRigControlActor::ActorRootComponent' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, ControlRig) == 0x0002C8, "Member 'AControlRigControlActor::ControlRig' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, ControlNames) == 0x0002F0, "Member 'AControlRigControlActor::ControlNames' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, ShapeTransforms) == 0x000300, "Member 'AControlRigControlActor::ShapeTransforms' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, Components) == 0x000310, "Member 'AControlRigControlActor::Components' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, Materials) == 0x000320, "Member 'AControlRigControlActor::Materials' has a wrong offset!");
static_assert(offsetof(AControlRigControlActor, ColorParameterName) == 0x000330, "Member 'AControlRigControlActor::ColorParameterName' has a wrong offset!");

class AControlRigShapeActor final : public AActor
{
public:
	class USceneComponent*                        ActorRootComponent;
	class UStaticMeshComponent*                   StaticMeshComponent;
	uint32                                        ControlRigIndex;
	TWeakObjectPtr<class UControlRig>             ControlRig;
	class FName                                   ControlName;
	class FName                                   ShapeName;
	class FName                                   ColorParameterName;
	uint8                                         Pad_2B0[0x10];
	uint8                                         bSelected : 1;
	uint8                                         bHovered : 1;
	uint8                                         Pad_2C1[0x7];

public:
	void OnEnabledChanged(bool bIsEnabled);
	void OnHoveredChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnSelectionChanged(bool bIsSelected);
	void OnTransformChanged(const struct FTransform& NewTransform);
	void SetEnabled(bool bInEnabled);
	void SetGlobalTransform(const struct FTransform& InTransform);
	void SetHovered(bool bInHovered);
	void SetSelectable(bool bInSelectable);
	void SetSelected(bool bInSelected);

	struct FTransform GetGlobalTransform() const;
	bool IsEnabled() const;
	bool IsHovered() const;
	bool IsSelectedInEditor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigShapeActor">();
	}
	static class AControlRigShapeActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AControlRigShapeActor>();
	}
};
static_assert(alignof(AControlRigShapeActor) == 0x000008, "Wrong alignment on AControlRigShapeActor");
static_assert(sizeof(AControlRigShapeActor) == 0x0002C8, "Wrong size on AControlRigShapeActor");
static_assert(offsetof(AControlRigShapeActor, ActorRootComponent) == 0x000288, "Member 'AControlRigShapeActor::ActorRootComponent' has a wrong offset!");
static_assert(offsetof(AControlRigShapeActor, StaticMeshComponent) == 0x000290, "Member 'AControlRigShapeActor::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(AControlRigShapeActor, ControlRigIndex) == 0x000298, "Member 'AControlRigShapeActor::ControlRigIndex' has a wrong offset!");
static_assert(offsetof(AControlRigShapeActor, ControlRig) == 0x00029C, "Member 'AControlRigShapeActor::ControlRig' has a wrong offset!");
static_assert(offsetof(AControlRigShapeActor, ControlName) == 0x0002A4, "Member 'AControlRigShapeActor::ControlName' has a wrong offset!");
static_assert(offsetof(AControlRigShapeActor, ShapeName) == 0x0002A8, "Member 'AControlRigShapeActor::ShapeName' has a wrong offset!");
static_assert(offsetof(AControlRigShapeActor, ColorParameterName) == 0x0002AC, "Member 'AControlRigShapeActor::ColorParameterName' has a wrong offset!");

class UControlRigShapeLibrary final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FControlRigShapeDefinition             DefaultShape;
	TSoftObjectPtr<class UMaterial>               DefaultMaterial;
	TSoftObjectPtr<class UMaterial>               XRayMaterial;
	class FName                                   MaterialColorParameter;
	uint8                                         Pad_124[0x4];
	TArray<struct FControlRigShapeDefinition>     Shapes;
	uint8                                         Pad_138[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigShapeLibrary">();
	}
	static class UControlRigShapeLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigShapeLibrary>();
	}
};
static_assert(alignof(UControlRigShapeLibrary) == 0x000010, "Wrong alignment on UControlRigShapeLibrary");
static_assert(sizeof(UControlRigShapeLibrary) == 0x000150, "Wrong size on UControlRigShapeLibrary");
static_assert(offsetof(UControlRigShapeLibrary, DefaultShape) == 0x000030, "Member 'UControlRigShapeLibrary::DefaultShape' has a wrong offset!");
static_assert(offsetof(UControlRigShapeLibrary, DefaultMaterial) == 0x0000D0, "Member 'UControlRigShapeLibrary::DefaultMaterial' has a wrong offset!");
static_assert(offsetof(UControlRigShapeLibrary, XRayMaterial) == 0x0000F8, "Member 'UControlRigShapeLibrary::XRayMaterial' has a wrong offset!");
static_assert(offsetof(UControlRigShapeLibrary, MaterialColorParameter) == 0x000120, "Member 'UControlRigShapeLibrary::MaterialColorParameter' has a wrong offset!");
static_assert(offsetof(UControlRigShapeLibrary, Shapes) == 0x000128, "Member 'UControlRigShapeLibrary::Shapes' has a wrong offset!");

class UControlRigValidator final : public UObject
{
public:
	TArray<class UControlRigValidationPass*>      Passes;
	uint8                                         Pad_38[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigValidator">();
	}
	static class UControlRigValidator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigValidator>();
	}
};
static_assert(alignof(UControlRigValidator) == 0x000008, "Wrong alignment on UControlRigValidator");
static_assert(sizeof(UControlRigValidator) == 0x000068, "Wrong size on UControlRigValidator");
static_assert(offsetof(UControlRigValidator, Passes) == 0x000028, "Member 'UControlRigValidator::Passes' has a wrong offset!");

class UControlRigValidationPass : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigValidationPass">();
	}
	static class UControlRigValidationPass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigValidationPass>();
	}
};
static_assert(alignof(UControlRigValidationPass) == 0x000008, "Wrong alignment on UControlRigValidationPass");
static_assert(sizeof(UControlRigValidationPass) == 0x000028, "Wrong size on UControlRigValidationPass");

class UAdditiveControlRig final : public UControlRig
{
public:
	uint8                                         Pad_558[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AdditiveControlRig">();
	}
	static class UAdditiveControlRig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdditiveControlRig>();
	}
};
static_assert(alignof(UAdditiveControlRig) == 0x000008, "Wrong alignment on UAdditiveControlRig");
static_assert(sizeof(UAdditiveControlRig) == 0x000568, "Wrong size on UAdditiveControlRig");

class UFKControlRig final : public UControlRig
{
public:
	TArray<bool>                                  IsControlActive;
	EControlRigFKRigExecuteMode                   ApplyMode;
	uint8                                         Pad_569[0x2F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FKControlRig">();
	}
	static class UFKControlRig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFKControlRig>();
	}
};
static_assert(alignof(UFKControlRig) == 0x000008, "Wrong alignment on UFKControlRig");
static_assert(sizeof(UFKControlRig) == 0x000598, "Wrong size on UFKControlRig");
static_assert(offsetof(UFKControlRig, IsControlActive) == 0x000558, "Member 'UFKControlRig::IsControlActive' has a wrong offset!");
static_assert(offsetof(UFKControlRig, ApplyMode) == 0x000568, "Member 'UFKControlRig::ApplyMode' has a wrong offset!");

class URigHierarchyController final : public UObject
{
public:
	bool                                          bReportWarningsAndErrors;
	uint8                                         Pad_29[0x3];
	TWeakObjectPtr<class URigHierarchy>           Hierarchy;
	uint8                                         Pad_34[0x6C];

public:
	struct FRigElementKey AddAnimationChannel_ForBlueprint(class FName InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddBone(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddControl_ForBlueprint(class FName InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddNull(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
	bool AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
	struct FRigElementKey AddRigidBody(class FName InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool ClearSelection();
	bool DeselectElement(const struct FRigElementKey& InKey);
	TArray<struct FRigElementKey> DuplicateElements(const TArray<struct FRigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> MirrorElements(const TArray<struct FRigElementKey>& InKeys, const struct FRigMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	bool RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey RenameElement(const struct FRigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
	bool SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection);
	class FName SetDisplayName(const struct FRigElementKey& InControl, class FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
	void SetHierarchy(class URigHierarchy* InHierarchy);
	bool SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetSelection(const TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand);

	class FString ExportSelectionToText() const;
	class FString ExportToText(const TArray<struct FRigElementKey>& InKeys) const;
	struct FRigControlSettings GetControlSettings(const struct FRigElementKey& InKey) const;
	class URigHierarchy* GetHierarchy() const;
	bool SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigHierarchyController">();
	}
	static class URigHierarchyController* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigHierarchyController>();
	}
};
static_assert(alignof(URigHierarchyController) == 0x000008, "Wrong alignment on URigHierarchyController");
static_assert(sizeof(URigHierarchyController) == 0x0000A0, "Wrong size on URigHierarchyController");
static_assert(offsetof(URigHierarchyController, bReportWarningsAndErrors) == 0x000028, "Member 'URigHierarchyController::bReportWarningsAndErrors' has a wrong offset!");
static_assert(offsetof(URigHierarchyController, Hierarchy) == 0x00002C, "Member 'URigHierarchyController::Hierarchy' has a wrong offset!");

class UControlRigLayerInstance final : public UAnimInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigLayerInstance">();
	}
	static class UControlRigLayerInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigLayerInstance>();
	}
};
static_assert(alignof(UControlRigLayerInstance) == 0x000010, "Wrong alignment on UControlRigLayerInstance");
static_assert(sizeof(UControlRigLayerInstance) == 0x000350, "Wrong size on UControlRigLayerInstance");

class UControlRigObjectHolder final : public UObject
{
public:
	TArray<class UObject*>                        Objects;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigObjectHolder">();
	}
	static class UControlRigObjectHolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigObjectHolder>();
	}
};
static_assert(alignof(UControlRigObjectHolder) == 0x000008, "Wrong alignment on UControlRigObjectHolder");
static_assert(sizeof(UControlRigObjectHolder) == 0x000038, "Wrong size on UControlRigObjectHolder");
static_assert(offsetof(UControlRigObjectHolder, Objects) == 0x000028, "Member 'UControlRigObjectHolder::Objects' has a wrong offset!");

class UControlRigSequence final : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>           LastExportedToAnimationSequence;
	TSoftObjectPtr<class USkeletalMesh>           LastExportedUsingSkeletalMesh;
	float                                         LastExportedFrameRate;
	uint8                                         Pad_274[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigSequence">();
	}
	static class UControlRigSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigSequence>();
	}
};
static_assert(alignof(UControlRigSequence) == 0x000008, "Wrong alignment on UControlRigSequence");
static_assert(sizeof(UControlRigSequence) == 0x000278, "Wrong size on UControlRigSequence");
static_assert(offsetof(UControlRigSequence, LastExportedToAnimationSequence) == 0x000220, "Member 'UControlRigSequence::LastExportedToAnimationSequence' has a wrong offset!");
static_assert(offsetof(UControlRigSequence, LastExportedUsingSkeletalMesh) == 0x000248, "Member 'UControlRigSequence::LastExportedUsingSkeletalMesh' has a wrong offset!");
static_assert(offsetof(UControlRigSequence, LastExportedFrameRate) == 0x000270, "Member 'UControlRigSequence::LastExportedFrameRate' has a wrong offset!");

class UMovieSceneControlRigParameterSection final : public UMovieSceneParameterSection
{
public:
	uint8                                         Pad_158[0x48];
	class UControlRig*                            ControlRig;
	TSubclassOf<class UControlRig>                ControlRigClass;
	TArray<bool>                                  ControlsMask;
	struct FMovieSceneTransformMask               TransformMask;
	uint8                                         Pad_1C4[0x4];
	struct FMovieSceneFloatChannel                Weight;
	TMap<class FName, struct FChannelMapInfo>     ControlChannelMap;
	TArray<struct FEnumParameterNameAndCurve>     EnumParameterNamesAndCurves;
	TArray<struct FIntegerParameterNameAndCurve>  IntegerParameterNamesAndCurves;
	TArray<struct FSpaceControlNameAndChannel>    SpaceChannels;
	TArray<struct FConstraintAndActiveChannel>    ConstraintsChannels;
	uint8                                         Pad_368[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneControlRigParameterSection">();
	}
	static class UMovieSceneControlRigParameterSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneControlRigParameterSection>();
	}
};
static_assert(alignof(UMovieSceneControlRigParameterSection) == 0x000008, "Wrong alignment on UMovieSceneControlRigParameterSection");
static_assert(sizeof(UMovieSceneControlRigParameterSection) == 0x0003D0, "Wrong size on UMovieSceneControlRigParameterSection");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRig) == 0x0001A0, "Member 'UMovieSceneControlRigParameterSection::ControlRig' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRigClass) == 0x0001A8, "Member 'UMovieSceneControlRigParameterSection::ControlRigClass' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlsMask) == 0x0001B0, "Member 'UMovieSceneControlRigParameterSection::ControlsMask' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, TransformMask) == 0x0001C0, "Member 'UMovieSceneControlRigParameterSection::TransformMask' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, Weight) == 0x0001C8, "Member 'UMovieSceneControlRigParameterSection::Weight' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlChannelMap) == 0x0002D8, "Member 'UMovieSceneControlRigParameterSection::ControlChannelMap' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves) == 0x000328, "Member 'UMovieSceneControlRigParameterSection::EnumParameterNamesAndCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves) == 0x000338, "Member 'UMovieSceneControlRigParameterSection::IntegerParameterNamesAndCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, SpaceChannels) == 0x000348, "Member 'UMovieSceneControlRigParameterSection::SpaceChannels' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ConstraintsChannels) == 0x000358, "Member 'UMovieSceneControlRigParameterSection::ConstraintsChannels' has a wrong offset!");

class UMovieSceneControlRigParameterTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x40];
	class UControlRig*                            ControlRig;
	class UMovieSceneSection*                     SectionToKey;
	TArray<class UMovieSceneSection*>             Sections;
	class FName                                   trackName;
	uint8                                         Pad_FC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneControlRigParameterTrack">();
	}
	static class UMovieSceneControlRigParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneControlRigParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneControlRigParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneControlRigParameterTrack");
static_assert(sizeof(UMovieSceneControlRigParameterTrack) == 0x000100, "Wrong size on UMovieSceneControlRigParameterTrack");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlRig) == 0x0000D8, "Member 'UMovieSceneControlRigParameterTrack::ControlRig' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, SectionToKey) == 0x0000E0, "Member 'UMovieSceneControlRigParameterTrack::SectionToKey' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, Sections) == 0x0000E8, "Member 'UMovieSceneControlRigParameterTrack::Sections' has a wrong offset!");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, trackName) == 0x0000F8, "Member 'UMovieSceneControlRigParameterTrack::trackName' has a wrong offset!");

class UControlRigSettings final : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigSettings">();
	}
	static class UControlRigSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigSettings>();
	}
};
static_assert(alignof(UControlRigSettings) == 0x000008, "Wrong alignment on UControlRigSettings");
static_assert(sizeof(UControlRigSettings) == 0x000030, "Wrong size on UControlRigSettings");

class UControlRigEditorSettings final : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigEditorSettings">();
	}
	static class UControlRigEditorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigEditorSettings>();
	}
};
static_assert(alignof(UControlRigEditorSettings) == 0x000008, "Wrong alignment on UControlRigEditorSettings");
static_assert(sizeof(UControlRigEditorSettings) == 0x000030, "Wrong size on UControlRigEditorSettings");

class UControlRigPoseAsset final : public UObject
{
public:
	struct FControlRigControlPose                 Pose;

public:
	void GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose);
	void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
	void ReplaceControlName(const class FName& CurrentName, const class FName& NewName);
	void SavePose(class UControlRig* InControlRig, bool bUseAll);
	void SelectControls(class UControlRig* InControlRig, bool bDoMirror);

	bool DoesMirrorMatch(class UControlRig* ControlRig, const class FName& ControlName) const;
	TArray<class FName> GetControlNames() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigPoseAsset">();
	}
	static class UControlRigPoseAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigPoseAsset>();
	}
};
static_assert(alignof(UControlRigPoseAsset) == 0x000008, "Wrong alignment on UControlRigPoseAsset");
static_assert(sizeof(UControlRigPoseAsset) == 0x000088, "Wrong size on UControlRigPoseAsset");
static_assert(offsetof(UControlRigPoseAsset, Pose) == 0x000028, "Member 'UControlRigPoseAsset::Pose' has a wrong offset!");

class UControlRigPoseMirrorSettings final : public UObject
{
public:
	class FString                                 RightSide;
	class FString                                 LeftSide;
	EAxis                                         MirrorAxis;
	EAxis                                         AxisToFlip;
	uint8                                         Pad_4A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigPoseMirrorSettings">();
	}
	static class UControlRigPoseMirrorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigPoseMirrorSettings>();
	}
};
static_assert(alignof(UControlRigPoseMirrorSettings) == 0x000008, "Wrong alignment on UControlRigPoseMirrorSettings");
static_assert(sizeof(UControlRigPoseMirrorSettings) == 0x000050, "Wrong size on UControlRigPoseMirrorSettings");
static_assert(offsetof(UControlRigPoseMirrorSettings, RightSide) == 0x000028, "Member 'UControlRigPoseMirrorSettings::RightSide' has a wrong offset!");
static_assert(offsetof(UControlRigPoseMirrorSettings, LeftSide) == 0x000038, "Member 'UControlRigPoseMirrorSettings::LeftSide' has a wrong offset!");
static_assert(offsetof(UControlRigPoseMirrorSettings, MirrorAxis) == 0x000048, "Member 'UControlRigPoseMirrorSettings::MirrorAxis' has a wrong offset!");
static_assert(offsetof(UControlRigPoseMirrorSettings, AxisToFlip) == 0x000049, "Member 'UControlRigPoseMirrorSettings::AxisToFlip' has a wrong offset!");

class UControlRigPoseProjectSettings final : public UObject
{
public:
	TArray<struct FDirectoryPath>                 RootSaveDirs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigPoseProjectSettings">();
	}
	static class UControlRigPoseProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigPoseProjectSettings>();
	}
};
static_assert(alignof(UControlRigPoseProjectSettings) == 0x000008, "Wrong alignment on UControlRigPoseProjectSettings");
static_assert(sizeof(UControlRigPoseProjectSettings) == 0x000038, "Wrong size on UControlRigPoseProjectSettings");
static_assert(offsetof(UControlRigPoseProjectSettings, RootSaveDirs) == 0x000028, "Member 'UControlRigPoseProjectSettings::RootSaveDirs' has a wrong offset!");

class UControlRigSnapSettings final : public UObject
{
public:
	bool                                          bKeepOffset;
	bool                                          bSnapPosition;
	bool                                          bSnapRotation;
	bool                                          bSnapScale;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigSnapSettings">();
	}
	static class UControlRigSnapSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigSnapSettings>();
	}
};
static_assert(alignof(UControlRigSnapSettings) == 0x000008, "Wrong alignment on UControlRigSnapSettings");
static_assert(sizeof(UControlRigSnapSettings) == 0x000030, "Wrong size on UControlRigSnapSettings");
static_assert(offsetof(UControlRigSnapSettings, bKeepOffset) == 0x000028, "Member 'UControlRigSnapSettings::bKeepOffset' has a wrong offset!");
static_assert(offsetof(UControlRigSnapSettings, bSnapPosition) == 0x000029, "Member 'UControlRigSnapSettings::bSnapPosition' has a wrong offset!");
static_assert(offsetof(UControlRigSnapSettings, bSnapRotation) == 0x00002A, "Member 'UControlRigSnapSettings::bSnapRotation' has a wrong offset!");
static_assert(offsetof(UControlRigSnapSettings, bSnapScale) == 0x00002B, "Member 'UControlRigSnapSettings::bSnapScale' has a wrong offset!");

class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                          Hierarchy;
	TArray<struct FRigElementKey>                 Selection;

public:
	bool EnsureAtLeastOneRigElementSelected() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigWorkflowOptions">();
	}
	static class UControlRigWorkflowOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigWorkflowOptions>();
	}
};
static_assert(alignof(UControlRigWorkflowOptions) == 0x000008, "Wrong alignment on UControlRigWorkflowOptions");
static_assert(sizeof(UControlRigWorkflowOptions) == 0x0000B0, "Wrong size on UControlRigWorkflowOptions");
static_assert(offsetof(UControlRigWorkflowOptions, Hierarchy) == 0x000098, "Member 'UControlRigWorkflowOptions::Hierarchy' has a wrong offset!");
static_assert(offsetof(UControlRigWorkflowOptions, Selection) == 0x0000A0, "Member 'UControlRigWorkflowOptions::Selection' has a wrong offset!");

class UControlRigTransformWorkflowOptions final : public UControlRigWorkflowOptions
{
public:
	ERigTransformType                             TransformType;
	uint8                                         Pad_B1[0x7];

public:
	TArray<struct FRigVMUserWorkflow> ProvideWorkflows(const class UObject* InSubject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigTransformWorkflowOptions">();
	}
	static class UControlRigTransformWorkflowOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigTransformWorkflowOptions>();
	}
};
static_assert(alignof(UControlRigTransformWorkflowOptions) == 0x000008, "Wrong alignment on UControlRigTransformWorkflowOptions");
static_assert(sizeof(UControlRigTransformWorkflowOptions) == 0x0000B8, "Wrong size on UControlRigTransformWorkflowOptions");
static_assert(offsetof(UControlRigTransformWorkflowOptions, TransformType) == 0x0000B0, "Member 'UControlRigTransformWorkflowOptions::TransformType' has a wrong offset!");

class UControlRigNumericalValidationPass final : public UControlRigValidationPass
{
public:
	bool                                          bCheckControls;
	bool                                          bCheckBones;
	bool                                          bCheckCurves;
	uint8                                         Pad_2B[0x1];
	float                                         TranslationPrecision;
	float                                         RotationPrecision;
	float                                         ScalePrecision;
	float                                         CurvePrecision;
	class FName                                   EventNameA;
	class FName                                   EventNameB;
	uint8                                         Pad_44[0x4];
	struct FRigPose                               Pose;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigNumericalValidationPass">();
	}
	static class UControlRigNumericalValidationPass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigNumericalValidationPass>();
	}
};
static_assert(alignof(UControlRigNumericalValidationPass) == 0x000008, "Wrong alignment on UControlRigNumericalValidationPass");
static_assert(sizeof(UControlRigNumericalValidationPass) == 0x0000B8, "Wrong size on UControlRigNumericalValidationPass");
static_assert(offsetof(UControlRigNumericalValidationPass, bCheckControls) == 0x000028, "Member 'UControlRigNumericalValidationPass::bCheckControls' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, bCheckBones) == 0x000029, "Member 'UControlRigNumericalValidationPass::bCheckBones' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, bCheckCurves) == 0x00002A, "Member 'UControlRigNumericalValidationPass::bCheckCurves' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, TranslationPrecision) == 0x00002C, "Member 'UControlRigNumericalValidationPass::TranslationPrecision' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, RotationPrecision) == 0x000030, "Member 'UControlRigNumericalValidationPass::RotationPrecision' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, ScalePrecision) == 0x000034, "Member 'UControlRigNumericalValidationPass::ScalePrecision' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, CurvePrecision) == 0x000038, "Member 'UControlRigNumericalValidationPass::CurvePrecision' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameA) == 0x00003C, "Member 'UControlRigNumericalValidationPass::EventNameA' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameB) == 0x000040, "Member 'UControlRigNumericalValidationPass::EventNameB' has a wrong offset!");
static_assert(offsetof(UControlRigNumericalValidationPass, Pose) == 0x000048, "Member 'UControlRigNumericalValidationPass::Pose' has a wrong offset!");

}
