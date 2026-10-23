#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

enum class ECurieHandlerBehavior : uint8
{
	Handler_Add                              = 0,
	Handler_Replace                          = 1,
	Handler_MAX                              = 2,
};

enum class ECurieHandlerPriority : uint8
{
	Priority_1                               = 1,
	Priority_2                               = 2,
	Priority_3                               = 3,
	Priority_4                               = 4,
	Priority_5                               = 5,
	Priority_6                               = 6,
	Priority_7                               = 7,
	Priority_8                               = 8,
	Priority_9                               = 9,
	Priority_10                              = 10,
	Priority_Default                         = 11,
	Priority_MAX                             = 12,
};

enum class ECurieManagerComponentPriority : uint8
{
	Priority_1                               = 1,
	Priority_2                               = 2,
	Priority_3                               = 3,
	Priority_4                               = 4,
	Priority_5                               = 5,
	Priority_6                               = 6,
	Priority_7                               = 7,
	Priority_8                               = 8,
	Priority_9                               = 9,
	Priority_10                              = 10,
	Priority_Default                         = 11,
	Priority_MAX                             = 12,
};

enum class ECurieEntityType : uint8
{
	Invalid                                  = 0,
	Material                                 = 1,
	Element                                  = 2,
	ECurieEntityType_MAX                     = 3,
};

struct FCurieMaterialDefinitionBase : public FTableRowBase
{
public:
	struct FGameplayTagContainer                  ElementalImmunities;
	struct FGameplayTagContainer                  ElementAttachmentImmunities;
	struct FGameplayTagContainer                  ElementsAllowedWhenCannotBeDamaged;
	struct FGameplayTagContainer                  MaterialProperties;
};
static_assert(alignof(FCurieMaterialDefinitionBase) == 0x000008, "Wrong alignment on FCurieMaterialDefinitionBase");
static_assert(sizeof(FCurieMaterialDefinitionBase) == 0x000088, "Wrong size on FCurieMaterialDefinitionBase");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementalImmunities) == 0x000008, "Member 'FCurieMaterialDefinitionBase::ElementalImmunities' has a wrong offset!");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementAttachmentImmunities) == 0x000028, "Member 'FCurieMaterialDefinitionBase::ElementAttachmentImmunities' has a wrong offset!");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementsAllowedWhenCannotBeDamaged) == 0x000048, "Member 'FCurieMaterialDefinitionBase::ElementsAllowedWhenCannotBeDamaged' has a wrong offset!");
static_assert(offsetof(FCurieMaterialDefinitionBase, MaterialProperties) == 0x000068, "Member 'FCurieMaterialDefinitionBase::MaterialProperties' has a wrong offset!");

struct alignas(0x04) FCurieContainerHandle final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FCurieContainerHandle) == 0x000004, "Wrong alignment on FCurieContainerHandle");
static_assert(sizeof(FCurieContainerHandle) == 0x000004, "Wrong size on FCurieContainerHandle");

struct FCurieElementDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieElementAllocationHandler> ElementAllocationHandler;
	TArray<TSubclassOf<class UCurieElementAttachHandler>> ElementAttachHandlers;
	TSubclassOf<class UCurieElementAttachConditionHandler> ElementAttachConditionHandler;
	TArray<TSubclassOf<class UCurieElementInteractWithElementHandler>> ElementInteractHandlers;
	TArray<TSubclassOf<class UCurieElementInteractWithMaterialHandler>> ElementMaterialInteractHandlers;
	TArray<TSubclassOf<class UCurieElementInteractWithContainerHandler>> ElementContainerInteractHandlers;
	struct FGameplayTagContainer                  ElementalImmunities;
	uint8                                         bIsEnabled : 1;
	uint8                                         Pad_79[0x7];
};
static_assert(alignof(FCurieElementDefinitionBase) == 0x000008, "Wrong alignment on FCurieElementDefinitionBase");
static_assert(sizeof(FCurieElementDefinitionBase) == 0x000080, "Wrong size on FCurieElementDefinitionBase");
static_assert(offsetof(FCurieElementDefinitionBase, ElementAllocationHandler) == 0x000008, "Member 'FCurieElementDefinitionBase::ElementAllocationHandler' has a wrong offset!");
static_assert(offsetof(FCurieElementDefinitionBase, ElementAttachHandlers) == 0x000010, "Member 'FCurieElementDefinitionBase::ElementAttachHandlers' has a wrong offset!");
static_assert(offsetof(FCurieElementDefinitionBase, ElementAttachConditionHandler) == 0x000020, "Member 'FCurieElementDefinitionBase::ElementAttachConditionHandler' has a wrong offset!");
static_assert(offsetof(FCurieElementDefinitionBase, ElementInteractHandlers) == 0x000028, "Member 'FCurieElementDefinitionBase::ElementInteractHandlers' has a wrong offset!");
static_assert(offsetof(FCurieElementDefinitionBase, ElementMaterialInteractHandlers) == 0x000038, "Member 'FCurieElementDefinitionBase::ElementMaterialInteractHandlers' has a wrong offset!");
static_assert(offsetof(FCurieElementDefinitionBase, ElementContainerInteractHandlers) == 0x000048, "Member 'FCurieElementDefinitionBase::ElementContainerInteractHandlers' has a wrong offset!");
static_assert(offsetof(FCurieElementDefinitionBase, ElementalImmunities) == 0x000058, "Member 'FCurieElementDefinitionBase::ElementalImmunities' has a wrong offset!");

struct FCurieEntityStateDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieEntityStateBehavior>  StateBehaviorClass;
	uint8                                         bIsEnabled : 1;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FCurieEntityStateDefinitionBase) == 0x000008, "Wrong alignment on FCurieEntityStateDefinitionBase");
static_assert(sizeof(FCurieEntityStateDefinitionBase) == 0x000018, "Wrong size on FCurieEntityStateDefinitionBase");
static_assert(offsetof(FCurieEntityStateDefinitionBase, StateBehaviorClass) == 0x000008, "Member 'FCurieEntityStateDefinitionBase::StateBehaviorClass' has a wrong offset!");

struct FCurieElementAttachHandlersContainer final
{
public:
	TArray<class UCurieElementAttachHandler*>     Handlers;
};
static_assert(alignof(FCurieElementAttachHandlersContainer) == 0x000008, "Wrong alignment on FCurieElementAttachHandlersContainer");
static_assert(sizeof(FCurieElementAttachHandlersContainer) == 0x000010, "Wrong size on FCurieElementAttachHandlersContainer");
static_assert(offsetof(FCurieElementAttachHandlersContainer, Handlers) == 0x000000, "Member 'FCurieElementAttachHandlersContainer::Handlers' has a wrong offset!");

struct FCurieElementAttachConditionHandlersContainer final
{
public:
	TArray<class UCurieElementAttachConditionHandler*> Handlers;
};
static_assert(alignof(FCurieElementAttachConditionHandlersContainer) == 0x000008, "Wrong alignment on FCurieElementAttachConditionHandlersContainer");
static_assert(sizeof(FCurieElementAttachConditionHandlersContainer) == 0x000010, "Wrong size on FCurieElementAttachConditionHandlersContainer");
static_assert(offsetof(FCurieElementAttachConditionHandlersContainer, Handlers) == 0x000000, "Member 'FCurieElementAttachConditionHandlersContainer::Handlers' has a wrong offset!");

struct FCurieElementInteractWithElementHandlersContainer final
{
public:
	TArray<class UCurieElementInteractWithElementHandler*> Handlers;
};
static_assert(alignof(FCurieElementInteractWithElementHandlersContainer) == 0x000008, "Wrong alignment on FCurieElementInteractWithElementHandlersContainer");
static_assert(sizeof(FCurieElementInteractWithElementHandlersContainer) == 0x000010, "Wrong size on FCurieElementInteractWithElementHandlersContainer");
static_assert(offsetof(FCurieElementInteractWithElementHandlersContainer, Handlers) == 0x000000, "Member 'FCurieElementInteractWithElementHandlersContainer::Handlers' has a wrong offset!");

struct FCurieElementInteractWithMaterialHandlersContainer final
{
public:
	TArray<class UCurieElementInteractWithMaterialHandler*> Handlers;
};
static_assert(alignof(FCurieElementInteractWithMaterialHandlersContainer) == 0x000008, "Wrong alignment on FCurieElementInteractWithMaterialHandlersContainer");
static_assert(sizeof(FCurieElementInteractWithMaterialHandlersContainer) == 0x000010, "Wrong size on FCurieElementInteractWithMaterialHandlersContainer");
static_assert(offsetof(FCurieElementInteractWithMaterialHandlersContainer, Handlers) == 0x000000, "Member 'FCurieElementInteractWithMaterialHandlersContainer::Handlers' has a wrong offset!");

struct FCurieElementInteractWithContainerHandlersContainer final
{
public:
	TArray<class UCurieElementInteractWithContainerHandler*> Handlers;
};
static_assert(alignof(FCurieElementInteractWithContainerHandlersContainer) == 0x000008, "Wrong alignment on FCurieElementInteractWithContainerHandlersContainer");
static_assert(sizeof(FCurieElementInteractWithContainerHandlersContainer) == 0x000010, "Wrong size on FCurieElementInteractWithContainerHandlersContainer");
static_assert(offsetof(FCurieElementInteractWithContainerHandlersContainer, Handlers) == 0x000000, "Member 'FCurieElementInteractWithContainerHandlersContainer::Handlers' has a wrong offset!");

struct alignas(0x08) FCurieInteractParamsHandle final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FCurieInteractParamsHandle) == 0x000008, "Wrong alignment on FCurieInteractParamsHandle");
static_assert(sizeof(FCurieInteractParamsHandle) == 0x000010, "Wrong size on FCurieInteractParamsHandle");

struct alignas(0x04) FCurieElementPairKey final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FCurieElementPairKey) == 0x000004, "Wrong alignment on FCurieElementPairKey");
static_assert(sizeof(FCurieElementPairKey) == 0x000008, "Wrong size on FCurieElementPairKey");

struct FCurieManagerComponentEntry final : public FTableRowBase
{
public:
	bool                                          bIsActive;
	ECurieManagerComponentPriority                Priority;
	uint8                                         Pad_A[0x6];
	TSubclassOf<class UCurieManagerComponent>     ManagerType;
	class UCurieManagerComponentConfig*           Config;
};
static_assert(alignof(FCurieManagerComponentEntry) == 0x000008, "Wrong alignment on FCurieManagerComponentEntry");
static_assert(sizeof(FCurieManagerComponentEntry) == 0x000020, "Wrong size on FCurieManagerComponentEntry");
static_assert(offsetof(FCurieManagerComponentEntry, bIsActive) == 0x000008, "Member 'FCurieManagerComponentEntry::bIsActive' has a wrong offset!");
static_assert(offsetof(FCurieManagerComponentEntry, Priority) == 0x000009, "Member 'FCurieManagerComponentEntry::Priority' has a wrong offset!");
static_assert(offsetof(FCurieManagerComponentEntry, ManagerType) == 0x000010, "Member 'FCurieManagerComponentEntry::ManagerType' has a wrong offset!");
static_assert(offsetof(FCurieManagerComponentEntry, Config) == 0x000018, "Member 'FCurieManagerComponentEntry::Config' has a wrong offset!");

struct alignas(0x04) FCurieInteractHandle final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FCurieInteractHandle) == 0x000004, "Wrong alignment on FCurieInteractHandle");
static_assert(sizeof(FCurieInteractHandle) == 0x000004, "Wrong size on FCurieInteractHandle");

struct FCurieEffectContainer final
{
public:
	struct FGameplayTagQuery                      TargetFilter;
	TSubclassOf<class UGameplayEffect>            GameplayEffect;
};
static_assert(alignof(FCurieEffectContainer) == 0x000008, "Wrong alignment on FCurieEffectContainer");
static_assert(sizeof(FCurieEffectContainer) == 0x000050, "Wrong size on FCurieEffectContainer");
static_assert(offsetof(FCurieEffectContainer, TargetFilter) == 0x000000, "Member 'FCurieEffectContainer::TargetFilter' has a wrong offset!");
static_assert(offsetof(FCurieEffectContainer, GameplayEffect) == 0x000048, "Member 'FCurieEffectContainer::GameplayEffect' has a wrong offset!");

struct alignas(0x04) FCurieStateHandle final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FCurieStateHandle) == 0x000004, "Wrong alignment on FCurieStateHandle");
static_assert(sizeof(FCurieStateHandle) == 0x000004, "Wrong size on FCurieStateHandle");

struct alignas(0x04) FCurieElementHandle final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FCurieElementHandle) == 0x000004, "Wrong alignment on FCurieElementHandle");
static_assert(sizeof(FCurieElementHandle) == 0x000004, "Wrong size on FCurieElementHandle");

}
