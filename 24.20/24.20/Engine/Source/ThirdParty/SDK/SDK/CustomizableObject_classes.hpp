#pragma once

#include "Basic.hpp"

#include "CustomizableObject_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UCustomizableInstancePrivateData final : public UObject
{
public:
	TArray<struct FGeneratedMaterial>             GeneratedMaterials;
	TArray<struct FGeneratedTexture>              GeneratedTextures;
	uint8                                         Pad_48[0x50];
	TArray<struct FParameterDecorations>          ParameterDecorations;
	uint8                                         Pad_A8[0x10];
	TMap<class FString, TWeakObjectPtr<class UTexture2D>> TextureReuseCache;
	uint8                                         Pad_108[0x78];
	TArray<struct FCustomizableInstanceComponentData> ComponentsData;
	TArray<class UMaterialInterface*>             ReferencedMaterials;
	uint8                                         Pad_1A0[0xA0];
	TArray<class UPhysicsAsset*>                  ClothingPhysicsAssets;
	TArray<TSubclassOf<class UAnimInstance>>      GatheredAnimBPs;
	struct FGameplayTagContainer                  AnimBPGameplayTags;
	TMap<TSubclassOf<class UAnimInstance>, struct FAnimBpGeneratedPhysicsAssets> AnimBpPhysicsAssets;
	uint8                                         Pad_2D0[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableInstancePrivateData">();
	}
	static class UCustomizableInstancePrivateData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableInstancePrivateData>();
	}
};
static_assert(alignof(UCustomizableInstancePrivateData) == 0x000008, "Wrong alignment on UCustomizableInstancePrivateData");
static_assert(sizeof(UCustomizableInstancePrivateData) == 0x000308, "Wrong size on UCustomizableInstancePrivateData");
static_assert(offsetof(UCustomizableInstancePrivateData, GeneratedMaterials) == 0x000028, "Member 'UCustomizableInstancePrivateData::GeneratedMaterials' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, GeneratedTextures) == 0x000038, "Member 'UCustomizableInstancePrivateData::GeneratedTextures' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, ParameterDecorations) == 0x000098, "Member 'UCustomizableInstancePrivateData::ParameterDecorations' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, TextureReuseCache) == 0x0000B8, "Member 'UCustomizableInstancePrivateData::TextureReuseCache' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, ComponentsData) == 0x000180, "Member 'UCustomizableInstancePrivateData::ComponentsData' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, ReferencedMaterials) == 0x000190, "Member 'UCustomizableInstancePrivateData::ReferencedMaterials' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, ClothingPhysicsAssets) == 0x000240, "Member 'UCustomizableInstancePrivateData::ClothingPhysicsAssets' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, GatheredAnimBPs) == 0x000250, "Member 'UCustomizableInstancePrivateData::GatheredAnimBPs' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, AnimBPGameplayTags) == 0x000260, "Member 'UCustomizableInstancePrivateData::AnimBPGameplayTags' has a wrong offset!");
static_assert(offsetof(UCustomizableInstancePrivateData, AnimBpPhysicsAssets) == 0x000280, "Member 'UCustomizableInstancePrivateData::AnimBpPhysicsAssets' has a wrong offset!");

class UCustomizableInstanceLODManagementBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableInstanceLODManagementBase">();
	}
	static class UCustomizableInstanceLODManagementBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableInstanceLODManagementBase>();
	}
};
static_assert(alignof(UCustomizableInstanceLODManagementBase) == 0x000008, "Wrong alignment on UCustomizableInstanceLODManagementBase");
static_assert(sizeof(UCustomizableInstanceLODManagementBase) == 0x000028, "Wrong size on UCustomizableInstanceLODManagementBase");

class UCustomizableInstanceLODManagement final : public UCustomizableInstanceLODManagementBase
{
public:
	uint8                                         Pad_28[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableInstanceLODManagement">();
	}
	static class UCustomizableInstanceLODManagement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableInstanceLODManagement>();
	}
};
static_assert(alignof(UCustomizableInstanceLODManagement) == 0x000008, "Wrong alignment on UCustomizableInstanceLODManagement");
static_assert(sizeof(UCustomizableInstanceLODManagement) == 0x000080, "Wrong size on UCustomizableInstanceLODManagement");

class UMutableMaskOutCache final : public UObject
{
public:
	TMap<class FString, class FString>            Materials;
	TMap<class FString, struct FMaskOutTexture>   Textures;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MutableMaskOutCache">();
	}
	static class UMutableMaskOutCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMutableMaskOutCache>();
	}
};
static_assert(alignof(UMutableMaskOutCache) == 0x000008, "Wrong alignment on UMutableMaskOutCache");
static_assert(sizeof(UMutableMaskOutCache) == 0x0000C8, "Wrong size on UMutableMaskOutCache");
static_assert(offsetof(UMutableMaskOutCache, Materials) == 0x000028, "Member 'UMutableMaskOutCache::Materials' has a wrong offset!");
static_assert(offsetof(UMutableMaskOutCache, Textures) == 0x000078, "Member 'UMutableMaskOutCache::Textures' has a wrong offset!");

class UCustomizableObjectBulk final : public UObject
{
public:
	TArray<class FString>                         BulkDataFileNames;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableObjectBulk">();
	}
	static class UCustomizableObjectBulk* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableObjectBulk>();
	}
};
static_assert(alignof(UCustomizableObjectBulk) == 0x000008, "Wrong alignment on UCustomizableObjectBulk");
static_assert(sizeof(UCustomizableObjectBulk) == 0x000038, "Wrong size on UCustomizableObjectBulk");
static_assert(offsetof(UCustomizableObjectBulk, BulkDataFileNames) == 0x000028, "Member 'UCustomizableObjectBulk::BulkDataFileNames' has a wrong offset!");

class UCustomizableObject final : public UObject
{
public:
	class USkeletalMesh*                          ReferenceSkeletalMesh;
	TArray<class USkeletalMesh*>                  ReferenceSkeletalMeshes;
	TArray<struct FMutableRefSkeletalMeshData>    ReferenceSkeletalMeshesData;
	class UStaticMesh*                            ReferenceStaticMesh;
	TArray<TSoftObjectPtr<class UMaterialInterface>> ReferencedMaterials;
	TArray<class FName>                           ReferencedMaterialSlotNames;
	TArray<TSoftObjectPtr<class USkeleton>>       ReferencedSkeletons;
	struct FMutableLODSettings                    LODSettings;
	TArray<struct FMutableModelImageProperties>   ImageProperties;
	TArray<struct FMorphTargetInfo>               ContributingMorphTargetsInfo;
	TArray<struct FMorphTargetVertexData>         MorphTargetReconstructionData;
	TArray<struct FCustomizableObjectClothConfigData> ClothSharedConfigsData;
	TArray<struct FCustomizableObjectClothingAssetData> ContributingClothingAssetsData;
	TArray<struct FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData;
	TArray<struct FMutableSkinWeightProfileInfo>  SkinWeightProfilesInfo;
	int32                                         NumMeshComponentsInRoot;
	uint8                                         Pad_10C[0x4];
	TArray<struct FMutableModelParameterProperties> ParameterProperties;
	uint8                                         Pad_120[0x50];
	TMap<class FString, struct FParameterUIData>  ParameterUIDataMap;
	TArray<class FName>                           LowPriorityTextures;
	TMap<class FString, struct FParameterUIData>  StateUIDataMap;
	TMap<class FString, TSoftObjectPtr<class UPhysicsAsset>> PhysicsAssetsMap;
	TMap<class FString, TSoftClassPtr<class UClass>> AnimBPAssetsMap;
	TArray<struct FAnimBpOverridePhysicsAssetsInfo> AnimBpOverridePhysiscAssetsInfo;
	TArray<struct FMutableRefSocket>              SocketArray;
	TSoftObjectPtr<class UMutableMaskOutCache>    MaskOutCache;
	TMap<uint64, struct FMutableStreamableBlock>  HashToStreamableBlock;
	TArray<class FString>                         CustomizableObjectClassTags;
	TArray<class FString>                         PopulationClassTags;
	TMap<class FString, struct FParameterTags>    CustomizableObjectParametersTags;
	class UMutableMaskOutCache*                   MaskOutCache_HardRef;
	struct FGuid                                  Identifier;
	struct FGuid                                  CompilationGuid;
	class UCustomizableObjectBulk*                BulkData;
	uint8                                         Pad_3F8[0x10];

public:
	class UCustomizableObjectInstance* CreateInstance();
	void LoadMaskOutCache();
	void UnloadMaskOutCache();

	int32 FindParameter(const class FString& Name_0) const;
	bool GetBoolParameterDefaultValue(const class FString& InParameterName) const;
	struct FLinearColor GetColorParameterDefaultValue(const class FString& InParameterName) const;
	int32 GetComponentCount() const;
	float GetFloatParameterDefaultValue(const class FString& InParameterName) const;
	class FString GetIntParameterAvailableOption(int32 ParamIndex, int32 K) const;
	int32 GetIntParameterDefaultValue(const class FString& InParameterName) const;
	int32 GetIntParameterNumOptions(int32 ParamIndex) const;
	int32 GetParameterCount() const;
	int32 GetParameterDescriptionCount(const class FString& ParamName) const;
	class FString GetParameterName(int32 ParamIndex) const;
	EMutableParameterType GetParameterType(int32 ParamIndex) const;
	EMutableParameterType GetParameterTypeByName(const class FString& Name_0) const;
	struct FParameterUIData GetParameterUIMetadata(const class FString& ParamName) const;
	struct FParameterUIData GetParameterUIMetadataFromIndex(int32 ParamIndex) const;
	void GetProjectorParameterDefaultValue(const class FString& InParameterName, struct FVector3f* OutPos, struct FVector3f* OutDirection, struct FVector3f* OutUp, struct FVector3f* OutScale, float* OutAngle, ECustomizableObjectProjectorType* OutType) const;
	int32 GetStateCount() const;
	class FString GetStateName(int32 StateIndex) const;
	int32 GetStateParameterCount(const class FString& StateName) const;
	class FString GetStateParameterName(const class FString& StateName, int32 ParameterIndex) const;
	struct FParameterUIData GetStateUIMetadata(const class FString& StateName) const;
	struct FParameterUIData GetStateUIMetadataFromIndex(int32 StateIndex) const;
	bool IsCompiled() const;
	bool IsParameterMultidimensional(const class FString& InParameterName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableObject">();
	}
	static class UCustomizableObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableObject>();
	}
};
static_assert(alignof(UCustomizableObject) == 0x000008, "Wrong alignment on UCustomizableObject");
static_assert(sizeof(UCustomizableObject) == 0x000408, "Wrong size on UCustomizableObject");
static_assert(offsetof(UCustomizableObject, ReferenceSkeletalMesh) == 0x000028, "Member 'UCustomizableObject::ReferenceSkeletalMesh' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ReferenceSkeletalMeshes) == 0x000030, "Member 'UCustomizableObject::ReferenceSkeletalMeshes' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ReferenceSkeletalMeshesData) == 0x000040, "Member 'UCustomizableObject::ReferenceSkeletalMeshesData' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ReferenceStaticMesh) == 0x000050, "Member 'UCustomizableObject::ReferenceStaticMesh' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ReferencedMaterials) == 0x000058, "Member 'UCustomizableObject::ReferencedMaterials' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ReferencedMaterialSlotNames) == 0x000068, "Member 'UCustomizableObject::ReferencedMaterialSlotNames' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ReferencedSkeletons) == 0x000078, "Member 'UCustomizableObject::ReferencedSkeletons' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, LODSettings) == 0x000088, "Member 'UCustomizableObject::LODSettings' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ImageProperties) == 0x000098, "Member 'UCustomizableObject::ImageProperties' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ContributingMorphTargetsInfo) == 0x0000A8, "Member 'UCustomizableObject::ContributingMorphTargetsInfo' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, MorphTargetReconstructionData) == 0x0000B8, "Member 'UCustomizableObject::MorphTargetReconstructionData' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ClothSharedConfigsData) == 0x0000C8, "Member 'UCustomizableObject::ClothSharedConfigsData' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ContributingClothingAssetsData) == 0x0000D8, "Member 'UCustomizableObject::ContributingClothingAssetsData' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ClothMeshToMeshVertData) == 0x0000E8, "Member 'UCustomizableObject::ClothMeshToMeshVertData' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, SkinWeightProfilesInfo) == 0x0000F8, "Member 'UCustomizableObject::SkinWeightProfilesInfo' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, NumMeshComponentsInRoot) == 0x000108, "Member 'UCustomizableObject::NumMeshComponentsInRoot' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ParameterProperties) == 0x000110, "Member 'UCustomizableObject::ParameterProperties' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, ParameterUIDataMap) == 0x000170, "Member 'UCustomizableObject::ParameterUIDataMap' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, LowPriorityTextures) == 0x0001C0, "Member 'UCustomizableObject::LowPriorityTextures' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, StateUIDataMap) == 0x0001D0, "Member 'UCustomizableObject::StateUIDataMap' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, PhysicsAssetsMap) == 0x000220, "Member 'UCustomizableObject::PhysicsAssetsMap' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, AnimBPAssetsMap) == 0x000270, "Member 'UCustomizableObject::AnimBPAssetsMap' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, AnimBpOverridePhysiscAssetsInfo) == 0x0002C0, "Member 'UCustomizableObject::AnimBpOverridePhysiscAssetsInfo' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, SocketArray) == 0x0002D0, "Member 'UCustomizableObject::SocketArray' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, MaskOutCache) == 0x0002E0, "Member 'UCustomizableObject::MaskOutCache' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, HashToStreamableBlock) == 0x000308, "Member 'UCustomizableObject::HashToStreamableBlock' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, CustomizableObjectClassTags) == 0x000358, "Member 'UCustomizableObject::CustomizableObjectClassTags' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, PopulationClassTags) == 0x000368, "Member 'UCustomizableObject::PopulationClassTags' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, CustomizableObjectParametersTags) == 0x000378, "Member 'UCustomizableObject::CustomizableObjectParametersTags' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, MaskOutCache_HardRef) == 0x0003C8, "Member 'UCustomizableObject::MaskOutCache_HardRef' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, Identifier) == 0x0003D0, "Member 'UCustomizableObject::Identifier' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, CompilationGuid) == 0x0003E0, "Member 'UCustomizableObject::CompilationGuid' has a wrong offset!");
static_assert(offsetof(UCustomizableObject, BulkData) == 0x0003F0, "Member 'UCustomizableObject::BulkData' has a wrong offset!");

class UDGGUI final : public UUserWidget
{
public:
	class UCustomizableSkeletalComponent* GetCustomizableSkeletalComponent();
	void SetCustomizableSkeletalComponent(class UCustomizableSkeletalComponent* CustomizableSkeletalComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DGGUI">();
	}
	static class UDGGUI* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDGGUI>();
	}
};
static_assert(alignof(UDGGUI) == 0x000008, "Wrong alignment on UDGGUI");
static_assert(sizeof(UDGGUI) == 0x000268, "Wrong size on UDGGUI");

class UCustomizableObjectInstance final : public UObject
{
public:
	TMulticastInlineDelegate<void(class UCustomizableObjectInstance* Instance)> BeginUpdateDelegate;
	uint8                                         Pad_38[0x18];
	TMulticastInlineDelegate<void(class UCustomizableObjectInstance* Instance)> UpdatedDelegate;
	uint8                                         Pad_60[0x18];
	TMulticastInlineDelegate<void(class UCustomizableObjectInstance* Instance)> BeginDestroyDelegate;
	uint8                                         Pad_88[0x68];
	TArray<class USkeletalMesh*>                  SkeletalMeshes;
	class FString                                 SkeletalMeshStatus;
	uint8                                         Pad_110[0x48];
	struct FCustomizableObjectInstanceDescriptor  Descriptor;
	class UCustomizableInstancePrivateData*       PrivateData;
	uint8                                         Pad_288[0x48];
	class UCustomizableObject*                    CustomizableObject;
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;
	TMap<class FName, struct FMultilayerProjector> MultilayerProjectors;
	bool                                          bBuildParameterDecorations;
	uint8                                         Pad_389[0x7];

public:
	int32 AddValueToFloatRange(const class FString& ParamName);
	int32 AddValueToIntRange(const class FString& ParamName);
	int32 AddValueToProjectorRange(const class FString& ParamName);
	class UCustomizableObjectInstance* Clone();
	class UCustomizableObjectInstance* CloneStatic(class UObject* Outer_0);
	bool CreateMultiLayerProjector(const class FName& ProjectorParamName);
	TArray<struct FCustomizableObjectBoolParameterValue> GetBoolParameters();
	TArray<struct FCustomizableObjectFloatParameterValue> GetFloatParameters();
	TArray<struct FCustomizableObjectIntParameterValue> GetIntParameters();
	class UTexture2D* GetParameterDescription(const class FString& ParamName, int32 DescIndex);
	TArray<struct FCustomizableObjectProjectorParameterValue> GetProjectorParameters();
	TArray<struct FCustomizableObjectTextureParameterValue> GetTextureParameters();
	TArray<struct FCustomizableObjectVectorParameterValue> GetVectorParameters();
	void MultilayerProjectorCreateLayer(const class FName& ProjectorParamName, int32 Index_0);
	void MultilayerProjectorCreateVirtualLayer(const class FName& ProjectorParamName, const class FName& ID);
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(const class FName& ProjectorParamName, const class FName& ID);
	void MultilayerProjectorRemoveLayerAt(const class FName& ProjectorParamName, int32 Index_0);
	void MultilayerProjectorRemoveVirtualLayer(const class FName& ProjectorParamName, const class FName& ID);
	void MultilayerProjectorUpdateLayer(const class FName& ProjectorParamName, int32 Index_0, const struct FMultilayerProjectorLayer& Layer);
	void MultilayerProjectorUpdateVirtualLayer(const class FName& ProjectorParamName, const class FName& ID, const struct FMultilayerProjectorVirtualLayer& Layer);
	void RemoveMultilayerProjector(const class FName& ProjectorParamName);
	int32 RemoveValueFromFloatRange(const class FString& ParamName);
	int32 RemoveValueFromIntRange(const class FString& ParamName);
	int32 RemoveValueFromProjectorRange(const class FString& ParamName);
	void SetBoolParameterSelectedOption(const class FString& BoolParamName, bool BoolValue);
	void SetBuildParameterDecorations(bool Value);
	void SetColorParameterSelectedOption(const class FString& ColorParamName, const struct FLinearColor& ColorValue);
	void SetCurrentState(const class FString& StateName);
	void SetFloatParameterSelectedOption(const class FString& FloatParamName, float FloatValue, int32 RangeIndex);
	void SetIntParameterSelectedOption(const class FString& ParamName, const class FString& SelectedOptionName, int32 RangeIndex);
	void SetObject(class UCustomizableObject* InObject);
	void SetProjectorValue(const class FString& ProjectorParamName, const struct FVector& OutPos, const struct FVector& OutDirection, const struct FVector& OutUp, const struct FVector& OutScale, float OutAngle, int32 RangeIndex);
	void SetRandomValues();
	void SetReplacePhysicsAssets(bool bReplaceEnabled);
	void SetTextureParameterSelectedOptionT(const class FString& TextureParamName, class UTexture2D* TextureValue, int32 RangeIndex);
	void SetVectorParameterSelectedOption(const class FString& VectorParamName, const struct FLinearColor& VectorValue);
	void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);

	int32 FindBoolParameterNameIndex(const class FString& ParamName) const;
	int32 FindFloatParameterNameIndex(const class FString& ParamName) const;
	int32 FindIntParameterNameIndex(const class FString& ParamName) const;
	int32 FindProjectorParameterNameIndex(const class FString& ParamName) const;
	int32 FindVectorParameterNameIndex(const class FString& ParamName) const;
	void ForEachAnimInstance(int32 ComponentIndex, TDelegate<void(int32 SlotIndex, TSubclassOf<class UAnimInstance> AnimInstClass)> Delegate) const;
	const struct FGameplayTagContainer GetAnimationGameplayTags() const;
	TSubclassOf<class UAnimInstance> GetAnimBP(int32 ComponentIndex, int32 SlotIndex) const;
	bool GetBoolParameterSelectedOption(const class FString& BoolParamName) const;
	bool GetBuildParameterDecorations() const;
	struct FLinearColor GetColorParameterSelectedOption(const class FString& ColorParamName) const;
	class FString GetCurrentState() const;
	class UCustomizableObject* GetCustomizableObject() const;
	float GetFloatParameterSelectedOption(const class FString& FloatParamName, int32 RangeIndex) const;
	class FString GetIntParameterSelectedOption(const class FString& ParamName, int32 RangeIndex) const;
	float GetProjectorAngle(const class FString& ParamName, int32 RangeIndex) const;
	struct FVector GetProjectorDirection(const class FString& ParamName, int32 RangeIndex) const;
	ECustomizableObjectProjectorType GetProjectorParameterType(const class FString& ParamName, int32 RangeIndex) const;
	struct FVector GetProjectorPosition(const class FString& ParamName, int32 RangeIndex) const;
	struct FVector GetProjectorScale(const class FString& ParamName, int32 RangeIndex) const;
	struct FVector GetProjectorUp(const class FString& ParamName, int32 RangeIndex) const;
	void GetProjectorValue(const class FString& ProjectorParamName, struct FVector* OutPos, struct FVector* OutDirection, struct FVector* OutUp, struct FVector* OutScale, float* OutAngle, ECustomizableObjectProjectorType* OutType, int32 RangeIndex) const;
	int32 GetProjectorValueRange(const class FString& ParamName) const;
	class USkeletalMesh* GetSkeletalMesh(int32 ComponentIndex) const;
	class UTexture2D* GetTextureParameterSelectedOptionT(const class FString& TextureParamName, int32 RangeIndex) const;
	bool HasAnyParameters() const;
	bool HasAnySkeletalMesh() const;
	bool IsParameterRelevant(const class FString& ParamName) const;
	bool IsParamMultidimensional(const class FString& ParamName) const;
	struct FMultilayerProjectorLayer MultilayerProjectorGetLayer(const class FName& ProjectorParamName, int32 Index_0) const;
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(const class FName& ProjectorParamName, const class FName& ID) const;
	TArray<class FName> MultilayerProjectorGetVirtualLayers(const class FName& ProjectorParamName) const;
	int32 MultilayerProjectorNumLayers(const class FName& ProjectorParamName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableObjectInstance">();
	}
	static class UCustomizableObjectInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableObjectInstance>();
	}
};
static_assert(alignof(UCustomizableObjectInstance) == 0x000008, "Wrong alignment on UCustomizableObjectInstance");
static_assert(sizeof(UCustomizableObjectInstance) == 0x000390, "Wrong size on UCustomizableObjectInstance");
static_assert(offsetof(UCustomizableObjectInstance, BeginUpdateDelegate) == 0x000028, "Member 'UCustomizableObjectInstance::BeginUpdateDelegate' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, UpdatedDelegate) == 0x000050, "Member 'UCustomizableObjectInstance::UpdatedDelegate' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, BeginDestroyDelegate) == 0x000078, "Member 'UCustomizableObjectInstance::BeginDestroyDelegate' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, SkeletalMeshes) == 0x0000F0, "Member 'UCustomizableObjectInstance::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, SkeletalMeshStatus) == 0x000100, "Member 'UCustomizableObjectInstance::SkeletalMeshStatus' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, Descriptor) == 0x000158, "Member 'UCustomizableObjectInstance::Descriptor' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, PrivateData) == 0x000280, "Member 'UCustomizableObjectInstance::PrivateData' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, CustomizableObject) == 0x0002D0, "Member 'UCustomizableObjectInstance::CustomizableObject' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, BoolParameters) == 0x0002D8, "Member 'UCustomizableObjectInstance::BoolParameters' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, IntParameters) == 0x0002E8, "Member 'UCustomizableObjectInstance::IntParameters' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, FloatParameters) == 0x0002F8, "Member 'UCustomizableObjectInstance::FloatParameters' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, TextureParameters) == 0x000308, "Member 'UCustomizableObjectInstance::TextureParameters' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, VectorParameters) == 0x000318, "Member 'UCustomizableObjectInstance::VectorParameters' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, ProjectorParameters) == 0x000328, "Member 'UCustomizableObjectInstance::ProjectorParameters' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, MultilayerProjectors) == 0x000338, "Member 'UCustomizableObjectInstance::MultilayerProjectors' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectInstance, bBuildParameterDecorations) == 0x000388, "Member 'UCustomizableObjectInstance::bBuildParameterDecorations' has a wrong offset!");

class UMutableTextureMipDataProviderFactory final : public UTextureMipDataProviderFactory
{
public:
	class UCustomizableObjectInstance*            CustomizableObjectInstance;
	uint8                                         Pad_30[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MutableTextureMipDataProviderFactory">();
	}
	static class UMutableTextureMipDataProviderFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMutableTextureMipDataProviderFactory>();
	}
};
static_assert(alignof(UMutableTextureMipDataProviderFactory) == 0x000008, "Wrong alignment on UMutableTextureMipDataProviderFactory");
static_assert(sizeof(UMutableTextureMipDataProviderFactory) == 0x000050, "Wrong size on UMutableTextureMipDataProviderFactory");
static_assert(offsetof(UMutableTextureMipDataProviderFactory, CustomizableObjectInstance) == 0x000028, "Member 'UMutableTextureMipDataProviderFactory::CustomizableObjectInstance' has a wrong offset!");

class UCustomizableSystemImageProvider : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableSystemImageProvider">();
	}
	static class UCustomizableSystemImageProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableSystemImageProvider>();
	}
};
static_assert(alignof(UCustomizableSystemImageProvider) == 0x000008, "Wrong alignment on UCustomizableSystemImageProvider");
static_assert(sizeof(UCustomizableSystemImageProvider) == 0x000028, "Wrong size on UCustomizableSystemImageProvider");

class UCustomizableObjectSystem final : public UObject
{
public:
	TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh;
	class UDefaultImageProvider*                  DefaultImageProvider;
	class UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement;
	class UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement;
	TArray<class UTexture2D*>                     ProtectedCachedTextures;
	uint8                                         Pad_60[0xF8];

public:
	static class UCustomizableObjectSystem* GetInstance();

	void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);

	int32 GetAverageBuildTime() const;
	int32 GetNumInstances() const;
	int32 GetNumPendingInstances() const;
	class FString GetPluginVersion() const;
	int32 GetTextureMemoryUsed() const;
	int32 GetTotalInstances() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableObjectSystem">();
	}
	static class UCustomizableObjectSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableObjectSystem>();
	}
};
static_assert(alignof(UCustomizableObjectSystem) == 0x000008, "Wrong alignment on UCustomizableObjectSystem");
static_assert(sizeof(UCustomizableObjectSystem) == 0x000158, "Wrong size on UCustomizableObjectSystem");
static_assert(offsetof(UCustomizableObjectSystem, PendingReleaseSkeletalMesh) == 0x000028, "Member 'UCustomizableObjectSystem::PendingReleaseSkeletalMesh' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectSystem, DefaultImageProvider) == 0x000038, "Member 'UCustomizableObjectSystem::DefaultImageProvider' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectSystem, DefaultInstanceLODManagement) == 0x000040, "Member 'UCustomizableObjectSystem::DefaultInstanceLODManagement' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectSystem, CurrentInstanceLODManagement) == 0x000048, "Member 'UCustomizableObjectSystem::CurrentInstanceLODManagement' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectSystem, ProtectedCachedTextures) == 0x000050, "Member 'UCustomizableObjectSystem::ProtectedCachedTextures' has a wrong offset!");

class UCustomizableSkeletalComponent final : public USceneComponent
{
public:
	uint8                                         Pad_2A0[0x4];
	float                                         SkippedLastRenderTime;
	class UCustomizableObjectInstance*            CustomizableObjectInstance;
	int32                                         ComponentIndex;
	uint8                                         Pad_2B4[0x2C];

public:
	void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableSkeletalComponent">();
	}
	static class UCustomizableSkeletalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableSkeletalComponent>();
	}
};
static_assert(alignof(UCustomizableSkeletalComponent) == 0x000010, "Wrong alignment on UCustomizableSkeletalComponent");
static_assert(sizeof(UCustomizableSkeletalComponent) == 0x0002E0, "Wrong size on UCustomizableSkeletalComponent");
static_assert(offsetof(UCustomizableSkeletalComponent, SkippedLastRenderTime) == 0x0002A4, "Member 'UCustomizableSkeletalComponent::SkippedLastRenderTime' has a wrong offset!");
static_assert(offsetof(UCustomizableSkeletalComponent, CustomizableObjectInstance) == 0x0002A8, "Member 'UCustomizableSkeletalComponent::CustomizableObjectInstance' has a wrong offset!");
static_assert(offsetof(UCustomizableSkeletalComponent, ComponentIndex) == 0x0002B0, "Member 'UCustomizableSkeletalComponent::ComponentIndex' has a wrong offset!");

class ACustomizableSkeletalMeshActor final : public ASkeletalMeshActor
{
public:
	TArray<class UCustomizableSkeletalComponent*> CustomizableSkeletalComponents;
	TArray<class USkeletalMeshComponent*>         SkeletalMeshComponents;
	class UCustomizableSkeletalComponent*         CustomizableSkeletalComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableSkeletalMeshActor">();
	}
	static class ACustomizableSkeletalMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACustomizableSkeletalMeshActor>();
	}
};
static_assert(alignof(ACustomizableSkeletalMeshActor) == 0x000008, "Wrong alignment on ACustomizableSkeletalMeshActor");
static_assert(sizeof(ACustomizableSkeletalMeshActor) == 0x000330, "Wrong size on ACustomizableSkeletalMeshActor");
static_assert(offsetof(ACustomizableSkeletalMeshActor, CustomizableSkeletalComponents) == 0x000308, "Member 'ACustomizableSkeletalMeshActor::CustomizableSkeletalComponents' has a wrong offset!");
static_assert(offsetof(ACustomizableSkeletalMeshActor, SkeletalMeshComponents) == 0x000318, "Member 'ACustomizableSkeletalMeshActor::SkeletalMeshComponents' has a wrong offset!");
static_assert(offsetof(ACustomizableSkeletalMeshActor, CustomizableSkeletalComponent) == 0x000328, "Member 'ACustomizableSkeletalMeshActor::CustomizableSkeletalComponent' has a wrong offset!");

class UDefaultImageProvider final : public UCustomizableSystemImageProvider
{
public:
	uint8                                         Pad_28[0x8];
	TArray<class UTexture2D*>                     Textures;
	TArray<bool>                                  KeepTextures;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultImageProvider">();
	}
	static class UDefaultImageProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultImageProvider>();
	}
};
static_assert(alignof(UDefaultImageProvider) == 0x000008, "Wrong alignment on UDefaultImageProvider");
static_assert(sizeof(UDefaultImageProvider) == 0x000050, "Wrong size on UDefaultImageProvider");
static_assert(offsetof(UDefaultImageProvider, Textures) == 0x000030, "Member 'UDefaultImageProvider::Textures' has a wrong offset!");
static_assert(offsetof(UDefaultImageProvider, KeepTextures) == 0x000040, "Member 'UDefaultImageProvider::KeepTextures' has a wrong offset!");

}
