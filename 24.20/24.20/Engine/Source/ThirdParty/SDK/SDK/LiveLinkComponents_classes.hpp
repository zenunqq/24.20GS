#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "LiveLinkInterface_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "LiveLinkComponents_structs.hpp"

namespace SDK
{

class ULiveLinkComponentSettings final : public UObject
{
public:
	TMap<TSubclassOf<class ULiveLinkRole>, TSubclassOf<class ULiveLinkControllerBase>> DefaultControllerForRole;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkComponentSettings">();
	}
	static class ULiveLinkComponentSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkComponentSettings>();
	}
};
static_assert(alignof(ULiveLinkComponentSettings) == 0x000008, "Wrong alignment on ULiveLinkComponentSettings");
static_assert(sizeof(ULiveLinkComponentSettings) == 0x000078, "Wrong size on ULiveLinkComponentSettings");
static_assert(offsetof(ULiveLinkComponentSettings, DefaultControllerForRole) == 0x000028, "Member 'ULiveLinkComponentSettings::DefaultControllerForRole' has a wrong offset!");

class ULiveLinkControllerBase : public UObject
{
public:
	struct FComponentReference                    ComponentPicker;
	uint8                                         Pad_50[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkControllerBase">();
	}
	static class ULiveLinkControllerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkControllerBase>();
	}
};
static_assert(alignof(ULiveLinkControllerBase) == 0x000008, "Wrong alignment on ULiveLinkControllerBase");
static_assert(sizeof(ULiveLinkControllerBase) == 0x000068, "Wrong size on ULiveLinkControllerBase");
static_assert(offsetof(ULiveLinkControllerBase, ComponentPicker) == 0x000028, "Member 'ULiveLinkControllerBase::ComponentPicker' has a wrong offset!");

class ULiveLinkLightController final : public ULiveLinkControllerBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkLightController">();
	}
	static class ULiveLinkLightController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkLightController>();
	}
};
static_assert(alignof(ULiveLinkLightController) == 0x000008, "Wrong alignment on ULiveLinkLightController");
static_assert(sizeof(ULiveLinkLightController) == 0x000068, "Wrong size on ULiveLinkLightController");

class ULiveLinkTransformController final : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData       TransformData;
	uint8                                         Pad_6E[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTransformController">();
	}
	static class ULiveLinkTransformController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTransformController>();
	}
};
static_assert(alignof(ULiveLinkTransformController) == 0x000008, "Wrong alignment on ULiveLinkTransformController");
static_assert(sizeof(ULiveLinkTransformController) == 0x000070, "Wrong size on ULiveLinkTransformController");
static_assert(offsetof(ULiveLinkTransformController, TransformData) == 0x000068, "Member 'ULiveLinkTransformController::TransformData' has a wrong offset!");

class ULiveLinkComponentController final : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation         SubjectRepresentation;
	TMap<TSubclassOf<class ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap;
	bool                                          bUpdateInEditor;
	uint8                                         Pad_101[0x7];
	TMulticastInlineDelegate<void(float DeltaTime)> OnLiveLinkUpdated;
	TMulticastInlineDelegate<void()>              OnControllerMapUpdatedDelegate;
	bool                                          bDisableEvaluateLiveLinkWhenSpawnable;
	bool                                          bEvaluateLiveLink;
	bool                                          bUpdateInPreviewEditor;
	uint8                                         Pad_12B[0x1D];

public:
	void SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation);

	struct FLiveLinkSubjectRepresentation GetSubjectRepresentation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkComponentController">();
	}
	static class ULiveLinkComponentController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkComponentController>();
	}
};
static_assert(alignof(ULiveLinkComponentController) == 0x000008, "Wrong alignment on ULiveLinkComponentController");
static_assert(sizeof(ULiveLinkComponentController) == 0x000148, "Wrong size on ULiveLinkComponentController");
static_assert(offsetof(ULiveLinkComponentController, SubjectRepresentation) == 0x0000A0, "Member 'ULiveLinkComponentController::SubjectRepresentation' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, ControllerMap) == 0x0000B0, "Member 'ULiveLinkComponentController::ControllerMap' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, bUpdateInEditor) == 0x000100, "Member 'ULiveLinkComponentController::bUpdateInEditor' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, OnLiveLinkUpdated) == 0x000108, "Member 'ULiveLinkComponentController::OnLiveLinkUpdated' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, OnControllerMapUpdatedDelegate) == 0x000118, "Member 'ULiveLinkComponentController::OnControllerMapUpdatedDelegate' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, bDisableEvaluateLiveLinkWhenSpawnable) == 0x000128, "Member 'ULiveLinkComponentController::bDisableEvaluateLiveLinkWhenSpawnable' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, bEvaluateLiveLink) == 0x000129, "Member 'ULiveLinkComponentController::bEvaluateLiveLink' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, bUpdateInPreviewEditor) == 0x00012A, "Member 'ULiveLinkComponentController::bUpdateInPreviewEditor' has a wrong offset!");

}
