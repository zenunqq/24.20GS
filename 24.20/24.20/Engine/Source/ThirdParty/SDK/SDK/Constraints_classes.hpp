#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Constraints_structs.hpp"
#include "AnimationCore_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK
{

class AConstraintsActor final : public AActor
{
public:
	class UConstraintsManager*                    ConstraintsManager;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstraintsActor">();
	}
	static class AConstraintsActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AConstraintsActor>();
	}
};
static_assert(alignof(AConstraintsActor) == 0x000008, "Wrong alignment on AConstraintsActor");
static_assert(sizeof(AConstraintsActor) == 0x000290, "Wrong size on AConstraintsActor");
static_assert(offsetof(AConstraintsActor, ConstraintsManager) == 0x000288, "Member 'AConstraintsActor::ConstraintsManager' has a wrong offset!");

class UTickableConstraint : public UObject
{
public:
	struct FConstraintTickFunction                ConstraintTick;
	bool                                          Active;
	uint8                                         Pad_69[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableConstraint">();
	}
	static class UTickableConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableConstraint>();
	}
};
static_assert(alignof(UTickableConstraint) == 0x000008, "Wrong alignment on UTickableConstraint");
static_assert(sizeof(UTickableConstraint) == 0x000070, "Wrong size on UTickableConstraint");
static_assert(offsetof(UTickableConstraint, ConstraintTick) == 0x000028, "Member 'UTickableConstraint::ConstraintTick' has a wrong offset!");
static_assert(offsetof(UTickableConstraint, Active) == 0x000068, "Member 'UTickableConstraint::Active' has a wrong offset!");

class UConstraintsManager final : public UObject
{
public:
	FMulticastSparseDelegateProperty_             OnConstraintAdded_BP;
	FMulticastSparseDelegateProperty_             OnConstraintRemoved_BP;
	uint8                                         Pad_2A[0xE];
	TArray<class UTickableConstraint*>            Constraints;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstraintsManager">();
	}
	static class UConstraintsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstraintsManager>();
	}
};
static_assert(alignof(UConstraintsManager) == 0x000008, "Wrong alignment on UConstraintsManager");
static_assert(sizeof(UConstraintsManager) == 0x000048, "Wrong size on UConstraintsManager");
static_assert(offsetof(UConstraintsManager, OnConstraintAdded_BP) == 0x000028, "Member 'UConstraintsManager::OnConstraintAdded_BP' has a wrong offset!");
static_assert(offsetof(UConstraintsManager, OnConstraintRemoved_BP) == 0x000029, "Member 'UConstraintsManager::OnConstraintRemoved_BP' has a wrong offset!");
static_assert(offsetof(UConstraintsManager, Constraints) == 0x000038, "Member 'UConstraintsManager::Constraints' has a wrong offset!");

class UConstraintsScriptingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, const bool bMaintainOffset);
	static class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, const ETransformConstraintType InType);
	static class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, const class FName& InSocketName);
	static class UConstraintsManager* GetManager(class UWorld* InWorld);
	static bool RemoveConstraint(class UWorld* InWorld, int32 InIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstraintsScriptingLibrary">();
	}
	static class UConstraintsScriptingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstraintsScriptingLibrary>();
	}
};
static_assert(alignof(UConstraintsScriptingLibrary) == 0x000008, "Wrong alignment on UConstraintsScriptingLibrary");
static_assert(sizeof(UConstraintsScriptingLibrary) == 0x000028, "Wrong size on UConstraintsScriptingLibrary");

class UTransformableHandle : public UObject
{
public:
	struct FMovieSceneObjectBindingID             ConstraintBindingID;
	uint8                                         Pad_40[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TransformableHandle">();
	}
	static class UTransformableHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTransformableHandle>();
	}
};
static_assert(alignof(UTransformableHandle) == 0x000008, "Wrong alignment on UTransformableHandle");
static_assert(sizeof(UTransformableHandle) == 0x000058, "Wrong size on UTransformableHandle");
static_assert(offsetof(UTransformableHandle, ConstraintBindingID) == 0x000028, "Member 'UTransformableHandle::ConstraintBindingID' has a wrong offset!");

class UTransformableComponentHandle final : public UTransformableHandle
{
public:
	TWeakObjectPtr<class USceneComponent>         Component;
	class FName                                   SocketName;
	uint8                                         Pad_64[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TransformableComponentHandle">();
	}
	static class UTransformableComponentHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTransformableComponentHandle>();
	}
};
static_assert(alignof(UTransformableComponentHandle) == 0x000008, "Wrong alignment on UTransformableComponentHandle");
static_assert(sizeof(UTransformableComponentHandle) == 0x000068, "Wrong size on UTransformableComponentHandle");
static_assert(offsetof(UTransformableComponentHandle, Component) == 0x000058, "Member 'UTransformableComponentHandle::Component' has a wrong offset!");
static_assert(offsetof(UTransformableComponentHandle, SocketName) == 0x000060, "Member 'UTransformableComponentHandle::SocketName' has a wrong offset!");

class UTickableTransformConstraint : public UTickableConstraint
{
public:
	class UTransformableHandle*                   ParentTRSHandle;
	class UTransformableHandle*                   ChildTRSHandle;
	bool                                          bMaintainOffset;
	uint8                                         Pad_81[0x3];
	float                                         Weight;
	bool                                          bDynamicOffset;
	ETransformConstraintType                      Type;
	uint8                                         Pad_8A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableTransformConstraint">();
	}
	static class UTickableTransformConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableTransformConstraint>();
	}
};
static_assert(alignof(UTickableTransformConstraint) == 0x000008, "Wrong alignment on UTickableTransformConstraint");
static_assert(sizeof(UTickableTransformConstraint) == 0x000090, "Wrong size on UTickableTransformConstraint");
static_assert(offsetof(UTickableTransformConstraint, ParentTRSHandle) == 0x000070, "Member 'UTickableTransformConstraint::ParentTRSHandle' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, ChildTRSHandle) == 0x000078, "Member 'UTickableTransformConstraint::ChildTRSHandle' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, bMaintainOffset) == 0x000080, "Member 'UTickableTransformConstraint::bMaintainOffset' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, Weight) == 0x000084, "Member 'UTickableTransformConstraint::Weight' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, bDynamicOffset) == 0x000088, "Member 'UTickableTransformConstraint::bDynamicOffset' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, Type) == 0x000089, "Member 'UTickableTransformConstraint::Type' has a wrong offset!");

class UTickableTranslationConstraint final : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_90[0x8];
	struct FVector                                OffsetTranslation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableTranslationConstraint">();
	}
	static class UTickableTranslationConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableTranslationConstraint>();
	}
};
static_assert(alignof(UTickableTranslationConstraint) == 0x000008, "Wrong alignment on UTickableTranslationConstraint");
static_assert(sizeof(UTickableTranslationConstraint) == 0x0000B0, "Wrong size on UTickableTranslationConstraint");
static_assert(offsetof(UTickableTranslationConstraint, OffsetTranslation) == 0x000098, "Member 'UTickableTranslationConstraint::OffsetTranslation' has a wrong offset!");

class UTickableRotationConstraint final : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_90[0x10];
	struct FQuat                                  OffsetRotation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableRotationConstraint">();
	}
	static class UTickableRotationConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableRotationConstraint>();
	}
};
static_assert(alignof(UTickableRotationConstraint) == 0x000010, "Wrong alignment on UTickableRotationConstraint");
static_assert(sizeof(UTickableRotationConstraint) == 0x0000C0, "Wrong size on UTickableRotationConstraint");
static_assert(offsetof(UTickableRotationConstraint, OffsetRotation) == 0x0000A0, "Member 'UTickableRotationConstraint::OffsetRotation' has a wrong offset!");

class UTickableScaleConstraint final : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_90[0x8];
	struct FVector                                OffsetScale;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableScaleConstraint">();
	}
	static class UTickableScaleConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableScaleConstraint>();
	}
};
static_assert(alignof(UTickableScaleConstraint) == 0x000008, "Wrong alignment on UTickableScaleConstraint");
static_assert(sizeof(UTickableScaleConstraint) == 0x0000B0, "Wrong size on UTickableScaleConstraint");
static_assert(offsetof(UTickableScaleConstraint, OffsetScale) == 0x000098, "Member 'UTickableScaleConstraint::OffsetScale' has a wrong offset!");

class UTickableParentConstraint final : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_90[0x10];
	struct FTransform                             OffsetTransform;
	bool                                          bScaling;
	uint8                                         Pad_101[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableParentConstraint">();
	}
	static class UTickableParentConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableParentConstraint>();
	}
};
static_assert(alignof(UTickableParentConstraint) == 0x000010, "Wrong alignment on UTickableParentConstraint");
static_assert(sizeof(UTickableParentConstraint) == 0x000110, "Wrong size on UTickableParentConstraint");
static_assert(offsetof(UTickableParentConstraint, OffsetTransform) == 0x0000A0, "Member 'UTickableParentConstraint::OffsetTransform' has a wrong offset!");
static_assert(offsetof(UTickableParentConstraint, bScaling) == 0x000100, "Member 'UTickableParentConstraint::bScaling' has a wrong offset!");

class UTickableLookAtConstraint final : public UTickableTransformConstraint
{
public:
	struct FVector                                Axis;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableLookAtConstraint">();
	}
	static class UTickableLookAtConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableLookAtConstraint>();
	}
};
static_assert(alignof(UTickableLookAtConstraint) == 0x000008, "Wrong alignment on UTickableLookAtConstraint");
static_assert(sizeof(UTickableLookAtConstraint) == 0x0000A8, "Wrong size on UTickableLookAtConstraint");
static_assert(offsetof(UTickableLookAtConstraint, Axis) == 0x000090, "Member 'UTickableLookAtConstraint::Axis' has a wrong offset!");

}
