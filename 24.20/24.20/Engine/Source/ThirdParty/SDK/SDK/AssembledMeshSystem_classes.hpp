#pragma once

#include "Basic.hpp"

#include "ModularGameplay_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "AssembledMeshSystem_structs.hpp"

namespace SDK
{

class UAssembledMeshCoordinatorComponent : public UPlayerStateComponent
{
public:
	void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssembledMeshCoordinatorComponent">();
	}
	static class UAssembledMeshCoordinatorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssembledMeshCoordinatorComponent>();
	}
};
static_assert(alignof(UAssembledMeshCoordinatorComponent) == 0x000008, "Wrong alignment on UAssembledMeshCoordinatorComponent");
static_assert(sizeof(UAssembledMeshCoordinatorComponent) == 0x0000A0, "Wrong size on UAssembledMeshCoordinatorComponent");

class UAssembledMeshSchema final : public UPrimaryDataAsset
{
public:
	struct FGameplayTag                           MeshSchemaTag;
	uint8                                         Pad_34[0x4];
	TSoftObjectPtr<class UCustomizableObjectInstance> CustomizableObjectInstance;
	TSoftObjectPtr<class UCustomizableObject>     CustomizableObject;
	TMap<class FString, class FString>            SelectedIntParams;
	TMap<class FString, float>                    SelectedFloatParams;
	struct FAssembledMeshAttachmentRules          AttachmentRules;
	TSoftClassPtr<class UClass>                   AnimClass;
	TMap<int32, class FName>                      LinkedAnimGraphTag;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssembledMeshSchema">();
	}
	static class UAssembledMeshSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssembledMeshSchema>();
	}
};
static_assert(alignof(UAssembledMeshSchema) == 0x000008, "Wrong alignment on UAssembledMeshSchema");
static_assert(sizeof(UAssembledMeshSchema) == 0x0001C0, "Wrong size on UAssembledMeshSchema");
static_assert(offsetof(UAssembledMeshSchema, MeshSchemaTag) == 0x000030, "Member 'UAssembledMeshSchema::MeshSchemaTag' has a wrong offset!");
static_assert(offsetof(UAssembledMeshSchema, CustomizableObjectInstance) == 0x000038, "Member 'UAssembledMeshSchema::CustomizableObjectInstance' has a wrong offset!");
static_assert(offsetof(UAssembledMeshSchema, CustomizableObject) == 0x000060, "Member 'UAssembledMeshSchema::CustomizableObject' has a wrong offset!");
static_assert(offsetof(UAssembledMeshSchema, SelectedIntParams) == 0x000088, "Member 'UAssembledMeshSchema::SelectedIntParams' has a wrong offset!");
static_assert(offsetof(UAssembledMeshSchema, SelectedFloatParams) == 0x0000D8, "Member 'UAssembledMeshSchema::SelectedFloatParams' has a wrong offset!");
static_assert(offsetof(UAssembledMeshSchema, AttachmentRules) == 0x000128, "Member 'UAssembledMeshSchema::AttachmentRules' has a wrong offset!");
static_assert(offsetof(UAssembledMeshSchema, AnimClass) == 0x000148, "Member 'UAssembledMeshSchema::AnimClass' has a wrong offset!");
static_assert(offsetof(UAssembledMeshSchema, LinkedAnimGraphTag) == 0x000170, "Member 'UAssembledMeshSchema::LinkedAnimGraphTag' has a wrong offset!");

class UAssembledMeshUserComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x10];
	TArray<class UAssembledMeshSchema*>           MeshParts;
	TArray<struct FAssembledComponentReferences>  MeshPartComponents;

public:
	class USkeletalMeshComponent* GetAttachToComponent();
	void OnRep_MeshParts();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssembledMeshUserComponent">();
	}
	static class UAssembledMeshUserComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssembledMeshUserComponent>();
	}
};
static_assert(alignof(UAssembledMeshUserComponent) == 0x000008, "Wrong alignment on UAssembledMeshUserComponent");
static_assert(sizeof(UAssembledMeshUserComponent) == 0x0000D0, "Wrong size on UAssembledMeshUserComponent");
static_assert(offsetof(UAssembledMeshUserComponent, MeshParts) == 0x0000B0, "Member 'UAssembledMeshUserComponent::MeshParts' has a wrong offset!");
static_assert(offsetof(UAssembledMeshUserComponent, MeshPartComponents) == 0x0000C0, "Member 'UAssembledMeshUserComponent::MeshPartComponents' has a wrong offset!");

}
