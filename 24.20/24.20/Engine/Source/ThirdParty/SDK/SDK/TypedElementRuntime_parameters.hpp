#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "TypedElementFramework_structs.hpp"
#include "TypedElementRuntime_structs.hpp"

namespace SDK::Params
{

struct TypedElementSelectionSetLibrary_DeselectElementsFromList final
{
public:
	class UTypedElementSelectionSet*              SelectionSet;
	struct FScriptTypedElementListProxy           ElementList;
	struct FTypedElementSelectionOptions          SelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(TypedElementSelectionSetLibrary_DeselectElementsFromList) == 0x000008, "Wrong alignment on TypedElementSelectionSetLibrary_DeselectElementsFromList");
static_assert(sizeof(TypedElementSelectionSetLibrary_DeselectElementsFromList) == 0x000020, "Wrong size on TypedElementSelectionSetLibrary_DeselectElementsFromList");
static_assert(offsetof(TypedElementSelectionSetLibrary_DeselectElementsFromList, SelectionSet) == 0x000000, "Member 'TypedElementSelectionSetLibrary_DeselectElementsFromList::SelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_DeselectElementsFromList, ElementList) == 0x000008, "Member 'TypedElementSelectionSetLibrary_DeselectElementsFromList::ElementList' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_DeselectElementsFromList, SelectionOptions) == 0x000018, "Member 'TypedElementSelectionSetLibrary_DeselectElementsFromList::SelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_DeselectElementsFromList, ReturnValue) == 0x00001D, "Member 'TypedElementSelectionSetLibrary_DeselectElementsFromList::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSetLibrary_GetNormalizedElementList final
{
public:
	class UTypedElementSelectionSet*              SelectionSet;
	struct FScriptTypedElementListProxy           ElementList;
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;
	uint8                                         Pad_1A[0x6];
	struct FScriptTypedElementListProxy           ReturnValue;
};
static_assert(alignof(TypedElementSelectionSetLibrary_GetNormalizedElementList) == 0x000008, "Wrong alignment on TypedElementSelectionSetLibrary_GetNormalizedElementList");
static_assert(sizeof(TypedElementSelectionSetLibrary_GetNormalizedElementList) == 0x000030, "Wrong size on TypedElementSelectionSetLibrary_GetNormalizedElementList");
static_assert(offsetof(TypedElementSelectionSetLibrary_GetNormalizedElementList, SelectionSet) == 0x000000, "Member 'TypedElementSelectionSetLibrary_GetNormalizedElementList::SelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_GetNormalizedElementList, ElementList) == 0x000008, "Member 'TypedElementSelectionSetLibrary_GetNormalizedElementList::ElementList' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_GetNormalizedElementList, NormalizationOptions) == 0x000018, "Member 'TypedElementSelectionSetLibrary_GetNormalizedElementList::NormalizationOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_GetNormalizedElementList, ReturnValue) == 0x000020, "Member 'TypedElementSelectionSetLibrary_GetNormalizedElementList::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSetLibrary_GetNormalizedSelection final
{
public:
	class UTypedElementSelectionSet*              SelectionSet;
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;
	uint8                                         Pad_A[0x6];
	struct FScriptTypedElementListProxy           ReturnValue;
};
static_assert(alignof(TypedElementSelectionSetLibrary_GetNormalizedSelection) == 0x000008, "Wrong alignment on TypedElementSelectionSetLibrary_GetNormalizedSelection");
static_assert(sizeof(TypedElementSelectionSetLibrary_GetNormalizedSelection) == 0x000020, "Wrong size on TypedElementSelectionSetLibrary_GetNormalizedSelection");
static_assert(offsetof(TypedElementSelectionSetLibrary_GetNormalizedSelection, SelectionSet) == 0x000000, "Member 'TypedElementSelectionSetLibrary_GetNormalizedSelection::SelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_GetNormalizedSelection, NormalizationOptions) == 0x000008, "Member 'TypedElementSelectionSetLibrary_GetNormalizedSelection::NormalizationOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_GetNormalizedSelection, ReturnValue) == 0x000010, "Member 'TypedElementSelectionSetLibrary_GetNormalizedSelection::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSetLibrary_SelectElementsFromList final
{
public:
	class UTypedElementSelectionSet*              SelectionSet;
	struct FScriptTypedElementListProxy           ElementList;
	struct FTypedElementSelectionOptions          SelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(TypedElementSelectionSetLibrary_SelectElementsFromList) == 0x000008, "Wrong alignment on TypedElementSelectionSetLibrary_SelectElementsFromList");
static_assert(sizeof(TypedElementSelectionSetLibrary_SelectElementsFromList) == 0x000020, "Wrong size on TypedElementSelectionSetLibrary_SelectElementsFromList");
static_assert(offsetof(TypedElementSelectionSetLibrary_SelectElementsFromList, SelectionSet) == 0x000000, "Member 'TypedElementSelectionSetLibrary_SelectElementsFromList::SelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_SelectElementsFromList, ElementList) == 0x000008, "Member 'TypedElementSelectionSetLibrary_SelectElementsFromList::ElementList' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_SelectElementsFromList, SelectionOptions) == 0x000018, "Member 'TypedElementSelectionSetLibrary_SelectElementsFromList::SelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_SelectElementsFromList, ReturnValue) == 0x00001D, "Member 'TypedElementSelectionSetLibrary_SelectElementsFromList::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSetLibrary_SetSelectionFromList final
{
public:
	class UTypedElementSelectionSet*              SelectionSet;
	struct FScriptTypedElementListProxy           ElementList;
	struct FTypedElementSelectionOptions          SelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(TypedElementSelectionSetLibrary_SetSelectionFromList) == 0x000008, "Wrong alignment on TypedElementSelectionSetLibrary_SetSelectionFromList");
static_assert(sizeof(TypedElementSelectionSetLibrary_SetSelectionFromList) == 0x000020, "Wrong size on TypedElementSelectionSetLibrary_SetSelectionFromList");
static_assert(offsetof(TypedElementSelectionSetLibrary_SetSelectionFromList, SelectionSet) == 0x000000, "Member 'TypedElementSelectionSetLibrary_SetSelectionFromList::SelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_SetSelectionFromList, ElementList) == 0x000008, "Member 'TypedElementSelectionSetLibrary_SetSelectionFromList::ElementList' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_SetSelectionFromList, SelectionOptions) == 0x000018, "Member 'TypedElementSelectionSetLibrary_SetSelectionFromList::SelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSetLibrary_SetSelectionFromList, ReturnValue) == 0x00001D, "Member 'TypedElementSelectionSetLibrary_SetSelectionFromList::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_ClearSelection final
{
public:
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_ClearSelection) == 0x000001, "Wrong alignment on TypedElementSelectionSet_ClearSelection");
static_assert(sizeof(TypedElementSelectionSet_ClearSelection) == 0x000006, "Wrong size on TypedElementSelectionSet_ClearSelection");
static_assert(offsetof(TypedElementSelectionSet_ClearSelection, InSelectionOptions) == 0x000000, "Member 'TypedElementSelectionSet_ClearSelection::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_ClearSelection, ReturnValue) == 0x000005, "Member 'TypedElementSelectionSet_ClearSelection::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_DeselectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(TypedElementSelectionSet_DeselectElement) == 0x000008, "Wrong alignment on TypedElementSelectionSet_DeselectElement");
static_assert(sizeof(TypedElementSelectionSet_DeselectElement) == 0x000010, "Wrong size on TypedElementSelectionSet_DeselectElement");
static_assert(offsetof(TypedElementSelectionSet_DeselectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionSet_DeselectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_DeselectElement, InSelectionOptions) == 0x000008, "Member 'TypedElementSelectionSet_DeselectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_DeselectElement, ReturnValue) == 0x00000D, "Member 'TypedElementSelectionSet_DeselectElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_DeselectElements final
{
public:
	TArray<struct FScriptTypedElementHandle>      InElementHandles;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(TypedElementSelectionSet_DeselectElements) == 0x000008, "Wrong alignment on TypedElementSelectionSet_DeselectElements");
static_assert(sizeof(TypedElementSelectionSet_DeselectElements) == 0x000018, "Wrong size on TypedElementSelectionSet_DeselectElements");
static_assert(offsetof(TypedElementSelectionSet_DeselectElements, InElementHandles) == 0x000000, "Member 'TypedElementSelectionSet_DeselectElements::InElementHandles' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_DeselectElements, InSelectionOptions) == 0x000010, "Member 'TypedElementSelectionSet_DeselectElements::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_DeselectElements, ReturnValue) == 0x000015, "Member 'TypedElementSelectionSet_DeselectElements::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_RestoreSelectionState final
{
public:
	struct FTypedElementSelectionSetState         InSelectionState;
};
static_assert(alignof(TypedElementSelectionSet_RestoreSelectionState) == 0x000008, "Wrong alignment on TypedElementSelectionSet_RestoreSelectionState");
static_assert(sizeof(TypedElementSelectionSet_RestoreSelectionState) == 0x000018, "Wrong size on TypedElementSelectionSet_RestoreSelectionState");
static_assert(offsetof(TypedElementSelectionSet_RestoreSelectionState, InSelectionState) == 0x000000, "Member 'TypedElementSelectionSet_RestoreSelectionState::InSelectionState' has a wrong offset!");

struct TypedElementSelectionSet_SelectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(TypedElementSelectionSet_SelectElement) == 0x000008, "Wrong alignment on TypedElementSelectionSet_SelectElement");
static_assert(sizeof(TypedElementSelectionSet_SelectElement) == 0x000010, "Wrong size on TypedElementSelectionSet_SelectElement");
static_assert(offsetof(TypedElementSelectionSet_SelectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionSet_SelectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_SelectElement, InSelectionOptions) == 0x000008, "Member 'TypedElementSelectionSet_SelectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_SelectElement, ReturnValue) == 0x00000D, "Member 'TypedElementSelectionSet_SelectElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_SelectElements final
{
public:
	TArray<struct FScriptTypedElementHandle>      InElementHandles;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(TypedElementSelectionSet_SelectElements) == 0x000008, "Wrong alignment on TypedElementSelectionSet_SelectElements");
static_assert(sizeof(TypedElementSelectionSet_SelectElements) == 0x000018, "Wrong size on TypedElementSelectionSet_SelectElements");
static_assert(offsetof(TypedElementSelectionSet_SelectElements, InElementHandles) == 0x000000, "Member 'TypedElementSelectionSet_SelectElements::InElementHandles' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_SelectElements, InSelectionOptions) == 0x000010, "Member 'TypedElementSelectionSet_SelectElements::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_SelectElements, ReturnValue) == 0x000015, "Member 'TypedElementSelectionSet_SelectElements::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_SetSelection final
{
public:
	TArray<struct FScriptTypedElementHandle>      InElementHandles;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(TypedElementSelectionSet_SetSelection) == 0x000008, "Wrong alignment on TypedElementSelectionSet_SetSelection");
static_assert(sizeof(TypedElementSelectionSet_SetSelection) == 0x000018, "Wrong size on TypedElementSelectionSet_SetSelection");
static_assert(offsetof(TypedElementSelectionSet_SetSelection, InElementHandles) == 0x000000, "Member 'TypedElementSelectionSet_SetSelection::InElementHandles' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_SetSelection, InSelectionOptions) == 0x000010, "Member 'TypedElementSelectionSet_SetSelection::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_SetSelection, ReturnValue) == 0x000015, "Member 'TypedElementSelectionSet_SetSelection::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_AllowSelectionModifiers final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(TypedElementSelectionSet_AllowSelectionModifiers) == 0x000008, "Wrong alignment on TypedElementSelectionSet_AllowSelectionModifiers");
static_assert(sizeof(TypedElementSelectionSet_AllowSelectionModifiers) == 0x000010, "Wrong size on TypedElementSelectionSet_AllowSelectionModifiers");
static_assert(offsetof(TypedElementSelectionSet_AllowSelectionModifiers, InElementHandle) == 0x000000, "Member 'TypedElementSelectionSet_AllowSelectionModifiers::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_AllowSelectionModifiers, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_AllowSelectionModifiers::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_CanDeselectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(TypedElementSelectionSet_CanDeselectElement) == 0x000008, "Wrong alignment on TypedElementSelectionSet_CanDeselectElement");
static_assert(sizeof(TypedElementSelectionSet_CanDeselectElement) == 0x000010, "Wrong size on TypedElementSelectionSet_CanDeselectElement");
static_assert(offsetof(TypedElementSelectionSet_CanDeselectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionSet_CanDeselectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_CanDeselectElement, InSelectionOptions) == 0x000008, "Member 'TypedElementSelectionSet_CanDeselectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_CanDeselectElement, ReturnValue) == 0x00000D, "Member 'TypedElementSelectionSet_CanDeselectElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_CanSelectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(TypedElementSelectionSet_CanSelectElement) == 0x000008, "Wrong alignment on TypedElementSelectionSet_CanSelectElement");
static_assert(sizeof(TypedElementSelectionSet_CanSelectElement) == 0x000010, "Wrong size on TypedElementSelectionSet_CanSelectElement");
static_assert(offsetof(TypedElementSelectionSet_CanSelectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionSet_CanSelectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_CanSelectElement, InSelectionOptions) == 0x000008, "Member 'TypedElementSelectionSet_CanSelectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_CanSelectElement, ReturnValue) == 0x00000D, "Member 'TypedElementSelectionSet_CanSelectElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_CountSelectedElements final
{
public:
	TSubclassOf<class IInterface>                 InBaseInterfaceType;
	int32                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(TypedElementSelectionSet_CountSelectedElements) == 0x000008, "Wrong alignment on TypedElementSelectionSet_CountSelectedElements");
static_assert(sizeof(TypedElementSelectionSet_CountSelectedElements) == 0x000010, "Wrong size on TypedElementSelectionSet_CountSelectedElements");
static_assert(offsetof(TypedElementSelectionSet_CountSelectedElements, InBaseInterfaceType) == 0x000000, "Member 'TypedElementSelectionSet_CountSelectedElements::InBaseInterfaceType' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_CountSelectedElements, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_CountSelectedElements::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_CountSelectedObjects final
{
public:
	const class UClass*                           InRequiredClass;
	int32                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(TypedElementSelectionSet_CountSelectedObjects) == 0x000008, "Wrong alignment on TypedElementSelectionSet_CountSelectedObjects");
static_assert(sizeof(TypedElementSelectionSet_CountSelectedObjects) == 0x000010, "Wrong size on TypedElementSelectionSet_CountSelectedObjects");
static_assert(offsetof(TypedElementSelectionSet_CountSelectedObjects, InRequiredClass) == 0x000000, "Member 'TypedElementSelectionSet_CountSelectedObjects::InRequiredClass' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_CountSelectedObjects, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_CountSelectedObjects::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_GetBottomSelectedObject final
{
public:
	const class UClass*                           InRequiredClass;
	class UObject*                                ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_GetBottomSelectedObject) == 0x000008, "Wrong alignment on TypedElementSelectionSet_GetBottomSelectedObject");
static_assert(sizeof(TypedElementSelectionSet_GetBottomSelectedObject) == 0x000010, "Wrong size on TypedElementSelectionSet_GetBottomSelectedObject");
static_assert(offsetof(TypedElementSelectionSet_GetBottomSelectedObject, InRequiredClass) == 0x000000, "Member 'TypedElementSelectionSet_GetBottomSelectedObject::InRequiredClass' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_GetBottomSelectedObject, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_GetBottomSelectedObject::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_GetCurrentSelectionState final
{
public:
	struct FTypedElementSelectionSetState         ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_GetCurrentSelectionState) == 0x000008, "Wrong alignment on TypedElementSelectionSet_GetCurrentSelectionState");
static_assert(sizeof(TypedElementSelectionSet_GetCurrentSelectionState) == 0x000018, "Wrong size on TypedElementSelectionSet_GetCurrentSelectionState");
static_assert(offsetof(TypedElementSelectionSet_GetCurrentSelectionState, ReturnValue) == 0x000000, "Member 'TypedElementSelectionSet_GetCurrentSelectionState::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_GetNumSelectedElements final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_GetNumSelectedElements) == 0x000004, "Wrong alignment on TypedElementSelectionSet_GetNumSelectedElements");
static_assert(sizeof(TypedElementSelectionSet_GetNumSelectedElements) == 0x000004, "Wrong size on TypedElementSelectionSet_GetNumSelectedElements");
static_assert(offsetof(TypedElementSelectionSet_GetNumSelectedElements, ReturnValue) == 0x000000, "Member 'TypedElementSelectionSet_GetNumSelectedElements::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_GetSelectedObjects final
{
public:
	const class UClass*                           InRequiredClass;
	TArray<class UObject*>                        ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_GetSelectedObjects) == 0x000008, "Wrong alignment on TypedElementSelectionSet_GetSelectedObjects");
static_assert(sizeof(TypedElementSelectionSet_GetSelectedObjects) == 0x000018, "Wrong size on TypedElementSelectionSet_GetSelectedObjects");
static_assert(offsetof(TypedElementSelectionSet_GetSelectedObjects, InRequiredClass) == 0x000000, "Member 'TypedElementSelectionSet_GetSelectedObjects::InRequiredClass' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_GetSelectedObjects, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_GetSelectedObjects::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_GetSelectionElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	ETypedElementSelectionMethod                  InSelectionMethod;
	uint8                                         Pad_9[0x7];
	struct FScriptTypedElementHandle              ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_GetSelectionElement) == 0x000008, "Wrong alignment on TypedElementSelectionSet_GetSelectionElement");
static_assert(sizeof(TypedElementSelectionSet_GetSelectionElement) == 0x000018, "Wrong size on TypedElementSelectionSet_GetSelectionElement");
static_assert(offsetof(TypedElementSelectionSet_GetSelectionElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionSet_GetSelectionElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_GetSelectionElement, InSelectionMethod) == 0x000008, "Member 'TypedElementSelectionSet_GetSelectionElement::InSelectionMethod' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_GetSelectionElement, ReturnValue) == 0x000010, "Member 'TypedElementSelectionSet_GetSelectionElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_GetTopSelectedObject final
{
public:
	const class UClass*                           InRequiredClass;
	class UObject*                                ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_GetTopSelectedObject) == 0x000008, "Wrong alignment on TypedElementSelectionSet_GetTopSelectedObject");
static_assert(sizeof(TypedElementSelectionSet_GetTopSelectedObject) == 0x000010, "Wrong size on TypedElementSelectionSet_GetTopSelectedObject");
static_assert(offsetof(TypedElementSelectionSet_GetTopSelectedObject, InRequiredClass) == 0x000000, "Member 'TypedElementSelectionSet_GetTopSelectedObject::InRequiredClass' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_GetTopSelectedObject, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_GetTopSelectedObject::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_HasSelectedElements final
{
public:
	TSubclassOf<class IInterface>                 InBaseInterfaceType;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(TypedElementSelectionSet_HasSelectedElements) == 0x000008, "Wrong alignment on TypedElementSelectionSet_HasSelectedElements");
static_assert(sizeof(TypedElementSelectionSet_HasSelectedElements) == 0x000010, "Wrong size on TypedElementSelectionSet_HasSelectedElements");
static_assert(offsetof(TypedElementSelectionSet_HasSelectedElements, InBaseInterfaceType) == 0x000000, "Member 'TypedElementSelectionSet_HasSelectedElements::InBaseInterfaceType' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_HasSelectedElements, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_HasSelectedElements::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_HasSelectedObjects final
{
public:
	const class UClass*                           InRequiredClass;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(TypedElementSelectionSet_HasSelectedObjects) == 0x000008, "Wrong alignment on TypedElementSelectionSet_HasSelectedObjects");
static_assert(sizeof(TypedElementSelectionSet_HasSelectedObjects) == 0x000010, "Wrong size on TypedElementSelectionSet_HasSelectedObjects");
static_assert(offsetof(TypedElementSelectionSet_HasSelectedObjects, InRequiredClass) == 0x000000, "Member 'TypedElementSelectionSet_HasSelectedObjects::InRequiredClass' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_HasSelectedObjects, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_HasSelectedObjects::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_IsElementSelected final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FTypedElementIsSelectedOptions         InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(TypedElementSelectionSet_IsElementSelected) == 0x000008, "Wrong alignment on TypedElementSelectionSet_IsElementSelected");
static_assert(sizeof(TypedElementSelectionSet_IsElementSelected) == 0x000010, "Wrong size on TypedElementSelectionSet_IsElementSelected");
static_assert(offsetof(TypedElementSelectionSet_IsElementSelected, InElementHandle) == 0x000000, "Member 'TypedElementSelectionSet_IsElementSelected::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_IsElementSelected, InSelectionOptions) == 0x000008, "Member 'TypedElementSelectionSet_IsElementSelected::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_IsElementSelected, ReturnValue) == 0x000009, "Member 'TypedElementSelectionSet_IsElementSelected::ReturnValue' has a wrong offset!");

struct TypedElementSelectionSet_K2_GetSelectedElementHandles final
{
public:
	TSubclassOf<class IInterface>                 InBaseInterfaceType;
	TArray<struct FScriptTypedElementHandle>      ReturnValue;
};
static_assert(alignof(TypedElementSelectionSet_K2_GetSelectedElementHandles) == 0x000008, "Wrong alignment on TypedElementSelectionSet_K2_GetSelectedElementHandles");
static_assert(sizeof(TypedElementSelectionSet_K2_GetSelectedElementHandles) == 0x000018, "Wrong size on TypedElementSelectionSet_K2_GetSelectedElementHandles");
static_assert(offsetof(TypedElementSelectionSet_K2_GetSelectedElementHandles, InBaseInterfaceType) == 0x000000, "Member 'TypedElementSelectionSet_K2_GetSelectedElementHandles::InBaseInterfaceType' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionSet_K2_GetSelectedElementHandles, ReturnValue) == 0x000008, "Member 'TypedElementSelectionSet_K2_GetSelectedElementHandles::ReturnValue' has a wrong offset!");

struct TypedElementAssetDataInterface_GetAllReferencedAssetDatas final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	TArray<struct FAssetData>                     ReturnValue;
};
static_assert(alignof(TypedElementAssetDataInterface_GetAllReferencedAssetDatas) == 0x000008, "Wrong alignment on TypedElementAssetDataInterface_GetAllReferencedAssetDatas");
static_assert(sizeof(TypedElementAssetDataInterface_GetAllReferencedAssetDatas) == 0x000018, "Wrong size on TypedElementAssetDataInterface_GetAllReferencedAssetDatas");
static_assert(offsetof(TypedElementAssetDataInterface_GetAllReferencedAssetDatas, InElementHandle) == 0x000000, "Member 'TypedElementAssetDataInterface_GetAllReferencedAssetDatas::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementAssetDataInterface_GetAllReferencedAssetDatas, ReturnValue) == 0x000008, "Member 'TypedElementAssetDataInterface_GetAllReferencedAssetDatas::ReturnValue' has a wrong offset!");

struct TypedElementAssetDataInterface_GetAssetData final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FAssetData                             ReturnValue;
};
static_assert(alignof(TypedElementAssetDataInterface_GetAssetData) == 0x000008, "Wrong alignment on TypedElementAssetDataInterface_GetAssetData");
static_assert(sizeof(TypedElementAssetDataInterface_GetAssetData) == 0x000040, "Wrong size on TypedElementAssetDataInterface_GetAssetData");
static_assert(offsetof(TypedElementAssetDataInterface_GetAssetData, InElementHandle) == 0x000000, "Member 'TypedElementAssetDataInterface_GetAssetData::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementAssetDataInterface_GetAssetData, ReturnValue) == 0x000008, "Member 'TypedElementAssetDataInterface_GetAssetData::ReturnValue' has a wrong offset!");

struct TypedElementHierarchyInterface_GetChildElements final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	TArray<struct FScriptTypedElementHandle>      OutElementHandles;
	bool                                          bAllowCreate;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(TypedElementHierarchyInterface_GetChildElements) == 0x000008, "Wrong alignment on TypedElementHierarchyInterface_GetChildElements");
static_assert(sizeof(TypedElementHierarchyInterface_GetChildElements) == 0x000020, "Wrong size on TypedElementHierarchyInterface_GetChildElements");
static_assert(offsetof(TypedElementHierarchyInterface_GetChildElements, InElementHandle) == 0x000000, "Member 'TypedElementHierarchyInterface_GetChildElements::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementHierarchyInterface_GetChildElements, OutElementHandles) == 0x000008, "Member 'TypedElementHierarchyInterface_GetChildElements::OutElementHandles' has a wrong offset!");
static_assert(offsetof(TypedElementHierarchyInterface_GetChildElements, bAllowCreate) == 0x000018, "Member 'TypedElementHierarchyInterface_GetChildElements::bAllowCreate' has a wrong offset!");

struct TypedElementHierarchyInterface_GetParentElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	bool                                          bAllowCreate;
	uint8                                         Pad_9[0x7];
	struct FScriptTypedElementHandle              ReturnValue;
};
static_assert(alignof(TypedElementHierarchyInterface_GetParentElement) == 0x000008, "Wrong alignment on TypedElementHierarchyInterface_GetParentElement");
static_assert(sizeof(TypedElementHierarchyInterface_GetParentElement) == 0x000018, "Wrong size on TypedElementHierarchyInterface_GetParentElement");
static_assert(offsetof(TypedElementHierarchyInterface_GetParentElement, InElementHandle) == 0x000000, "Member 'TypedElementHierarchyInterface_GetParentElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementHierarchyInterface_GetParentElement, bAllowCreate) == 0x000008, "Member 'TypedElementHierarchyInterface_GetParentElement::bAllowCreate' has a wrong offset!");
static_assert(offsetof(TypedElementHierarchyInterface_GetParentElement, ReturnValue) == 0x000010, "Member 'TypedElementHierarchyInterface_GetParentElement::ReturnValue' has a wrong offset!");

struct TypedElementObjectInterface_GetObject final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	class UObject*                                ReturnValue;
};
static_assert(alignof(TypedElementObjectInterface_GetObject) == 0x000008, "Wrong alignment on TypedElementObjectInterface_GetObject");
static_assert(sizeof(TypedElementObjectInterface_GetObject) == 0x000010, "Wrong size on TypedElementObjectInterface_GetObject");
static_assert(offsetof(TypedElementObjectInterface_GetObject, InElementHandle) == 0x000000, "Member 'TypedElementObjectInterface_GetObject::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementObjectInterface_GetObject, ReturnValue) == 0x000008, "Member 'TypedElementObjectInterface_GetObject::ReturnValue' has a wrong offset!");

struct TypedElementObjectInterface_GetObjectClass final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	class UClass*                                 ReturnValue;
};
static_assert(alignof(TypedElementObjectInterface_GetObjectClass) == 0x000008, "Wrong alignment on TypedElementObjectInterface_GetObjectClass");
static_assert(sizeof(TypedElementObjectInterface_GetObjectClass) == 0x000010, "Wrong size on TypedElementObjectInterface_GetObjectClass");
static_assert(offsetof(TypedElementObjectInterface_GetObjectClass, InElementHandle) == 0x000000, "Member 'TypedElementObjectInterface_GetObjectClass::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementObjectInterface_GetObjectClass, ReturnValue) == 0x000008, "Member 'TypedElementObjectInterface_GetObjectClass::ReturnValue' has a wrong offset!");

struct TypedElementSelectionInterface_AllowSelectionModifiers final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FScriptTypedElementListProxy           InSelectionSet;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(TypedElementSelectionInterface_AllowSelectionModifiers) == 0x000008, "Wrong alignment on TypedElementSelectionInterface_AllowSelectionModifiers");
static_assert(sizeof(TypedElementSelectionInterface_AllowSelectionModifiers) == 0x000020, "Wrong size on TypedElementSelectionInterface_AllowSelectionModifiers");
static_assert(offsetof(TypedElementSelectionInterface_AllowSelectionModifiers, InElementHandle) == 0x000000, "Member 'TypedElementSelectionInterface_AllowSelectionModifiers::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_AllowSelectionModifiers, InSelectionSet) == 0x000008, "Member 'TypedElementSelectionInterface_AllowSelectionModifiers::InSelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_AllowSelectionModifiers, ReturnValue) == 0x000018, "Member 'TypedElementSelectionInterface_AllowSelectionModifiers::ReturnValue' has a wrong offset!");

struct TypedElementSelectionInterface_CanDeselectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(TypedElementSelectionInterface_CanDeselectElement) == 0x000008, "Wrong alignment on TypedElementSelectionInterface_CanDeselectElement");
static_assert(sizeof(TypedElementSelectionInterface_CanDeselectElement) == 0x000010, "Wrong size on TypedElementSelectionInterface_CanDeselectElement");
static_assert(offsetof(TypedElementSelectionInterface_CanDeselectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionInterface_CanDeselectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_CanDeselectElement, InSelectionOptions) == 0x000008, "Member 'TypedElementSelectionInterface_CanDeselectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_CanDeselectElement, ReturnValue) == 0x00000D, "Member 'TypedElementSelectionInterface_CanDeselectElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionInterface_CanSelectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(TypedElementSelectionInterface_CanSelectElement) == 0x000008, "Wrong alignment on TypedElementSelectionInterface_CanSelectElement");
static_assert(sizeof(TypedElementSelectionInterface_CanSelectElement) == 0x000010, "Wrong size on TypedElementSelectionInterface_CanSelectElement");
static_assert(offsetof(TypedElementSelectionInterface_CanSelectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionInterface_CanSelectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_CanSelectElement, InSelectionOptions) == 0x000008, "Member 'TypedElementSelectionInterface_CanSelectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_CanSelectElement, ReturnValue) == 0x00000D, "Member 'TypedElementSelectionInterface_CanSelectElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionInterface_DeselectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FScriptTypedElementListProxy           InSelectionSet;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(TypedElementSelectionInterface_DeselectElement) == 0x000008, "Wrong alignment on TypedElementSelectionInterface_DeselectElement");
static_assert(sizeof(TypedElementSelectionInterface_DeselectElement) == 0x000020, "Wrong size on TypedElementSelectionInterface_DeselectElement");
static_assert(offsetof(TypedElementSelectionInterface_DeselectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionInterface_DeselectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_DeselectElement, InSelectionSet) == 0x000008, "Member 'TypedElementSelectionInterface_DeselectElement::InSelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_DeselectElement, InSelectionOptions) == 0x000018, "Member 'TypedElementSelectionInterface_DeselectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_DeselectElement, ReturnValue) == 0x00001D, "Member 'TypedElementSelectionInterface_DeselectElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionInterface_GetSelectionElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FScriptTypedElementListProxy           InCurrentSelection;
	ETypedElementSelectionMethod                  InSelectionMethod;
	uint8                                         Pad_19[0x7];
	struct FScriptTypedElementHandle              ReturnValue;
};
static_assert(alignof(TypedElementSelectionInterface_GetSelectionElement) == 0x000008, "Wrong alignment on TypedElementSelectionInterface_GetSelectionElement");
static_assert(sizeof(TypedElementSelectionInterface_GetSelectionElement) == 0x000028, "Wrong size on TypedElementSelectionInterface_GetSelectionElement");
static_assert(offsetof(TypedElementSelectionInterface_GetSelectionElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionInterface_GetSelectionElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_GetSelectionElement, InCurrentSelection) == 0x000008, "Member 'TypedElementSelectionInterface_GetSelectionElement::InCurrentSelection' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_GetSelectionElement, InSelectionMethod) == 0x000018, "Member 'TypedElementSelectionInterface_GetSelectionElement::InSelectionMethod' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_GetSelectionElement, ReturnValue) == 0x000020, "Member 'TypedElementSelectionInterface_GetSelectionElement::ReturnValue' has a wrong offset!");

struct TypedElementSelectionInterface_IsElementSelected final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FScriptTypedElementListProxy           InSelectionSet;
	struct FTypedElementIsSelectedOptions         InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(TypedElementSelectionInterface_IsElementSelected) == 0x000008, "Wrong alignment on TypedElementSelectionInterface_IsElementSelected");
static_assert(sizeof(TypedElementSelectionInterface_IsElementSelected) == 0x000020, "Wrong size on TypedElementSelectionInterface_IsElementSelected");
static_assert(offsetof(TypedElementSelectionInterface_IsElementSelected, InElementHandle) == 0x000000, "Member 'TypedElementSelectionInterface_IsElementSelected::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_IsElementSelected, InSelectionSet) == 0x000008, "Member 'TypedElementSelectionInterface_IsElementSelected::InSelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_IsElementSelected, InSelectionOptions) == 0x000018, "Member 'TypedElementSelectionInterface_IsElementSelected::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_IsElementSelected, ReturnValue) == 0x000019, "Member 'TypedElementSelectionInterface_IsElementSelected::ReturnValue' has a wrong offset!");

struct TypedElementSelectionInterface_SelectElement final
{
public:
	struct FScriptTypedElementHandle              InElementHandle;
	struct FScriptTypedElementListProxy           InSelectionSet;
	struct FTypedElementSelectionOptions          InSelectionOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(TypedElementSelectionInterface_SelectElement) == 0x000008, "Wrong alignment on TypedElementSelectionInterface_SelectElement");
static_assert(sizeof(TypedElementSelectionInterface_SelectElement) == 0x000020, "Wrong size on TypedElementSelectionInterface_SelectElement");
static_assert(offsetof(TypedElementSelectionInterface_SelectElement, InElementHandle) == 0x000000, "Member 'TypedElementSelectionInterface_SelectElement::InElementHandle' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_SelectElement, InSelectionSet) == 0x000008, "Member 'TypedElementSelectionInterface_SelectElement::InSelectionSet' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_SelectElement, InSelectionOptions) == 0x000018, "Member 'TypedElementSelectionInterface_SelectElement::InSelectionOptions' has a wrong offset!");
static_assert(offsetof(TypedElementSelectionInterface_SelectElement, ReturnValue) == 0x00001D, "Member 'TypedElementSelectionInterface_SelectElement::ReturnValue' has a wrong offset!");

}
