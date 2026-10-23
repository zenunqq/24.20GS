#pragma once

#include "Basic.hpp"

#include "AnimationCore_structs.hpp"

namespace SDK::Params
{

struct ConstraintsScriptingLibrary_AddConstraint final
{
public:
	class UWorld*                                 InWorld;
	class UTransformableHandle*                   InParentHandle;
	class UTransformableHandle*                   InChildHandle;
	class UTickableTransformConstraint*           InConstraint;
	bool                                          bMaintainOffset;
	bool                                          ReturnValue;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(ConstraintsScriptingLibrary_AddConstraint) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_AddConstraint");
static_assert(sizeof(ConstraintsScriptingLibrary_AddConstraint) == 0x000028, "Wrong size on ConstraintsScriptingLibrary_AddConstraint");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_AddConstraint::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InParentHandle) == 0x000008, "Member 'ConstraintsScriptingLibrary_AddConstraint::InParentHandle' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InChildHandle) == 0x000010, "Member 'ConstraintsScriptingLibrary_AddConstraint::InChildHandle' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, InConstraint) == 0x000018, "Member 'ConstraintsScriptingLibrary_AddConstraint::InConstraint' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, bMaintainOffset) == 0x000020, "Member 'ConstraintsScriptingLibrary_AddConstraint::bMaintainOffset' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_AddConstraint, ReturnValue) == 0x000021, "Member 'ConstraintsScriptingLibrary_AddConstraint::ReturnValue' has a wrong offset!");

struct ConstraintsScriptingLibrary_CreateFromType final
{
public:
	class UWorld*                                 InWorld;
	ETransformConstraintType                      InType;
	uint8                                         Pad_9[0x7];
	class UTickableTransformConstraint*           ReturnValue;
};
static_assert(alignof(ConstraintsScriptingLibrary_CreateFromType) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_CreateFromType");
static_assert(sizeof(ConstraintsScriptingLibrary_CreateFromType) == 0x000018, "Wrong size on ConstraintsScriptingLibrary_CreateFromType");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateFromType, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_CreateFromType::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateFromType, InType) == 0x000008, "Member 'ConstraintsScriptingLibrary_CreateFromType::InType' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateFromType, ReturnValue) == 0x000010, "Member 'ConstraintsScriptingLibrary_CreateFromType::ReturnValue' has a wrong offset!");

struct ConstraintsScriptingLibrary_CreateTransformableComponentHandle final
{
public:
	class UWorld*                                 InWorld;
	class USceneComponent*                        InSceneComponent;
	class FName                                   InSocketName;
	uint8                                         Pad_14[0x4];
	class UTransformableComponentHandle*          ReturnValue;
};
static_assert(alignof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_CreateTransformableComponentHandle");
static_assert(sizeof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle) == 0x000020, "Wrong size on ConstraintsScriptingLibrary_CreateTransformableComponentHandle");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, InSceneComponent) == 0x000008, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::InSceneComponent' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, InSocketName) == 0x000010, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::InSocketName' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_CreateTransformableComponentHandle, ReturnValue) == 0x000018, "Member 'ConstraintsScriptingLibrary_CreateTransformableComponentHandle::ReturnValue' has a wrong offset!");

struct ConstraintsScriptingLibrary_GetManager final
{
public:
	class UWorld*                                 InWorld;
	class UConstraintsManager*                    ReturnValue;
};
static_assert(alignof(ConstraintsScriptingLibrary_GetManager) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_GetManager");
static_assert(sizeof(ConstraintsScriptingLibrary_GetManager) == 0x000010, "Wrong size on ConstraintsScriptingLibrary_GetManager");
static_assert(offsetof(ConstraintsScriptingLibrary_GetManager, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_GetManager::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_GetManager, ReturnValue) == 0x000008, "Member 'ConstraintsScriptingLibrary_GetManager::ReturnValue' has a wrong offset!");

struct ConstraintsScriptingLibrary_RemoveConstraint final
{
public:
	class UWorld*                                 InWorld;
	int32                                         InIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(ConstraintsScriptingLibrary_RemoveConstraint) == 0x000008, "Wrong alignment on ConstraintsScriptingLibrary_RemoveConstraint");
static_assert(sizeof(ConstraintsScriptingLibrary_RemoveConstraint) == 0x000010, "Wrong size on ConstraintsScriptingLibrary_RemoveConstraint");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveConstraint, InWorld) == 0x000000, "Member 'ConstraintsScriptingLibrary_RemoveConstraint::InWorld' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveConstraint, InIndex) == 0x000008, "Member 'ConstraintsScriptingLibrary_RemoveConstraint::InIndex' has a wrong offset!");
static_assert(offsetof(ConstraintsScriptingLibrary_RemoveConstraint, ReturnValue) == 0x00000C, "Member 'ConstraintsScriptingLibrary_RemoveConstraint::ReturnValue' has a wrong offset!");

}
