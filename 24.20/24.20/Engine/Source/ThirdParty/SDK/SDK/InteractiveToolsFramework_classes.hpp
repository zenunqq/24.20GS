#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "InteractiveToolsFramework_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IAssetBackedTarget : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssetBackedTarget">();
	}
	static class IAssetBackedTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAssetBackedTarget>();
	}
};
static_assert(alignof(IAssetBackedTarget) == 0x000008, "Wrong alignment on IAssetBackedTarget");
static_assert(sizeof(IAssetBackedTarget) == 0x000028, "Wrong size on IAssetBackedTarget");

#pragma pack(push, 0x1)
class alignas(0x10) UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                           Color;
	float                                         HoverSizeMultiplier;
	float                                         PixelHitDistanceThreshold;
	uint8                                         Pad_580[0x8];
	class UGizmoViewContext*                      GizmoViewContext;
	uint8                                         Pad_590[0x8];

public:
	void UpdateHoverState(bool bHoveringIn);
	void UpdateWorldLocalState(bool bWorldIn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoBaseComponent">();
	}
	static class UGizmoBaseComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoBaseComponent>();
	}
};
#pragma pack(pop)
static_assert(alignof(UGizmoBaseComponent) == 0x000010, "Wrong alignment on UGizmoBaseComponent");
static_assert(sizeof(UGizmoBaseComponent) == 0x0005A0, "Wrong size on UGizmoBaseComponent");
static_assert(offsetof(UGizmoBaseComponent, Color) == 0x000568, "Member 'UGizmoBaseComponent::Color' has a wrong offset!");
static_assert(offsetof(UGizmoBaseComponent, HoverSizeMultiplier) == 0x000578, "Member 'UGizmoBaseComponent::HoverSizeMultiplier' has a wrong offset!");
static_assert(offsetof(UGizmoBaseComponent, PixelHitDistanceThreshold) == 0x00057C, "Member 'UGizmoBaseComponent::PixelHitDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UGizmoBaseComponent, GizmoViewContext) == 0x000588, "Member 'UGizmoBaseComponent::GizmoViewContext' has a wrong offset!");

class UInteractiveCommandArguments final : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveCommandArguments">();
	}
	static class UInteractiveCommandArguments* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveCommandArguments>();
	}
};
static_assert(alignof(UInteractiveCommandArguments) == 0x000008, "Wrong alignment on UInteractiveCommandArguments");
static_assert(sizeof(UInteractiveCommandArguments) == 0x000030, "Wrong size on UInteractiveCommandArguments");

class UInteractiveCommandResult final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveCommandResult">();
	}
	static class UInteractiveCommandResult* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveCommandResult>();
	}
};
static_assert(alignof(UInteractiveCommandResult) == 0x000008, "Wrong alignment on UInteractiveCommandResult");
static_assert(sizeof(UInteractiveCommandResult) == 0x000028, "Wrong size on UInteractiveCommandResult");

class UInteractiveCommand final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveCommand">();
	}
	static class UInteractiveCommand* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveCommand>();
	}
};
static_assert(alignof(UInteractiveCommand) == 0x000008, "Wrong alignment on UInteractiveCommand");
static_assert(sizeof(UInteractiveCommand) == 0x000028, "Wrong size on UInteractiveCommand");

class UInteractiveGizmoBuilder : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveGizmoBuilder">();
	}
	static class UInteractiveGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveGizmoBuilder>();
	}
};
static_assert(alignof(UInteractiveGizmoBuilder) == 0x000008, "Wrong alignment on UInteractiveGizmoBuilder");
static_assert(sizeof(UInteractiveGizmoBuilder) == 0x000028, "Wrong size on UInteractiveGizmoBuilder");

class IToolContextTransactionProvider final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToolContextTransactionProvider">();
	}
	static class IToolContextTransactionProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IToolContextTransactionProvider>();
	}
};
static_assert(alignof(IToolContextTransactionProvider) == 0x000008, "Wrong alignment on IToolContextTransactionProvider");
static_assert(sizeof(IToolContextTransactionProvider) == 0x000028, "Wrong size on IToolContextTransactionProvider");

class AInternalToolFrameworkActor : public AActor
{
public:
	bool                                          bIsSelectableInEditor;
	uint8                                         Pad_289[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InternalToolFrameworkActor">();
	}
	static class AInternalToolFrameworkActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInternalToolFrameworkActor>();
	}
};
static_assert(alignof(AInternalToolFrameworkActor) == 0x000008, "Wrong alignment on AInternalToolFrameworkActor");
static_assert(sizeof(AInternalToolFrameworkActor) == 0x000290, "Wrong size on AInternalToolFrameworkActor");
static_assert(offsetof(AInternalToolFrameworkActor, bIsSelectableInEditor) == 0x000288, "Member 'AInternalToolFrameworkActor::bIsSelectableInEditor' has a wrong offset!");

class IToolFrameworkComponent final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToolFrameworkComponent">();
	}
	static class IToolFrameworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<IToolFrameworkComponent>();
	}
};
static_assert(alignof(IToolFrameworkComponent) == 0x000008, "Wrong alignment on IToolFrameworkComponent");
static_assert(sizeof(IToolFrameworkComponent) == 0x000028, "Wrong size on IToolFrameworkComponent");

class IInteractiveToolCameraFocusAPI final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolCameraFocusAPI">();
	}
	static class IInteractiveToolCameraFocusAPI* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInteractiveToolCameraFocusAPI>();
	}
};
static_assert(alignof(IInteractiveToolCameraFocusAPI) == 0x000008, "Wrong alignment on IInteractiveToolCameraFocusAPI");
static_assert(sizeof(IInteractiveToolCameraFocusAPI) == 0x000028, "Wrong size on IInteractiveToolCameraFocusAPI");

class IInteractiveToolNestedAcceptCancelAPI final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolNestedAcceptCancelAPI">();
	}
	static class IInteractiveToolNestedAcceptCancelAPI* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInteractiveToolNestedAcceptCancelAPI>();
	}
};
static_assert(alignof(IInteractiveToolNestedAcceptCancelAPI) == 0x000008, "Wrong alignment on IInteractiveToolNestedAcceptCancelAPI");
static_assert(sizeof(IInteractiveToolNestedAcceptCancelAPI) == 0x000028, "Wrong size on IInteractiveToolNestedAcceptCancelAPI");

class IInteractiveToolExclusiveToolAPI final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolExclusiveToolAPI">();
	}
	static class IInteractiveToolExclusiveToolAPI* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInteractiveToolExclusiveToolAPI>();
	}
};
static_assert(alignof(IInteractiveToolExclusiveToolAPI) == 0x000008, "Wrong alignment on IInteractiveToolExclusiveToolAPI");
static_assert(sizeof(IInteractiveToolExclusiveToolAPI) == 0x000028, "Wrong size on IInteractiveToolExclusiveToolAPI");

class IMaterialProvider final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialProvider">();
	}
	static class IMaterialProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMaterialProvider>();
	}
};
static_assert(alignof(IMaterialProvider) == 0x000008, "Wrong alignment on IMaterialProvider");
static_assert(sizeof(IMaterialProvider) == 0x000028, "Wrong size on IMaterialProvider");

class IMeshDescriptionCommitter final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshDescriptionCommitter">();
	}
	static class IMeshDescriptionCommitter* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshDescriptionCommitter>();
	}
};
static_assert(alignof(IMeshDescriptionCommitter) == 0x000008, "Wrong alignment on IMeshDescriptionCommitter");
static_assert(sizeof(IMeshDescriptionCommitter) == 0x000028, "Wrong size on IMeshDescriptionCommitter");

class IMeshDescriptionProvider final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshDescriptionProvider">();
	}
	static class IMeshDescriptionProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshDescriptionProvider>();
	}
};
static_assert(alignof(IMeshDescriptionProvider) == 0x000008, "Wrong alignment on IMeshDescriptionProvider");
static_assert(sizeof(IMeshDescriptionProvider) == 0x000028, "Wrong size on IMeshDescriptionProvider");

class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	uint8                                         Pad_28[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoBaseVec2ParameterSource">();
	}
	static class UGizmoBaseVec2ParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoBaseVec2ParameterSource>();
	}
};
static_assert(alignof(UGizmoBaseVec2ParameterSource) == 0x000008, "Wrong alignment on UGizmoBaseVec2ParameterSource");
static_assert(sizeof(UGizmoBaseVec2ParameterSource) == 0x000048, "Wrong size on UGizmoBaseVec2ParameterSource");

class UGizmoLocalVec2ParameterSource final : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                              Value;
	struct FGizmoVec2ParameterChange              LastChange;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoLocalVec2ParameterSource">();
	}
	static class UGizmoLocalVec2ParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoLocalVec2ParameterSource>();
	}
};
static_assert(alignof(UGizmoLocalVec2ParameterSource) == 0x000008, "Wrong alignment on UGizmoLocalVec2ParameterSource");
static_assert(sizeof(UGizmoLocalVec2ParameterSource) == 0x000078, "Wrong size on UGizmoLocalVec2ParameterSource");
static_assert(offsetof(UGizmoLocalVec2ParameterSource, Value) == 0x000048, "Member 'UGizmoLocalVec2ParameterSource::Value' has a wrong offset!");
static_assert(offsetof(UGizmoLocalVec2ParameterSource, LastChange) == 0x000058, "Member 'UGizmoLocalVec2ParameterSource::LastChange' has a wrong offset!");

class UGizmoBaseFloatParameterSource : public UObject
{
public:
	uint8                                         Pad_28[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoBaseFloatParameterSource">();
	}
	static class UGizmoBaseFloatParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoBaseFloatParameterSource>();
	}
};
static_assert(alignof(UGizmoBaseFloatParameterSource) == 0x000008, "Wrong alignment on UGizmoBaseFloatParameterSource");
static_assert(sizeof(UGizmoBaseFloatParameterSource) == 0x000048, "Wrong size on UGizmoBaseFloatParameterSource");

class UGizmoAxisTranslationParameterSource final : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                         Pad_48[0x88];
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoTransformSource> TransformSource;
	float                                         Parameter;
	struct FGizmoFloatParameterChange             LastChange;
	uint8                                         Pad_FC[0x4];
	struct FVector                                CurTranslationAxis;
	struct FVector                                CurTranslationOrigin;
	struct FTransform                             InitialTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoAxisTranslationParameterSource">();
	}
	static class UGizmoAxisTranslationParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoAxisTranslationParameterSource>();
	}
};
static_assert(alignof(UGizmoAxisTranslationParameterSource) == 0x000010, "Wrong alignment on UGizmoAxisTranslationParameterSource");
static_assert(sizeof(UGizmoAxisTranslationParameterSource) == 0x000190, "Wrong size on UGizmoAxisTranslationParameterSource");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, AxisSource) == 0x0000D0, "Member 'UGizmoAxisTranslationParameterSource::AxisSource' has a wrong offset!");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, TransformSource) == 0x0000E0, "Member 'UGizmoAxisTranslationParameterSource::TransformSource' has a wrong offset!");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, Parameter) == 0x0000F0, "Member 'UGizmoAxisTranslationParameterSource::Parameter' has a wrong offset!");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, LastChange) == 0x0000F4, "Member 'UGizmoAxisTranslationParameterSource::LastChange' has a wrong offset!");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationAxis) == 0x000100, "Member 'UGizmoAxisTranslationParameterSource::CurTranslationAxis' has a wrong offset!");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationOrigin) == 0x000118, "Member 'UGizmoAxisTranslationParameterSource::CurTranslationOrigin' has a wrong offset!");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, InitialTransform) == 0x000130, "Member 'UGizmoAxisTranslationParameterSource::InitialTransform' has a wrong offset!");

class UGizmoPlaneTranslationParameterSource final : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                         Pad_48[0xC8];
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoTransformSource> TransformSource;
	struct FVector2D                              Parameter;
	struct FGizmoVec2ParameterChange              LastChange;
	struct FVector                                CurTranslationOrigin;
	struct FVector                                CurTranslationNormal;
	struct FVector                                CurTranslationAxisX;
	struct FVector                                CurTranslationAxisY;
	struct FTransform                             InitialTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoPlaneTranslationParameterSource">();
	}
	static class UGizmoPlaneTranslationParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoPlaneTranslationParameterSource>();
	}
};
static_assert(alignof(UGizmoPlaneTranslationParameterSource) == 0x000010, "Wrong alignment on UGizmoPlaneTranslationParameterSource");
static_assert(sizeof(UGizmoPlaneTranslationParameterSource) == 0x000220, "Wrong size on UGizmoPlaneTranslationParameterSource");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, AxisSource) == 0x000110, "Member 'UGizmoPlaneTranslationParameterSource::AxisSource' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, TransformSource) == 0x000120, "Member 'UGizmoPlaneTranslationParameterSource::TransformSource' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, Parameter) == 0x000130, "Member 'UGizmoPlaneTranslationParameterSource::Parameter' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, LastChange) == 0x000140, "Member 'UGizmoPlaneTranslationParameterSource::LastChange' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationOrigin) == 0x000160, "Member 'UGizmoPlaneTranslationParameterSource::CurTranslationOrigin' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationNormal) == 0x000178, "Member 'UGizmoPlaneTranslationParameterSource::CurTranslationNormal' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisX) == 0x000190, "Member 'UGizmoPlaneTranslationParameterSource::CurTranslationAxisX' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisY) == 0x0001A8, "Member 'UGizmoPlaneTranslationParameterSource::CurTranslationAxisY' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, InitialTransform) == 0x0001C0, "Member 'UGizmoPlaneTranslationParameterSource::InitialTransform' has a wrong offset!");

class UToolTargetFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToolTargetFactory">();
	}
	static class UToolTargetFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToolTargetFactory>();
	}
};
static_assert(alignof(UToolTargetFactory) == 0x000008, "Wrong alignment on UToolTargetFactory");
static_assert(sizeof(UToolTargetFactory) == 0x000028, "Wrong size on UToolTargetFactory");

class UPrimitiveComponentToolTargetFactory final : public UToolTargetFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrimitiveComponentToolTargetFactory">();
	}
	static class UPrimitiveComponentToolTargetFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimitiveComponentToolTargetFactory>();
	}
};
static_assert(alignof(UPrimitiveComponentToolTargetFactory) == 0x000008, "Wrong alignment on UPrimitiveComponentToolTargetFactory");
static_assert(sizeof(UPrimitiveComponentToolTargetFactory) == 0x000028, "Wrong size on UPrimitiveComponentToolTargetFactory");

class UGizmoAxisRotationParameterSource final : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                         Pad_48[0x88];
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoTransformSource> TransformSource;
	float                                         Angle;
	struct FGizmoFloatParameterChange             LastChange;
	uint8                                         Pad_FC[0x4];
	struct FVector                                CurRotationAxis;
	struct FVector                                CurRotationOrigin;
	struct FTransform                             InitialTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoAxisRotationParameterSource">();
	}
	static class UGizmoAxisRotationParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoAxisRotationParameterSource>();
	}
};
static_assert(alignof(UGizmoAxisRotationParameterSource) == 0x000010, "Wrong alignment on UGizmoAxisRotationParameterSource");
static_assert(sizeof(UGizmoAxisRotationParameterSource) == 0x000190, "Wrong size on UGizmoAxisRotationParameterSource");
static_assert(offsetof(UGizmoAxisRotationParameterSource, AxisSource) == 0x0000D0, "Member 'UGizmoAxisRotationParameterSource::AxisSource' has a wrong offset!");
static_assert(offsetof(UGizmoAxisRotationParameterSource, TransformSource) == 0x0000E0, "Member 'UGizmoAxisRotationParameterSource::TransformSource' has a wrong offset!");
static_assert(offsetof(UGizmoAxisRotationParameterSource, Angle) == 0x0000F0, "Member 'UGizmoAxisRotationParameterSource::Angle' has a wrong offset!");
static_assert(offsetof(UGizmoAxisRotationParameterSource, LastChange) == 0x0000F4, "Member 'UGizmoAxisRotationParameterSource::LastChange' has a wrong offset!");
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationAxis) == 0x000100, "Member 'UGizmoAxisRotationParameterSource::CurRotationAxis' has a wrong offset!");
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationOrigin) == 0x000118, "Member 'UGizmoAxisRotationParameterSource::CurRotationOrigin' has a wrong offset!");
static_assert(offsetof(UGizmoAxisRotationParameterSource, InitialTransform) == 0x000130, "Member 'UGizmoAxisRotationParameterSource::InitialTransform' has a wrong offset!");

class UGizmoUniformScaleParameterSource final : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoTransformSource> TransformSource;
	float                                         ScaleMultiplier;
	uint8                                         Pad_6C[0x4];
	struct FVector2D                              Parameter;
	struct FGizmoVec2ParameterChange              LastChange;
	struct FVector                                CurScaleOrigin;
	struct FVector                                CurScaleNormal;
	struct FVector                                CurScaleAxisX;
	struct FVector                                CurScaleAxisY;
	struct FTransform                             InitialTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoUniformScaleParameterSource">();
	}
	static class UGizmoUniformScaleParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoUniformScaleParameterSource>();
	}
};
static_assert(alignof(UGizmoUniformScaleParameterSource) == 0x000010, "Wrong alignment on UGizmoUniformScaleParameterSource");
static_assert(sizeof(UGizmoUniformScaleParameterSource) == 0x000160, "Wrong size on UGizmoUniformScaleParameterSource");
static_assert(offsetof(UGizmoUniformScaleParameterSource, AxisSource) == 0x000048, "Member 'UGizmoUniformScaleParameterSource::AxisSource' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, TransformSource) == 0x000058, "Member 'UGizmoUniformScaleParameterSource::TransformSource' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, ScaleMultiplier) == 0x000068, "Member 'UGizmoUniformScaleParameterSource::ScaleMultiplier' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, Parameter) == 0x000070, "Member 'UGizmoUniformScaleParameterSource::Parameter' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, LastChange) == 0x000080, "Member 'UGizmoUniformScaleParameterSource::LastChange' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleOrigin) == 0x0000A0, "Member 'UGizmoUniformScaleParameterSource::CurScaleOrigin' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleNormal) == 0x0000B8, "Member 'UGizmoUniformScaleParameterSource::CurScaleNormal' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisX) == 0x0000D0, "Member 'UGizmoUniformScaleParameterSource::CurScaleAxisX' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisY) == 0x0000E8, "Member 'UGizmoUniformScaleParameterSource::CurScaleAxisY' has a wrong offset!");
static_assert(offsetof(UGizmoUniformScaleParameterSource, InitialTransform) == 0x000100, "Member 'UGizmoUniformScaleParameterSource::InitialTransform' has a wrong offset!");

class UGizmoAxisScaleParameterSource final : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoTransformSource> TransformSource;
	float                                         ScaleMultiplier;
	bool                                          bClampToZero;
	uint8                                         Pad_6D[0x3];
	float                                         Parameter;
	struct FGizmoFloatParameterChange             LastChange;
	uint8                                         Pad_7C[0x4];
	struct FVector                                CurScaleAxis;
	struct FVector                                CurScaleOrigin;
	struct FTransform                             InitialTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoAxisScaleParameterSource">();
	}
	static class UGizmoAxisScaleParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoAxisScaleParameterSource>();
	}
};
static_assert(alignof(UGizmoAxisScaleParameterSource) == 0x000010, "Wrong alignment on UGizmoAxisScaleParameterSource");
static_assert(sizeof(UGizmoAxisScaleParameterSource) == 0x000110, "Wrong size on UGizmoAxisScaleParameterSource");
static_assert(offsetof(UGizmoAxisScaleParameterSource, AxisSource) == 0x000048, "Member 'UGizmoAxisScaleParameterSource::AxisSource' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, TransformSource) == 0x000058, "Member 'UGizmoAxisScaleParameterSource::TransformSource' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, ScaleMultiplier) == 0x000068, "Member 'UGizmoAxisScaleParameterSource::ScaleMultiplier' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, bClampToZero) == 0x00006C, "Member 'UGizmoAxisScaleParameterSource::bClampToZero' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, Parameter) == 0x000070, "Member 'UGizmoAxisScaleParameterSource::Parameter' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, LastChange) == 0x000074, "Member 'UGizmoAxisScaleParameterSource::LastChange' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleAxis) == 0x000080, "Member 'UGizmoAxisScaleParameterSource::CurScaleAxis' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleOrigin) == 0x000098, "Member 'UGizmoAxisScaleParameterSource::CurScaleOrigin' has a wrong offset!");
static_assert(offsetof(UGizmoAxisScaleParameterSource, InitialTransform) == 0x0000B0, "Member 'UGizmoAxisScaleParameterSource::InitialTransform' has a wrong offset!");

class UGizmoPlaneScaleParameterSource final : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                         Pad_48[0x48];
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoTransformSource> TransformSource;
	float                                         ScaleMultiplier;
	bool                                          bUseEqualScaling;
	bool                                          bClampToZero;
	uint8                                         Pad_B6[0x2];
	struct FVector2D                              Parameter;
	struct FGizmoVec2ParameterChange              LastChange;
	struct FVector                                CurScaleOrigin;
	struct FVector                                CurScaleNormal;
	struct FVector                                CurScaleAxisX;
	struct FVector                                CurScaleAxisY;
	uint8                                         Pad_148[0x8];
	struct FTransform                             InitialTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoPlaneScaleParameterSource">();
	}
	static class UGizmoPlaneScaleParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoPlaneScaleParameterSource>();
	}
};
static_assert(alignof(UGizmoPlaneScaleParameterSource) == 0x000010, "Wrong alignment on UGizmoPlaneScaleParameterSource");
static_assert(sizeof(UGizmoPlaneScaleParameterSource) == 0x0001B0, "Wrong size on UGizmoPlaneScaleParameterSource");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, AxisSource) == 0x000090, "Member 'UGizmoPlaneScaleParameterSource::AxisSource' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, TransformSource) == 0x0000A0, "Member 'UGizmoPlaneScaleParameterSource::TransformSource' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, ScaleMultiplier) == 0x0000B0, "Member 'UGizmoPlaneScaleParameterSource::ScaleMultiplier' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, bUseEqualScaling) == 0x0000B4, "Member 'UGizmoPlaneScaleParameterSource::bUseEqualScaling' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, bClampToZero) == 0x0000B5, "Member 'UGizmoPlaneScaleParameterSource::bClampToZero' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, Parameter) == 0x0000B8, "Member 'UGizmoPlaneScaleParameterSource::Parameter' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, LastChange) == 0x0000C8, "Member 'UGizmoPlaneScaleParameterSource::LastChange' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleOrigin) == 0x0000E8, "Member 'UGizmoPlaneScaleParameterSource::CurScaleOrigin' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleNormal) == 0x000100, "Member 'UGizmoPlaneScaleParameterSource::CurScaleNormal' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisX) == 0x000118, "Member 'UGizmoPlaneScaleParameterSource::CurScaleAxisX' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisY) == 0x000130, "Member 'UGizmoPlaneScaleParameterSource::CurScaleAxisY' has a wrong offset!");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, InitialTransform) == 0x000150, "Member 'UGizmoPlaneScaleParameterSource::InitialTransform' has a wrong offset!");

class IPhysicsDataSource final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicsDataSource">();
	}
	static class IPhysicsDataSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPhysicsDataSource>();
	}
};
static_assert(alignof(IPhysicsDataSource) == 0x000008, "Wrong alignment on IPhysicsDataSource");
static_assert(sizeof(IPhysicsDataSource) == 0x000028, "Wrong size on IPhysicsDataSource");

class IPrimitiveComponentBackedTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrimitiveComponentBackedTarget">();
	}
	static class IPrimitiveComponentBackedTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPrimitiveComponentBackedTarget>();
	}
};
static_assert(alignof(IPrimitiveComponentBackedTarget) == 0x000008, "Wrong alignment on IPrimitiveComponentBackedTarget");
static_assert(sizeof(IPrimitiveComponentBackedTarget) == 0x000028, "Wrong size on IPrimitiveComponentBackedTarget");

class UToolTarget : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToolTarget">();
	}
	static class UToolTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToolTarget>();
	}
};
static_assert(alignof(UToolTarget) == 0x000008, "Wrong alignment on UToolTarget");
static_assert(sizeof(UToolTarget) == 0x000028, "Wrong size on UToolTarget");

class UPrimitiveComponentToolTarget final : public UToolTarget
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrimitiveComponentToolTarget">();
	}
	static class UPrimitiveComponentToolTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimitiveComponentToolTarget>();
	}
};
static_assert(alignof(UPrimitiveComponentToolTarget) == 0x000008, "Wrong alignment on UPrimitiveComponentToolTarget");
static_assert(sizeof(UPrimitiveComponentToolTarget) == 0x000038, "Wrong size on UPrimitiveComponentToolTarget");

class ISkeletalMeshBackedTarget final : public IAssetBackedTarget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalMeshBackedTarget">();
	}
	static class ISkeletalMeshBackedTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISkeletalMeshBackedTarget>();
	}
};
static_assert(alignof(ISkeletalMeshBackedTarget) == 0x000008, "Wrong alignment on ISkeletalMeshBackedTarget");
static_assert(sizeof(ISkeletalMeshBackedTarget) == 0x000028, "Wrong size on ISkeletalMeshBackedTarget");

class IStaticMeshBackedTarget final : public IAssetBackedTarget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StaticMeshBackedTarget">();
	}
	static class IStaticMeshBackedTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IStaticMeshBackedTarget>();
	}
};
static_assert(alignof(IStaticMeshBackedTarget) == 0x000008, "Wrong alignment on IStaticMeshBackedTarget");
static_assert(sizeof(IStaticMeshBackedTarget) == 0x000028, "Wrong size on IStaticMeshBackedTarget");

class UInputBehavior : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputBehavior">();
	}
	static class UInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputBehavior>();
	}
};
static_assert(alignof(UInputBehavior) == 0x000008, "Wrong alignment on UInputBehavior");
static_assert(sizeof(UInputBehavior) == 0x000030, "Wrong size on UInputBehavior");

class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	uint8                                         Pad_30[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnyButtonInputBehavior">();
	}
	static class UAnyButtonInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyButtonInputBehavior>();
	}
};
static_assert(alignof(UAnyButtonInputBehavior) == 0x000008, "Wrong alignment on UAnyButtonInputBehavior");
static_assert(sizeof(UAnyButtonInputBehavior) == 0x000080, "Wrong size on UAnyButtonInputBehavior");

class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                         Pad_80[0xA0];
	bool                                          bUpdateModifiersDuringDrag;
	uint8                                         Pad_121[0x1F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClickDragInputBehavior">();
	}
	static class UClickDragInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClickDragInputBehavior>();
	}
};
static_assert(alignof(UClickDragInputBehavior) == 0x000008, "Wrong alignment on UClickDragInputBehavior");
static_assert(sizeof(UClickDragInputBehavior) == 0x000140, "Wrong size on UClickDragInputBehavior");
static_assert(offsetof(UClickDragInputBehavior, bUpdateModifiersDuringDrag) == 0x000120, "Member 'UClickDragInputBehavior::bUpdateModifiersDuringDrag' has a wrong offset!");

class ULocalClickDragInputBehavior final : public UClickDragInputBehavior
{
public:
	uint8                                         Pad_140[0x140];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocalClickDragInputBehavior">();
	}
	static class ULocalClickDragInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalClickDragInputBehavior>();
	}
};
static_assert(alignof(ULocalClickDragInputBehavior) == 0x000008, "Wrong alignment on ULocalClickDragInputBehavior");
static_assert(sizeof(ULocalClickDragInputBehavior) == 0x000280, "Wrong size on ULocalClickDragInputBehavior");

class UKeyAsModifierInputBehavior final : public UInputBehavior
{
public:
	uint8                                         Pad_30[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyAsModifierInputBehavior">();
	}
	static class UKeyAsModifierInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyAsModifierInputBehavior>();
	}
};
static_assert(alignof(UKeyAsModifierInputBehavior) == 0x000008, "Wrong alignment on UKeyAsModifierInputBehavior");
static_assert(sizeof(UKeyAsModifierInputBehavior) == 0x000098, "Wrong size on UKeyAsModifierInputBehavior");

class UMouseHoverBehavior : public UInputBehavior
{
public:
	uint8                                         Pad_30[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MouseHoverBehavior">();
	}
	static class UMouseHoverBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMouseHoverBehavior>();
	}
};
static_assert(alignof(UMouseHoverBehavior) == 0x000008, "Wrong alignment on UMouseHoverBehavior");
static_assert(sizeof(UMouseHoverBehavior) == 0x000098, "Wrong size on UMouseHoverBehavior");

class ULocalMouseHoverBehavior final : public UMouseHoverBehavior
{
public:
	uint8                                         Pad_98[0x108];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocalMouseHoverBehavior">();
	}
	static class ULocalMouseHoverBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalMouseHoverBehavior>();
	}
};
static_assert(alignof(ULocalMouseHoverBehavior) == 0x000008, "Wrong alignment on ULocalMouseHoverBehavior");
static_assert(sizeof(ULocalMouseHoverBehavior) == 0x0001A0, "Wrong size on ULocalMouseHoverBehavior");

class UMouseWheelInputBehavior final : public UAnyButtonInputBehavior
{
public:
	uint8                                         Pad_80[0xB0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MouseWheelInputBehavior">();
	}
	static class UMouseWheelInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMouseWheelInputBehavior>();
	}
};
static_assert(alignof(UMouseWheelInputBehavior) == 0x000008, "Wrong alignment on UMouseWheelInputBehavior");
static_assert(sizeof(UMouseWheelInputBehavior) == 0x000130, "Wrong size on UMouseWheelInputBehavior");

class UMultiClickSequenceInputBehavior final : public UAnyButtonInputBehavior
{
public:
	uint8                                         Pad_80[0xB0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MultiClickSequenceInputBehavior">();
	}
	static class UMultiClickSequenceInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiClickSequenceInputBehavior>();
	}
};
static_assert(alignof(UMultiClickSequenceInputBehavior) == 0x000008, "Wrong alignment on UMultiClickSequenceInputBehavior");
static_assert(sizeof(UMultiClickSequenceInputBehavior) == 0x000130, "Wrong size on UMultiClickSequenceInputBehavior");

class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                         Pad_80[0x40];
	bool                                          HitTestOnRelease;
	uint8                                         Pad_C1[0x6F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleClickInputBehavior">();
	}
	static class USingleClickInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleClickInputBehavior>();
	}
};
static_assert(alignof(USingleClickInputBehavior) == 0x000008, "Wrong alignment on USingleClickInputBehavior");
static_assert(sizeof(USingleClickInputBehavior) == 0x000130, "Wrong size on USingleClickInputBehavior");
static_assert(offsetof(USingleClickInputBehavior, HitTestOnRelease) == 0x0000C0, "Member 'USingleClickInputBehavior::HitTestOnRelease' has a wrong offset!");

class ULocalSingleClickInputBehavior final : public USingleClickInputBehavior
{
public:
	uint8                                         Pad_130[0xD0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocalSingleClickInputBehavior">();
	}
	static class ULocalSingleClickInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalSingleClickInputBehavior>();
	}
};
static_assert(alignof(ULocalSingleClickInputBehavior) == 0x000008, "Wrong alignment on ULocalSingleClickInputBehavior");
static_assert(sizeof(ULocalSingleClickInputBehavior) == 0x000200, "Wrong size on ULocalSingleClickInputBehavior");

class USingleClickOrDragInputBehavior final : public UAnyButtonInputBehavior
{
public:
	uint8                                         Pad_80[0xA0];
	bool                                          bBeginDragIfClickTargetNotHit;
	uint8                                         Pad_121[0x3];
	float                                         ClickDistanceThreshold;
	uint8                                         Pad_128[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleClickOrDragInputBehavior">();
	}
	static class USingleClickOrDragInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleClickOrDragInputBehavior>();
	}
};
static_assert(alignof(USingleClickOrDragInputBehavior) == 0x000008, "Wrong alignment on USingleClickOrDragInputBehavior");
static_assert(sizeof(USingleClickOrDragInputBehavior) == 0x000180, "Wrong size on USingleClickOrDragInputBehavior");
static_assert(offsetof(USingleClickOrDragInputBehavior, bBeginDragIfClickTargetNotHit) == 0x000120, "Member 'USingleClickOrDragInputBehavior::bBeginDragIfClickTargetNotHit' has a wrong offset!");
static_assert(offsetof(USingleClickOrDragInputBehavior, ClickDistanceThreshold) == 0x000124, "Member 'USingleClickOrDragInputBehavior::ClickDistanceThreshold' has a wrong offset!");

class USingleKeyCaptureBehavior final : public UInputBehavior
{
public:
	uint8                                         Pad_30[0xE0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleKeyCaptureBehavior">();
	}
	static class USingleKeyCaptureBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleKeyCaptureBehavior>();
	}
};
static_assert(alignof(USingleKeyCaptureBehavior) == 0x000008, "Wrong alignment on USingleKeyCaptureBehavior");
static_assert(sizeof(USingleKeyCaptureBehavior) == 0x000110, "Wrong size on USingleKeyCaptureBehavior");

class IWidgetBaseBehavior final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WidgetBaseBehavior">();
	}
	static class IWidgetBaseBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<IWidgetBaseBehavior>();
	}
};
static_assert(alignof(IWidgetBaseBehavior) == 0x000008, "Wrong alignment on IWidgetBaseBehavior");
static_assert(sizeof(IWidgetBaseBehavior) == 0x000028, "Wrong size on IWidgetBaseBehavior");

class UAxisAngleGizmoBuilder final : public UInteractiveGizmoBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AxisAngleGizmoBuilder">();
	}
	static class UAxisAngleGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAxisAngleGizmoBuilder>();
	}
};
static_assert(alignof(UAxisAngleGizmoBuilder) == 0x000008, "Wrong alignment on UAxisAngleGizmoBuilder");
static_assert(sizeof(UAxisAngleGizmoBuilder) == 0x000028, "Wrong size on UAxisAngleGizmoBuilder");

class UInteractiveGizmo : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UInputBehaviorSet*                      InputBehaviors;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveGizmo">();
	}
	static class UInteractiveGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveGizmo>();
	}
};
static_assert(alignof(UInteractiveGizmo) == 0x000008, "Wrong alignment on UInteractiveGizmo");
static_assert(sizeof(UInteractiveGizmo) == 0x000038, "Wrong size on UInteractiveGizmo");
static_assert(offsetof(UInteractiveGizmo, InputBehaviors) == 0x000030, "Member 'UInteractiveGizmo::InputBehaviors' has a wrong offset!");

class alignas(0x10) UAxisAngleGizmo final : public UInteractiveGizmo
{
public:
	uint8                                         Pad_38[0x10];
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoFloatParameterSource> AngleSource;
	TScriptInterface<class IGizmoClickTarget>     HitTarget;
	TScriptInterface<class IGizmoStateTarget>     StateTarget;
	class UClickDragInputBehavior*                MouseBehavior;
	uint8                                         Pad_90[0x80];
	bool                                          bInInteraction;
	uint8                                         Pad_111[0x7];
	struct FVector                                RotationOrigin;
	struct FVector                                RotationAxis;
	struct FVector                                RotationPlaneX;
	struct FVector                                RotationPlaneY;
	struct FVector                                InteractionStartPoint;
	struct FVector                                InteractionCurPoint;
	float                                         InteractionStartAngle;
	float                                         InteractionCurAngle;
	uint8                                         Pad_1B0[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AxisAngleGizmo">();
	}
	static class UAxisAngleGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAxisAngleGizmo>();
	}
};
static_assert(alignof(UAxisAngleGizmo) == 0x000010, "Wrong alignment on UAxisAngleGizmo");
static_assert(sizeof(UAxisAngleGizmo) == 0x0001D0, "Wrong size on UAxisAngleGizmo");
static_assert(offsetof(UAxisAngleGizmo, AxisSource) == 0x000048, "Member 'UAxisAngleGizmo::AxisSource' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, AngleSource) == 0x000058, "Member 'UAxisAngleGizmo::AngleSource' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, HitTarget) == 0x000068, "Member 'UAxisAngleGizmo::HitTarget' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, StateTarget) == 0x000078, "Member 'UAxisAngleGizmo::StateTarget' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, MouseBehavior) == 0x000088, "Member 'UAxisAngleGizmo::MouseBehavior' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, bInInteraction) == 0x000110, "Member 'UAxisAngleGizmo::bInInteraction' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, RotationOrigin) == 0x000118, "Member 'UAxisAngleGizmo::RotationOrigin' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, RotationAxis) == 0x000130, "Member 'UAxisAngleGizmo::RotationAxis' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneX) == 0x000148, "Member 'UAxisAngleGizmo::RotationPlaneX' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneY) == 0x000160, "Member 'UAxisAngleGizmo::RotationPlaneY' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, InteractionStartPoint) == 0x000178, "Member 'UAxisAngleGizmo::InteractionStartPoint' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, InteractionCurPoint) == 0x000190, "Member 'UAxisAngleGizmo::InteractionCurPoint' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, InteractionStartAngle) == 0x0001A8, "Member 'UAxisAngleGizmo::InteractionStartAngle' has a wrong offset!");
static_assert(offsetof(UAxisAngleGizmo, InteractionCurAngle) == 0x0001AC, "Member 'UAxisAngleGizmo::InteractionCurAngle' has a wrong offset!");

class UAxisPositionGizmoBuilder final : public UInteractiveGizmoBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AxisPositionGizmoBuilder">();
	}
	static class UAxisPositionGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAxisPositionGizmoBuilder>();
	}
};
static_assert(alignof(UAxisPositionGizmoBuilder) == 0x000008, "Wrong alignment on UAxisPositionGizmoBuilder");
static_assert(sizeof(UAxisPositionGizmoBuilder) == 0x000028, "Wrong size on UAxisPositionGizmoBuilder");

class alignas(0x10) UAxisPositionGizmo final : public UInteractiveGizmo
{
public:
	uint8                                         Pad_38[0x10];
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;
	class UGizmoViewContext*                      GizmoViewContext;
	TScriptInterface<class IGizmoClickTarget>     HitTarget;
	TScriptInterface<class IGizmoStateTarget>     StateTarget;
	class UClickDragInputBehavior*                MouseBehavior;
	bool                                          bEnableSignedAxis;
	uint8                                         Pad_99[0x88];
	bool                                          bInInteraction;
	uint8                                         Pad_122[0x6];
	struct FVector                                InteractionOrigin;
	struct FVector                                InteractionAxis;
	struct FVector                                InteractionStartPoint;
	struct FVector                                InteractionCurPoint;
	float                                         InteractionStartParameter;
	float                                         InteractionCurParameter;
	float                                         ParameterSign;
	uint8                                         Pad_194[0x2C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AxisPositionGizmo">();
	}
	static class UAxisPositionGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAxisPositionGizmo>();
	}
};
static_assert(alignof(UAxisPositionGizmo) == 0x000010, "Wrong alignment on UAxisPositionGizmo");
static_assert(sizeof(UAxisPositionGizmo) == 0x0001C0, "Wrong size on UAxisPositionGizmo");
static_assert(offsetof(UAxisPositionGizmo, AxisSource) == 0x000048, "Member 'UAxisPositionGizmo::AxisSource' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, ParameterSource) == 0x000058, "Member 'UAxisPositionGizmo::ParameterSource' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, GizmoViewContext) == 0x000068, "Member 'UAxisPositionGizmo::GizmoViewContext' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, HitTarget) == 0x000070, "Member 'UAxisPositionGizmo::HitTarget' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, StateTarget) == 0x000080, "Member 'UAxisPositionGizmo::StateTarget' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, MouseBehavior) == 0x000090, "Member 'UAxisPositionGizmo::MouseBehavior' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, bEnableSignedAxis) == 0x000098, "Member 'UAxisPositionGizmo::bEnableSignedAxis' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, bInInteraction) == 0x000121, "Member 'UAxisPositionGizmo::bInInteraction' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, InteractionOrigin) == 0x000128, "Member 'UAxisPositionGizmo::InteractionOrigin' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, InteractionAxis) == 0x000140, "Member 'UAxisPositionGizmo::InteractionAxis' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, InteractionStartPoint) == 0x000158, "Member 'UAxisPositionGizmo::InteractionStartPoint' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, InteractionCurPoint) == 0x000170, "Member 'UAxisPositionGizmo::InteractionCurPoint' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, InteractionStartParameter) == 0x000188, "Member 'UAxisPositionGizmo::InteractionStartParameter' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, InteractionCurParameter) == 0x00018C, "Member 'UAxisPositionGizmo::InteractionCurParameter' has a wrong offset!");
static_assert(offsetof(UAxisPositionGizmo, ParameterSign) == 0x000190, "Member 'UAxisPositionGizmo::ParameterSign' has a wrong offset!");

class UGizmoConstantAxisSource final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FVector                                Origin;
	struct FVector                                Direction;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoConstantAxisSource">();
	}
	static class UGizmoConstantAxisSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoConstantAxisSource>();
	}
};
static_assert(alignof(UGizmoConstantAxisSource) == 0x000008, "Wrong alignment on UGizmoConstantAxisSource");
static_assert(sizeof(UGizmoConstantAxisSource) == 0x000060, "Wrong size on UGizmoConstantAxisSource");
static_assert(offsetof(UGizmoConstantAxisSource, Origin) == 0x000030, "Member 'UGizmoConstantAxisSource::Origin' has a wrong offset!");
static_assert(offsetof(UGizmoConstantAxisSource, Direction) == 0x000048, "Member 'UGizmoConstantAxisSource::Direction' has a wrong offset!");

class UGizmoConstantFrameAxisSource final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FVector                                Origin;
	struct FVector                                Direction;
	struct FVector                                TangentX;
	struct FVector                                TangentY;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoConstantFrameAxisSource">();
	}
	static class UGizmoConstantFrameAxisSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoConstantFrameAxisSource>();
	}
};
static_assert(alignof(UGizmoConstantFrameAxisSource) == 0x000008, "Wrong alignment on UGizmoConstantFrameAxisSource");
static_assert(sizeof(UGizmoConstantFrameAxisSource) == 0x000090, "Wrong size on UGizmoConstantFrameAxisSource");
static_assert(offsetof(UGizmoConstantFrameAxisSource, Origin) == 0x000030, "Member 'UGizmoConstantFrameAxisSource::Origin' has a wrong offset!");
static_assert(offsetof(UGizmoConstantFrameAxisSource, Direction) == 0x000048, "Member 'UGizmoConstantFrameAxisSource::Direction' has a wrong offset!");
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentX) == 0x000060, "Member 'UGizmoConstantFrameAxisSource::TangentX' has a wrong offset!");
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentY) == 0x000078, "Member 'UGizmoConstantFrameAxisSource::TangentY' has a wrong offset!");

class UGizmoWorldAxisSource final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FVector                                Origin;
	int32                                         AxisIndex;
	uint8                                         Pad_4C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoWorldAxisSource">();
	}
	static class UGizmoWorldAxisSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoWorldAxisSource>();
	}
};
static_assert(alignof(UGizmoWorldAxisSource) == 0x000008, "Wrong alignment on UGizmoWorldAxisSource");
static_assert(sizeof(UGizmoWorldAxisSource) == 0x000050, "Wrong size on UGizmoWorldAxisSource");
static_assert(offsetof(UGizmoWorldAxisSource, Origin) == 0x000030, "Member 'UGizmoWorldAxisSource::Origin' has a wrong offset!");
static_assert(offsetof(UGizmoWorldAxisSource, AxisIndex) == 0x000048, "Member 'UGizmoWorldAxisSource::AxisIndex' has a wrong offset!");

class UGizmoComponentAxisSource final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class USceneComponent*                        Component;
	int32                                         AxisIndex;
	bool                                          bLocalAxes;
	uint8                                         Pad_3D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoComponentAxisSource">();
	}
	static class UGizmoComponentAxisSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoComponentAxisSource>();
	}
};
static_assert(alignof(UGizmoComponentAxisSource) == 0x000008, "Wrong alignment on UGizmoComponentAxisSource");
static_assert(sizeof(UGizmoComponentAxisSource) == 0x000040, "Wrong size on UGizmoComponentAxisSource");
static_assert(offsetof(UGizmoComponentAxisSource, Component) == 0x000030, "Member 'UGizmoComponentAxisSource::Component' has a wrong offset!");
static_assert(offsetof(UGizmoComponentAxisSource, AxisIndex) == 0x000038, "Member 'UGizmoComponentAxisSource::AxisIndex' has a wrong offset!");
static_assert(offsetof(UGizmoComponentAxisSource, bLocalAxes) == 0x00003C, "Member 'UGizmoComponentAxisSource::bLocalAxes' has a wrong offset!");

class UBrushStampIndicatorBuilder final : public UInteractiveGizmoBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BrushStampIndicatorBuilder">();
	}
	static class UBrushStampIndicatorBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBrushStampIndicatorBuilder>();
	}
};
static_assert(alignof(UBrushStampIndicatorBuilder) == 0x000008, "Wrong alignment on UBrushStampIndicatorBuilder");
static_assert(sizeof(UBrushStampIndicatorBuilder) == 0x000028, "Wrong size on UBrushStampIndicatorBuilder");

class UBrushStampIndicator final : public UInteractiveGizmo
{
public:
	bool                                          bVisible;
	uint8                                         Pad_39[0x3];
	float                                         BrushRadius;
	float                                         BrushFalloff;
	uint8                                         Pad_44[0x4];
	struct FVector                                BrushPosition;
	struct FVector                                BrushNormal;
	bool                                          bDrawIndicatorLines;
	bool                                          bDrawRadiusCircle;
	uint8                                         Pad_7A[0x2];
	int32                                         SampleStepCount;
	struct FLinearColor                           LineColor;
	float                                         LineThickness;
	bool                                          bDepthTested;
	bool                                          bDrawSecondaryLines;
	uint8                                         Pad_96[0x2];
	float                                         SecondaryLineThickness;
	struct FLinearColor                           SecondaryLineColor;
	uint8                                         Pad_AC[0x4];
	class UPrimitiveComponent*                    AttachedComponent;
	uint8                                         Pad_B8[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BrushStampIndicator">();
	}
	static class UBrushStampIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBrushStampIndicator>();
	}
};
static_assert(alignof(UBrushStampIndicator) == 0x000008, "Wrong alignment on UBrushStampIndicator");
static_assert(sizeof(UBrushStampIndicator) == 0x0000D8, "Wrong size on UBrushStampIndicator");
static_assert(offsetof(UBrushStampIndicator, bVisible) == 0x000038, "Member 'UBrushStampIndicator::bVisible' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, BrushRadius) == 0x00003C, "Member 'UBrushStampIndicator::BrushRadius' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, BrushFalloff) == 0x000040, "Member 'UBrushStampIndicator::BrushFalloff' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, BrushPosition) == 0x000048, "Member 'UBrushStampIndicator::BrushPosition' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, BrushNormal) == 0x000060, "Member 'UBrushStampIndicator::BrushNormal' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, bDrawIndicatorLines) == 0x000078, "Member 'UBrushStampIndicator::bDrawIndicatorLines' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, bDrawRadiusCircle) == 0x000079, "Member 'UBrushStampIndicator::bDrawRadiusCircle' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, SampleStepCount) == 0x00007C, "Member 'UBrushStampIndicator::SampleStepCount' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, LineColor) == 0x000080, "Member 'UBrushStampIndicator::LineColor' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, LineThickness) == 0x000090, "Member 'UBrushStampIndicator::LineThickness' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, bDepthTested) == 0x000094, "Member 'UBrushStampIndicator::bDepthTested' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, bDrawSecondaryLines) == 0x000095, "Member 'UBrushStampIndicator::bDrawSecondaryLines' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, SecondaryLineThickness) == 0x000098, "Member 'UBrushStampIndicator::SecondaryLineThickness' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, SecondaryLineColor) == 0x00009C, "Member 'UBrushStampIndicator::SecondaryLineColor' has a wrong offset!");
static_assert(offsetof(UBrushStampIndicator, AttachedComponent) == 0x0000B0, "Member 'UBrushStampIndicator::AttachedComponent' has a wrong offset!");

class AGizmoActor : public AInternalToolFrameworkActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoActor">();
	}
	static class AGizmoActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGizmoActor>();
	}
};
static_assert(alignof(AGizmoActor) == 0x000008, "Wrong alignment on AGizmoActor");
static_assert(sizeof(AGizmoActor) == 0x000290, "Wrong size on AGizmoActor");

class ACombinedTransformGizmoActor final : public AGizmoActor
{
public:
	class UPrimitiveComponent*                    TranslateX;
	class UPrimitiveComponent*                    TranslateY;
	class UPrimitiveComponent*                    TranslateZ;
	class UPrimitiveComponent*                    TranslateYZ;
	class UPrimitiveComponent*                    TranslateXZ;
	class UPrimitiveComponent*                    TranslateXY;
	class UPrimitiveComponent*                    RotateX;
	class UPrimitiveComponent*                    RotateY;
	class UPrimitiveComponent*                    RotateZ;
	class UPrimitiveComponent*                    RotationSphere;
	class UPrimitiveComponent*                    UniformScale;
	class UPrimitiveComponent*                    AxisScaleX;
	class UPrimitiveComponent*                    AxisScaleY;
	class UPrimitiveComponent*                    AxisScaleZ;
	class UPrimitiveComponent*                    PlaneScaleYZ;
	class UPrimitiveComponent*                    PlaneScaleXZ;
	class UPrimitiveComponent*                    PlaneScaleXY;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CombinedTransformGizmoActor">();
	}
	static class ACombinedTransformGizmoActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACombinedTransformGizmoActor>();
	}
};
static_assert(alignof(ACombinedTransformGizmoActor) == 0x000008, "Wrong alignment on ACombinedTransformGizmoActor");
static_assert(sizeof(ACombinedTransformGizmoActor) == 0x000318, "Wrong size on ACombinedTransformGizmoActor");
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateX) == 0x000290, "Member 'ACombinedTransformGizmoActor::TranslateX' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateY) == 0x000298, "Member 'ACombinedTransformGizmoActor::TranslateY' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateZ) == 0x0002A0, "Member 'ACombinedTransformGizmoActor::TranslateZ' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateYZ) == 0x0002A8, "Member 'ACombinedTransformGizmoActor::TranslateYZ' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateXZ) == 0x0002B0, "Member 'ACombinedTransformGizmoActor::TranslateXZ' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateXY) == 0x0002B8, "Member 'ACombinedTransformGizmoActor::TranslateXY' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, RotateX) == 0x0002C0, "Member 'ACombinedTransformGizmoActor::RotateX' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, RotateY) == 0x0002C8, "Member 'ACombinedTransformGizmoActor::RotateY' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, RotateZ) == 0x0002D0, "Member 'ACombinedTransformGizmoActor::RotateZ' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, RotationSphere) == 0x0002D8, "Member 'ACombinedTransformGizmoActor::RotationSphere' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, UniformScale) == 0x0002E0, "Member 'ACombinedTransformGizmoActor::UniformScale' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, AxisScaleX) == 0x0002E8, "Member 'ACombinedTransformGizmoActor::AxisScaleX' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, AxisScaleY) == 0x0002F0, "Member 'ACombinedTransformGizmoActor::AxisScaleY' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, AxisScaleZ) == 0x0002F8, "Member 'ACombinedTransformGizmoActor::AxisScaleZ' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, PlaneScaleYZ) == 0x000300, "Member 'ACombinedTransformGizmoActor::PlaneScaleYZ' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, PlaneScaleXZ) == 0x000308, "Member 'ACombinedTransformGizmoActor::PlaneScaleXZ' has a wrong offset!");
static_assert(offsetof(ACombinedTransformGizmoActor, PlaneScaleXY) == 0x000310, "Member 'ACombinedTransformGizmoActor::PlaneScaleXY' has a wrong offset!");

class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                         Pad_28[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CombinedTransformGizmoBuilder">();
	}
	static class UCombinedTransformGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCombinedTransformGizmoBuilder>();
	}
};
static_assert(alignof(UCombinedTransformGizmoBuilder) == 0x000008, "Wrong alignment on UCombinedTransformGizmoBuilder");
static_assert(sizeof(UCombinedTransformGizmoBuilder) == 0x0000F0, "Wrong size on UCombinedTransformGizmoBuilder");

class alignas(0x10) UCombinedTransformGizmo : public UInteractiveGizmo
{
public:
	class UTransformProxy*                        ActiveTarget;
	bool                                          bSnapToWorldGrid;
	uint8                                         Pad_41[0x3];
	bool                                          bGridSizeIsExplicit;
	uint8                                         Pad_45[0x3];
	struct FVector                                ExplicitGridSize;
	bool                                          bRotationGridSizeIsExplicit;
	uint8                                         Pad_61[0x7];
	struct FRotator                               ExplicitRotationGridSize;
	bool                                          bSnapToWorldRotGrid;
	bool                                          bUseContextCoordinateSystem;
	uint8                                         Pad_82[0x2];
	EToolContextCoordinateSystem                  CurrentCoordinateSystem;
	bool                                          bUseContextGizmoMode;
	EToolContextTransformGizmoMode                ActiveGizmoMode;
	uint8                                         Pad_8A[0x126];
	TArray<class UPrimitiveComponent*>            ActiveComponents;
	TArray<class UInteractiveGizmo*>              ActiveGizmos;
	uint8                                         Pad_1D0[0x50];
	class UGizmoConstantFrameAxisSource*          CameraAxisSource;
	class UGizmoComponentAxisSource*              AxisXSource;
	class UGizmoComponentAxisSource*              AxisYSource;
	class UGizmoComponentAxisSource*              AxisZSource;
	class UGizmoComponentAxisSource*              UnitAxisXSource;
	class UGizmoComponentAxisSource*              UnitAxisYSource;
	class UGizmoComponentAxisSource*              UnitAxisZSource;
	class UGizmoTransformChangeStateTarget*       StateTarget;
	uint8                                         Pad_260[0x140];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CombinedTransformGizmo">();
	}
	static class UCombinedTransformGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCombinedTransformGizmo>();
	}
};
static_assert(alignof(UCombinedTransformGizmo) == 0x000010, "Wrong alignment on UCombinedTransformGizmo");
static_assert(sizeof(UCombinedTransformGizmo) == 0x0003A0, "Wrong size on UCombinedTransformGizmo");
static_assert(offsetof(UCombinedTransformGizmo, ActiveTarget) == 0x000038, "Member 'UCombinedTransformGizmo::ActiveTarget' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, bSnapToWorldGrid) == 0x000040, "Member 'UCombinedTransformGizmo::bSnapToWorldGrid' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, bGridSizeIsExplicit) == 0x000044, "Member 'UCombinedTransformGizmo::bGridSizeIsExplicit' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, ExplicitGridSize) == 0x000048, "Member 'UCombinedTransformGizmo::ExplicitGridSize' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, bRotationGridSizeIsExplicit) == 0x000060, "Member 'UCombinedTransformGizmo::bRotationGridSizeIsExplicit' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, ExplicitRotationGridSize) == 0x000068, "Member 'UCombinedTransformGizmo::ExplicitRotationGridSize' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, bSnapToWorldRotGrid) == 0x000080, "Member 'UCombinedTransformGizmo::bSnapToWorldRotGrid' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, bUseContextCoordinateSystem) == 0x000081, "Member 'UCombinedTransformGizmo::bUseContextCoordinateSystem' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, CurrentCoordinateSystem) == 0x000084, "Member 'UCombinedTransformGizmo::CurrentCoordinateSystem' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, bUseContextGizmoMode) == 0x000088, "Member 'UCombinedTransformGizmo::bUseContextGizmoMode' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, ActiveGizmoMode) == 0x000089, "Member 'UCombinedTransformGizmo::ActiveGizmoMode' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, ActiveComponents) == 0x0001B0, "Member 'UCombinedTransformGizmo::ActiveComponents' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, ActiveGizmos) == 0x0001C0, "Member 'UCombinedTransformGizmo::ActiveGizmos' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, CameraAxisSource) == 0x000220, "Member 'UCombinedTransformGizmo::CameraAxisSource' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, AxisXSource) == 0x000228, "Member 'UCombinedTransformGizmo::AxisXSource' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, AxisYSource) == 0x000230, "Member 'UCombinedTransformGizmo::AxisYSource' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, AxisZSource) == 0x000238, "Member 'UCombinedTransformGizmo::AxisZSource' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisXSource) == 0x000240, "Member 'UCombinedTransformGizmo::UnitAxisXSource' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisYSource) == 0x000248, "Member 'UCombinedTransformGizmo::UnitAxisYSource' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisZSource) == 0x000250, "Member 'UCombinedTransformGizmo::UnitAxisZSource' has a wrong offset!");
static_assert(offsetof(UCombinedTransformGizmo, StateTarget) == 0x000258, "Member 'UCombinedTransformGizmo::StateTarget' has a wrong offset!");

class UGizmoArrowComponent final : public UGizmoBaseComponent
{
public:
	struct FVector                                Direction;
	float                                         Gap;
	float                                         Length;
	float                                         Thickness;
	uint8                                         Pad_5BC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoArrowComponent">();
	}
	static class UGizmoArrowComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoArrowComponent>();
	}
};
static_assert(alignof(UGizmoArrowComponent) == 0x000010, "Wrong alignment on UGizmoArrowComponent");
static_assert(sizeof(UGizmoArrowComponent) == 0x0005C0, "Wrong size on UGizmoArrowComponent");
static_assert(offsetof(UGizmoArrowComponent, Direction) == 0x000598, "Member 'UGizmoArrowComponent::Direction' has a wrong offset!");
static_assert(offsetof(UGizmoArrowComponent, Gap) == 0x0005B0, "Member 'UGizmoArrowComponent::Gap' has a wrong offset!");
static_assert(offsetof(UGizmoArrowComponent, Length) == 0x0005B4, "Member 'UGizmoArrowComponent::Length' has a wrong offset!");
static_assert(offsetof(UGizmoArrowComponent, Thickness) == 0x0005B8, "Member 'UGizmoArrowComponent::Thickness' has a wrong offset!");

class UGizmoBoxComponent final : public UGizmoBaseComponent
{
public:
	struct FVector                                Origin;
	struct FQuat                                  Rotation;
	struct FVector                                Dimensions;
	float                                         LineThickness;
	bool                                          bRemoveHiddenLines;
	bool                                          bEnableAxisFlip;
	uint8                                         Pad_5EE[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoBoxComponent">();
	}
	static class UGizmoBoxComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoBoxComponent>();
	}
};
static_assert(alignof(UGizmoBoxComponent) == 0x000010, "Wrong alignment on UGizmoBoxComponent");
static_assert(sizeof(UGizmoBoxComponent) == 0x0005F0, "Wrong size on UGizmoBoxComponent");
static_assert(offsetof(UGizmoBoxComponent, Origin) == 0x000598, "Member 'UGizmoBoxComponent::Origin' has a wrong offset!");
static_assert(offsetof(UGizmoBoxComponent, Rotation) == 0x0005B0, "Member 'UGizmoBoxComponent::Rotation' has a wrong offset!");
static_assert(offsetof(UGizmoBoxComponent, Dimensions) == 0x0005D0, "Member 'UGizmoBoxComponent::Dimensions' has a wrong offset!");
static_assert(offsetof(UGizmoBoxComponent, LineThickness) == 0x0005E8, "Member 'UGizmoBoxComponent::LineThickness' has a wrong offset!");
static_assert(offsetof(UGizmoBoxComponent, bRemoveHiddenLines) == 0x0005EC, "Member 'UGizmoBoxComponent::bRemoveHiddenLines' has a wrong offset!");
static_assert(offsetof(UGizmoBoxComponent, bEnableAxisFlip) == 0x0005ED, "Member 'UGizmoBoxComponent::bEnableAxisFlip' has a wrong offset!");

class UGizmoCircleComponent final : public UGizmoBaseComponent
{
public:
	struct FVector                                Normal;
	float                                         Radius;
	float                                         Thickness;
	int32                                         NumSides;
	bool                                          bViewAligned;
	bool                                          bDrawFullCircle;
	bool                                          bOnlyAllowFrontFacingHits;
	uint8                                         Pad_5BF[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoCircleComponent">();
	}
	static class UGizmoCircleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoCircleComponent>();
	}
};
static_assert(alignof(UGizmoCircleComponent) == 0x000010, "Wrong alignment on UGizmoCircleComponent");
static_assert(sizeof(UGizmoCircleComponent) == 0x0005C0, "Wrong size on UGizmoCircleComponent");
static_assert(offsetof(UGizmoCircleComponent, Normal) == 0x000598, "Member 'UGizmoCircleComponent::Normal' has a wrong offset!");
static_assert(offsetof(UGizmoCircleComponent, Radius) == 0x0005B0, "Member 'UGizmoCircleComponent::Radius' has a wrong offset!");
static_assert(offsetof(UGizmoCircleComponent, Thickness) == 0x0005B4, "Member 'UGizmoCircleComponent::Thickness' has a wrong offset!");
static_assert(offsetof(UGizmoCircleComponent, NumSides) == 0x0005B8, "Member 'UGizmoCircleComponent::NumSides' has a wrong offset!");
static_assert(offsetof(UGizmoCircleComponent, bViewAligned) == 0x0005BC, "Member 'UGizmoCircleComponent::bViewAligned' has a wrong offset!");
static_assert(offsetof(UGizmoCircleComponent, bDrawFullCircle) == 0x0005BD, "Member 'UGizmoCircleComponent::bDrawFullCircle' has a wrong offset!");
static_assert(offsetof(UGizmoCircleComponent, bOnlyAllowFrontFacingHits) == 0x0005BE, "Member 'UGizmoCircleComponent::bOnlyAllowFrontFacingHits' has a wrong offset!");

class UGizmoElementBase : public UObject
{
public:
	bool                                          bEnabled;
	bool                                          bEnabledForPerspectiveProjection;
	bool                                          bEnabledForOrthographicProjection;
	bool                                          bEnabledForDefaultState;
	bool                                          bEnabledForHoveringState;
	bool                                          bEnabledForInteractingState;
	uint8                                         Pad_2E[0x2];
	uint32                                        PartIdentifier;
	struct FGizmoElementMeshRenderStateAttributes MeshRenderAttributes;
	EGizmoElementState                            ElementState;
	uint8                                         Pad_95[0x3];
	EGizmoElementInteractionState                 ElementInteractionState;
	EGizmoElementViewDependentType                ViewDependentType;
	struct FVector                                ViewDependentAxis;
	float                                         ViewDependentAngleTol;
	float                                         ViewDependentAxialMaxCosAngleTol;
	float                                         ViewDependentPlanarMinCosAngleTol;
	EGizmoElementViewAlignType                    ViewAlignType;
	struct FVector                                ViewAlignAxis;
	struct FVector                                ViewAlignNormal;
	float                                         ViewAlignAxialAngleTol;
	float                                         ViewAlignAxialMaxCosAngleTol;
	float                                         PixelHitDistanceThreshold;
	uint8                                         Pad_104[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementBase">();
	}
	static class UGizmoElementBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementBase>();
	}
};
static_assert(alignof(UGizmoElementBase) == 0x000008, "Wrong alignment on UGizmoElementBase");
static_assert(sizeof(UGizmoElementBase) == 0x000108, "Wrong size on UGizmoElementBase");
static_assert(offsetof(UGizmoElementBase, bEnabled) == 0x000028, "Member 'UGizmoElementBase::bEnabled' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, bEnabledForPerspectiveProjection) == 0x000029, "Member 'UGizmoElementBase::bEnabledForPerspectiveProjection' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, bEnabledForOrthographicProjection) == 0x00002A, "Member 'UGizmoElementBase::bEnabledForOrthographicProjection' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, bEnabledForDefaultState) == 0x00002B, "Member 'UGizmoElementBase::bEnabledForDefaultState' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, bEnabledForHoveringState) == 0x00002C, "Member 'UGizmoElementBase::bEnabledForHoveringState' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, bEnabledForInteractingState) == 0x00002D, "Member 'UGizmoElementBase::bEnabledForInteractingState' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, PartIdentifier) == 0x000030, "Member 'UGizmoElementBase::PartIdentifier' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, MeshRenderAttributes) == 0x000034, "Member 'UGizmoElementBase::MeshRenderAttributes' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ElementState) == 0x000094, "Member 'UGizmoElementBase::ElementState' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ElementInteractionState) == 0x000098, "Member 'UGizmoElementBase::ElementInteractionState' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewDependentType) == 0x00009C, "Member 'UGizmoElementBase::ViewDependentType' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewDependentAxis) == 0x0000A0, "Member 'UGizmoElementBase::ViewDependentAxis' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewDependentAngleTol) == 0x0000B8, "Member 'UGizmoElementBase::ViewDependentAngleTol' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewDependentAxialMaxCosAngleTol) == 0x0000BC, "Member 'UGizmoElementBase::ViewDependentAxialMaxCosAngleTol' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewDependentPlanarMinCosAngleTol) == 0x0000C0, "Member 'UGizmoElementBase::ViewDependentPlanarMinCosAngleTol' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewAlignType) == 0x0000C4, "Member 'UGizmoElementBase::ViewAlignType' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewAlignAxis) == 0x0000C8, "Member 'UGizmoElementBase::ViewAlignAxis' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewAlignNormal) == 0x0000E0, "Member 'UGizmoElementBase::ViewAlignNormal' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewAlignAxialAngleTol) == 0x0000F8, "Member 'UGizmoElementBase::ViewAlignAxialAngleTol' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, ViewAlignAxialMaxCosAngleTol) == 0x0000FC, "Member 'UGizmoElementBase::ViewAlignAxialMaxCosAngleTol' has a wrong offset!");
static_assert(offsetof(UGizmoElementBase, PixelHitDistanceThreshold) == 0x000100, "Member 'UGizmoElementBase::PixelHitDistanceThreshold' has a wrong offset!");

class UGizmoElementLineBase : public UGizmoElementBase
{
public:
	struct FGizmoElementLineRenderStateAttributes LineRenderAttributes;
	float                                         LineThickness;
	bool                                          bScreenSpaceLine;
	uint8                                         Pad_149[0x3];
	float                                         HoverLineThicknessMultiplier;
	float                                         InteractLineThicknessMultiplier;
	uint8                                         Pad_154[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementLineBase">();
	}
	static class UGizmoElementLineBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementLineBase>();
	}
};
static_assert(alignof(UGizmoElementLineBase) == 0x000008, "Wrong alignment on UGizmoElementLineBase");
static_assert(sizeof(UGizmoElementLineBase) == 0x000158, "Wrong size on UGizmoElementLineBase");
static_assert(offsetof(UGizmoElementLineBase, LineRenderAttributes) == 0x000108, "Member 'UGizmoElementLineBase::LineRenderAttributes' has a wrong offset!");
static_assert(offsetof(UGizmoElementLineBase, LineThickness) == 0x000144, "Member 'UGizmoElementLineBase::LineThickness' has a wrong offset!");
static_assert(offsetof(UGizmoElementLineBase, bScreenSpaceLine) == 0x000148, "Member 'UGizmoElementLineBase::bScreenSpaceLine' has a wrong offset!");
static_assert(offsetof(UGizmoElementLineBase, HoverLineThicknessMultiplier) == 0x00014C, "Member 'UGizmoElementLineBase::HoverLineThicknessMultiplier' has a wrong offset!");
static_assert(offsetof(UGizmoElementLineBase, InteractLineThicknessMultiplier) == 0x000150, "Member 'UGizmoElementLineBase::InteractLineThicknessMultiplier' has a wrong offset!");

class UGizmoElementCircleBase : public UGizmoElementLineBase
{
public:
	struct FVector                                Center;
	struct FVector                                Axis0;
	struct FVector                                Axis1;
	double                                        Radius;
	int32                                         NumSegments;
	EGizmoElementPartialType                      PartialType;
	double                                        PartialStartAngle;
	double                                        PartialEndAngle;
	double                                        PartialViewDependentMaxCosTol;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementCircleBase">();
	}
	static class UGizmoElementCircleBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementCircleBase>();
	}
};
static_assert(alignof(UGizmoElementCircleBase) == 0x000008, "Wrong alignment on UGizmoElementCircleBase");
static_assert(sizeof(UGizmoElementCircleBase) == 0x0001C8, "Wrong size on UGizmoElementCircleBase");
static_assert(offsetof(UGizmoElementCircleBase, Center) == 0x000158, "Member 'UGizmoElementCircleBase::Center' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, Axis0) == 0x000170, "Member 'UGizmoElementCircleBase::Axis0' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, Axis1) == 0x000188, "Member 'UGizmoElementCircleBase::Axis1' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, Radius) == 0x0001A0, "Member 'UGizmoElementCircleBase::Radius' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, NumSegments) == 0x0001A8, "Member 'UGizmoElementCircleBase::NumSegments' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, PartialType) == 0x0001AC, "Member 'UGizmoElementCircleBase::PartialType' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, PartialStartAngle) == 0x0001B0, "Member 'UGizmoElementCircleBase::PartialStartAngle' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, PartialEndAngle) == 0x0001B8, "Member 'UGizmoElementCircleBase::PartialEndAngle' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircleBase, PartialViewDependentMaxCosTol) == 0x0001C0, "Member 'UGizmoElementCircleBase::PartialViewDependentMaxCosTol' has a wrong offset!");

class UGizmoElementArc final : public UGizmoElementCircleBase
{
public:
	double                                        InnerRadius;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementArc">();
	}
	static class UGizmoElementArc* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementArc>();
	}
};
static_assert(alignof(UGizmoElementArc) == 0x000008, "Wrong alignment on UGizmoElementArc");
static_assert(sizeof(UGizmoElementArc) == 0x0001D0, "Wrong size on UGizmoElementArc");
static_assert(offsetof(UGizmoElementArc, InnerRadius) == 0x0001C8, "Member 'UGizmoElementArc::InnerRadius' has a wrong offset!");

class UGizmoElementArrow final : public UGizmoElementBase
{
public:
	uint8                                         Pad_108[0x8];
	class UGizmoElementCylinder*                  CylinderElement;
	class UGizmoElementCone*                      ConeElement;
	class UGizmoElementBox*                       BoxElement;
	struct FVector                                Base;
	struct FVector                                Direction;
	struct FVector                                SideDirection;
	float                                         BodyLength;
	float                                         BodyRadius;
	float                                         HeadLength;
	float                                         HeadRadius;
	int32                                         NumSides;
	EGizmoElementArrowHeadType                    HeadType;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementArrow">();
	}
	static class UGizmoElementArrow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementArrow>();
	}
};
static_assert(alignof(UGizmoElementArrow) == 0x000008, "Wrong alignment on UGizmoElementArrow");
static_assert(sizeof(UGizmoElementArrow) == 0x000188, "Wrong size on UGizmoElementArrow");
static_assert(offsetof(UGizmoElementArrow, CylinderElement) == 0x000110, "Member 'UGizmoElementArrow::CylinderElement' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, ConeElement) == 0x000118, "Member 'UGizmoElementArrow::ConeElement' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, BoxElement) == 0x000120, "Member 'UGizmoElementArrow::BoxElement' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, Base) == 0x000128, "Member 'UGizmoElementArrow::Base' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, Direction) == 0x000140, "Member 'UGizmoElementArrow::Direction' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, SideDirection) == 0x000158, "Member 'UGizmoElementArrow::SideDirection' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, BodyLength) == 0x000170, "Member 'UGizmoElementArrow::BodyLength' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, BodyRadius) == 0x000174, "Member 'UGizmoElementArrow::BodyRadius' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, HeadLength) == 0x000178, "Member 'UGizmoElementArrow::HeadLength' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, HeadRadius) == 0x00017C, "Member 'UGizmoElementArrow::HeadRadius' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, NumSides) == 0x000180, "Member 'UGizmoElementArrow::NumSides' has a wrong offset!");
static_assert(offsetof(UGizmoElementArrow, HeadType) == 0x000184, "Member 'UGizmoElementArrow::HeadType' has a wrong offset!");

class UGizmoElementBox final : public UGizmoElementBase
{
public:
	struct FVector                                Center;
	struct FVector                                Dimensions;
	struct FVector                                UpDirection;
	struct FVector                                SideDirection;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementBox">();
	}
	static class UGizmoElementBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementBox>();
	}
};
static_assert(alignof(UGizmoElementBox) == 0x000008, "Wrong alignment on UGizmoElementBox");
static_assert(sizeof(UGizmoElementBox) == 0x000168, "Wrong size on UGizmoElementBox");
static_assert(offsetof(UGizmoElementBox, Center) == 0x000108, "Member 'UGizmoElementBox::Center' has a wrong offset!");
static_assert(offsetof(UGizmoElementBox, Dimensions) == 0x000120, "Member 'UGizmoElementBox::Dimensions' has a wrong offset!");
static_assert(offsetof(UGizmoElementBox, UpDirection) == 0x000138, "Member 'UGizmoElementBox::UpDirection' has a wrong offset!");
static_assert(offsetof(UGizmoElementBox, SideDirection) == 0x000150, "Member 'UGizmoElementBox::SideDirection' has a wrong offset!");

class UGizmoElementCircle final : public UGizmoElementCircleBase
{
public:
	bool                                          bDrawMesh;
	bool                                          bDrawLine;
	bool                                          bHitMesh;
	bool                                          bHitLine;
	uint8                                         Pad_1CC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementCircle">();
	}
	static class UGizmoElementCircle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementCircle>();
	}
};
static_assert(alignof(UGizmoElementCircle) == 0x000008, "Wrong alignment on UGizmoElementCircle");
static_assert(sizeof(UGizmoElementCircle) == 0x0001D0, "Wrong size on UGizmoElementCircle");
static_assert(offsetof(UGizmoElementCircle, bDrawMesh) == 0x0001C8, "Member 'UGizmoElementCircle::bDrawMesh' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircle, bDrawLine) == 0x0001C9, "Member 'UGizmoElementCircle::bDrawLine' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircle, bHitMesh) == 0x0001CA, "Member 'UGizmoElementCircle::bHitMesh' has a wrong offset!");
static_assert(offsetof(UGizmoElementCircle, bHitLine) == 0x0001CB, "Member 'UGizmoElementCircle::bHitLine' has a wrong offset!");

class UGizmoElementCone final : public UGizmoElementBase
{
public:
	struct FVector                                Origin;
	struct FVector                                Direction;
	float                                         Height;
	float                                         Radius;
	int32                                         NumSides;
	uint8                                         Pad_144[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementCone">();
	}
	static class UGizmoElementCone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementCone>();
	}
};
static_assert(alignof(UGizmoElementCone) == 0x000008, "Wrong alignment on UGizmoElementCone");
static_assert(sizeof(UGizmoElementCone) == 0x000148, "Wrong size on UGizmoElementCone");
static_assert(offsetof(UGizmoElementCone, Origin) == 0x000108, "Member 'UGizmoElementCone::Origin' has a wrong offset!");
static_assert(offsetof(UGizmoElementCone, Direction) == 0x000120, "Member 'UGizmoElementCone::Direction' has a wrong offset!");
static_assert(offsetof(UGizmoElementCone, Height) == 0x000138, "Member 'UGizmoElementCone::Height' has a wrong offset!");
static_assert(offsetof(UGizmoElementCone, Radius) == 0x00013C, "Member 'UGizmoElementCone::Radius' has a wrong offset!");
static_assert(offsetof(UGizmoElementCone, NumSides) == 0x000140, "Member 'UGizmoElementCone::NumSides' has a wrong offset!");

class UGizmoElementCylinder final : public UGizmoElementBase
{
public:
	struct FVector                                Base;
	struct FVector                                Direction;
	float                                         Height;
	float                                         Radius;
	int32                                         NumSides;
	uint8                                         Pad_144[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementCylinder">();
	}
	static class UGizmoElementCylinder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementCylinder>();
	}
};
static_assert(alignof(UGizmoElementCylinder) == 0x000008, "Wrong alignment on UGizmoElementCylinder");
static_assert(sizeof(UGizmoElementCylinder) == 0x000148, "Wrong size on UGizmoElementCylinder");
static_assert(offsetof(UGizmoElementCylinder, Base) == 0x000108, "Member 'UGizmoElementCylinder::Base' has a wrong offset!");
static_assert(offsetof(UGizmoElementCylinder, Direction) == 0x000120, "Member 'UGizmoElementCylinder::Direction' has a wrong offset!");
static_assert(offsetof(UGizmoElementCylinder, Height) == 0x000138, "Member 'UGizmoElementCylinder::Height' has a wrong offset!");
static_assert(offsetof(UGizmoElementCylinder, Radius) == 0x00013C, "Member 'UGizmoElementCylinder::Radius' has a wrong offset!");
static_assert(offsetof(UGizmoElementCylinder, NumSides) == 0x000140, "Member 'UGizmoElementCylinder::NumSides' has a wrong offset!");

class UGizmoElementGroup final : public UGizmoElementLineBase
{
public:
	bool                                          bConstantScale;
	bool                                          bHitOwner;
	uint8                                         Pad_15A[0x6];
	TArray<class UGizmoElementBase*>              Elements;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementGroup">();
	}
	static class UGizmoElementGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementGroup>();
	}
};
static_assert(alignof(UGizmoElementGroup) == 0x000008, "Wrong alignment on UGizmoElementGroup");
static_assert(sizeof(UGizmoElementGroup) == 0x000170, "Wrong size on UGizmoElementGroup");
static_assert(offsetof(UGizmoElementGroup, bConstantScale) == 0x000158, "Member 'UGizmoElementGroup::bConstantScale' has a wrong offset!");
static_assert(offsetof(UGizmoElementGroup, bHitOwner) == 0x000159, "Member 'UGizmoElementGroup::bHitOwner' has a wrong offset!");
static_assert(offsetof(UGizmoElementGroup, Elements) == 0x000160, "Member 'UGizmoElementGroup::Elements' has a wrong offset!");

class alignas(0x10) UGizmoElementHitTarget final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UGizmoElementBase*                      GizmoElement;
	class UGizmoViewContext*                      GizmoViewContext;
	class UTransformProxy*                        GizmoTransformProxy;
	uint8                                         Pad_48[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementHitTarget">();
	}
	static class UGizmoElementHitTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementHitTarget>();
	}
};
static_assert(alignof(UGizmoElementHitTarget) == 0x000010, "Wrong alignment on UGizmoElementHitTarget");
static_assert(sizeof(UGizmoElementHitTarget) == 0x000090, "Wrong size on UGizmoElementHitTarget");
static_assert(offsetof(UGizmoElementHitTarget, GizmoElement) == 0x000030, "Member 'UGizmoElementHitTarget::GizmoElement' has a wrong offset!");
static_assert(offsetof(UGizmoElementHitTarget, GizmoViewContext) == 0x000038, "Member 'UGizmoElementHitTarget::GizmoViewContext' has a wrong offset!");
static_assert(offsetof(UGizmoElementHitTarget, GizmoTransformProxy) == 0x000040, "Member 'UGizmoElementHitTarget::GizmoTransformProxy' has a wrong offset!");

class alignas(0x10) UGizmoElementHitMultiTarget final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UGizmoElementBase*                      GizmoElement;
	class UGizmoViewContext*                      GizmoViewContext;
	class UTransformProxy*                        GizmoTransformProxy;
	uint8                                         Pad_48[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementHitMultiTarget">();
	}
	static class UGizmoElementHitMultiTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementHitMultiTarget>();
	}
};
static_assert(alignof(UGizmoElementHitMultiTarget) == 0x000010, "Wrong alignment on UGizmoElementHitMultiTarget");
static_assert(sizeof(UGizmoElementHitMultiTarget) == 0x000090, "Wrong size on UGizmoElementHitMultiTarget");
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoElement) == 0x000030, "Member 'UGizmoElementHitMultiTarget::GizmoElement' has a wrong offset!");
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoViewContext) == 0x000038, "Member 'UGizmoElementHitMultiTarget::GizmoViewContext' has a wrong offset!");
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoTransformProxy) == 0x000040, "Member 'UGizmoElementHitMultiTarget::GizmoTransformProxy' has a wrong offset!");

class UGizmoElementRectangle final : public UGizmoElementLineBase
{
public:
	struct FVector                                Center;
	float                                         Width;
	float                                         Height;
	struct FVector                                UpDirection;
	struct FVector                                SideDirection;
	bool                                          bDrawMesh;
	bool                                          bDrawLine;
	bool                                          bHitMesh;
	bool                                          bHitLine;
	uint8                                         Pad_1AC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementRectangle">();
	}
	static class UGizmoElementRectangle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementRectangle>();
	}
};
static_assert(alignof(UGizmoElementRectangle) == 0x000008, "Wrong alignment on UGizmoElementRectangle");
static_assert(sizeof(UGizmoElementRectangle) == 0x0001B0, "Wrong size on UGizmoElementRectangle");
static_assert(offsetof(UGizmoElementRectangle, Center) == 0x000158, "Member 'UGizmoElementRectangle::Center' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, Width) == 0x000170, "Member 'UGizmoElementRectangle::Width' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, Height) == 0x000174, "Member 'UGizmoElementRectangle::Height' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, UpDirection) == 0x000178, "Member 'UGizmoElementRectangle::UpDirection' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, SideDirection) == 0x000190, "Member 'UGizmoElementRectangle::SideDirection' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, bDrawMesh) == 0x0001A8, "Member 'UGizmoElementRectangle::bDrawMesh' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, bDrawLine) == 0x0001A9, "Member 'UGizmoElementRectangle::bDrawLine' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, bHitMesh) == 0x0001AA, "Member 'UGizmoElementRectangle::bHitMesh' has a wrong offset!");
static_assert(offsetof(UGizmoElementRectangle, bHitLine) == 0x0001AB, "Member 'UGizmoElementRectangle::bHitLine' has a wrong offset!");

class UGizmoElementTorus final : public UGizmoElementCircleBase
{
public:
	double                                        InnerRadius;
	int32                                         NumInnerSlices;
	bool                                          bEndCaps;
	uint8                                         Pad_1D5[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoElementTorus">();
	}
	static class UGizmoElementTorus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoElementTorus>();
	}
};
static_assert(alignof(UGizmoElementTorus) == 0x000008, "Wrong alignment on UGizmoElementTorus");
static_assert(sizeof(UGizmoElementTorus) == 0x0001D8, "Wrong size on UGizmoElementTorus");
static_assert(offsetof(UGizmoElementTorus, InnerRadius) == 0x0001C8, "Member 'UGizmoElementTorus::InnerRadius' has a wrong offset!");
static_assert(offsetof(UGizmoElementTorus, NumInnerSlices) == 0x0001D0, "Member 'UGizmoElementTorus::NumInnerSlices' has a wrong offset!");
static_assert(offsetof(UGizmoElementTorus, bEndCaps) == 0x0001D4, "Member 'UGizmoElementTorus::bEndCaps' has a wrong offset!");

class IGizmoTransformSource final : public IInterface
{
public:
	void SetTransform(const struct FTransform& NewTransform);

	struct FTransform GetTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoTransformSource">();
	}
	static class IGizmoTransformSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoTransformSource>();
	}
};
static_assert(alignof(IGizmoTransformSource) == 0x000008, "Wrong alignment on IGizmoTransformSource");
static_assert(sizeof(IGizmoTransformSource) == 0x000028, "Wrong size on IGizmoTransformSource");

class IGizmoAxisSource final : public IInterface
{
public:
	struct FVector GetDirection() const;
	struct FVector GetOrigin() const;
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut) const;
	bool HasTangentVectors() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoAxisSource">();
	}
	static class IGizmoAxisSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoAxisSource>();
	}
};
static_assert(alignof(IGizmoAxisSource) == 0x000008, "Wrong alignment on IGizmoAxisSource");
static_assert(sizeof(IGizmoAxisSource) == 0x000028, "Wrong size on IGizmoAxisSource");

class IGizmoClickTarget final : public IInterface
{
public:
	void UpdateHoverState(bool bHovering);
	void UpdateInteractingState(bool bInteracting);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoClickTarget">();
	}
	static class IGizmoClickTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoClickTarget>();
	}
};
static_assert(alignof(IGizmoClickTarget) == 0x000008, "Wrong alignment on IGizmoClickTarget");
static_assert(sizeof(IGizmoClickTarget) == 0x000028, "Wrong size on IGizmoClickTarget");

class IGizmoClickMultiTarget final : public IInterface
{
public:
	void UpdateHittableState(bool bHittable, uint32 InPartIdentifier);
	void UpdateHoverState(bool bHovering, uint32 InPartIdentifier);
	void UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoClickMultiTarget">();
	}
	static class IGizmoClickMultiTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoClickMultiTarget>();
	}
};
static_assert(alignof(IGizmoClickMultiTarget) == 0x000008, "Wrong alignment on IGizmoClickMultiTarget");
static_assert(sizeof(IGizmoClickMultiTarget) == 0x000028, "Wrong size on IGizmoClickMultiTarget");

class IGizmoRenderTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoRenderTarget">();
	}
	static class IGizmoRenderTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoRenderTarget>();
	}
};
static_assert(alignof(IGizmoRenderTarget) == 0x000008, "Wrong alignment on IGizmoRenderTarget");
static_assert(sizeof(IGizmoRenderTarget) == 0x000028, "Wrong size on IGizmoRenderTarget");

class IGizmoRenderMultiTarget final : public IInterface
{
public:
	void UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoRenderMultiTarget">();
	}
	static class IGizmoRenderMultiTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoRenderMultiTarget>();
	}
};
static_assert(alignof(IGizmoRenderMultiTarget) == 0x000008, "Wrong alignment on IGizmoRenderMultiTarget");
static_assert(sizeof(IGizmoRenderMultiTarget) == 0x000028, "Wrong size on IGizmoRenderMultiTarget");

class IGizmoStateTarget final : public IInterface
{
public:
	void BeginUpdate();
	void EndUpdate();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoStateTarget">();
	}
	static class IGizmoStateTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoStateTarget>();
	}
};
static_assert(alignof(IGizmoStateTarget) == 0x000008, "Wrong alignment on IGizmoStateTarget");
static_assert(sizeof(IGizmoStateTarget) == 0x000028, "Wrong size on IGizmoStateTarget");

class IGizmoFloatParameterSource final : public IInterface
{
public:
	void BeginModify();
	void EndModify();
	void SetParameter(float NewValue);

	float GetParameter() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoFloatParameterSource">();
	}
	static class IGizmoFloatParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoFloatParameterSource>();
	}
};
static_assert(alignof(IGizmoFloatParameterSource) == 0x000008, "Wrong alignment on IGizmoFloatParameterSource");
static_assert(sizeof(IGizmoFloatParameterSource) == 0x000028, "Wrong size on IGizmoFloatParameterSource");

class IGizmoVec2ParameterSource final : public IInterface
{
public:
	void BeginModify();
	void EndModify();
	void SetParameter(const struct FVector2D& NewValue);

	struct FVector2D GetParameter() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoVec2ParameterSource">();
	}
	static class IGizmoVec2ParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGizmoVec2ParameterSource>();
	}
};
static_assert(alignof(IGizmoVec2ParameterSource) == 0x000008, "Wrong alignment on IGizmoVec2ParameterSource");
static_assert(sizeof(IGizmoVec2ParameterSource) == 0x000028, "Wrong size on IGizmoVec2ParameterSource");

class UGizmoLineHandleComponent final : public UGizmoBaseComponent
{
public:
	struct FVector                                Normal;
	float                                         HandleSize;
	float                                         Thickness;
	struct FVector                                Direction;
	float                                         Length;
	bool                                          bImageScale;
	uint8                                         Pad_5D5[0xB];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoLineHandleComponent">();
	}
	static class UGizmoLineHandleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoLineHandleComponent>();
	}
};
static_assert(alignof(UGizmoLineHandleComponent) == 0x000010, "Wrong alignment on UGizmoLineHandleComponent");
static_assert(sizeof(UGizmoLineHandleComponent) == 0x0005E0, "Wrong size on UGizmoLineHandleComponent");
static_assert(offsetof(UGizmoLineHandleComponent, Normal) == 0x000598, "Member 'UGizmoLineHandleComponent::Normal' has a wrong offset!");
static_assert(offsetof(UGizmoLineHandleComponent, HandleSize) == 0x0005B0, "Member 'UGizmoLineHandleComponent::HandleSize' has a wrong offset!");
static_assert(offsetof(UGizmoLineHandleComponent, Thickness) == 0x0005B4, "Member 'UGizmoLineHandleComponent::Thickness' has a wrong offset!");
static_assert(offsetof(UGizmoLineHandleComponent, Direction) == 0x0005B8, "Member 'UGizmoLineHandleComponent::Direction' has a wrong offset!");
static_assert(offsetof(UGizmoLineHandleComponent, Length) == 0x0005D0, "Member 'UGizmoLineHandleComponent::Length' has a wrong offset!");
static_assert(offsetof(UGizmoLineHandleComponent, bImageScale) == 0x0005D4, "Member 'UGizmoLineHandleComponent::bImageScale' has a wrong offset!");

class UGizmoRectangleComponent final : public UGizmoBaseComponent
{
public:
	struct FVector                                DirectionX;
	struct FVector                                DirectionY;
	bool                                          bOrientYAccordingToCamera;
	uint8                                         Pad_5C9[0x3];
	float                                         OffsetX;
	float                                         OffsetY;
	float                                         LengthX;
	float                                         LengthY;
	float                                         Thickness;
	uint8                                         SegmentFlags;
	uint8                                         Pad_5E1[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoRectangleComponent">();
	}
	static class UGizmoRectangleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoRectangleComponent>();
	}
};
static_assert(alignof(UGizmoRectangleComponent) == 0x000010, "Wrong alignment on UGizmoRectangleComponent");
static_assert(sizeof(UGizmoRectangleComponent) == 0x0005F0, "Wrong size on UGizmoRectangleComponent");
static_assert(offsetof(UGizmoRectangleComponent, DirectionX) == 0x000598, "Member 'UGizmoRectangleComponent::DirectionX' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, DirectionY) == 0x0005B0, "Member 'UGizmoRectangleComponent::DirectionY' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, bOrientYAccordingToCamera) == 0x0005C8, "Member 'UGizmoRectangleComponent::bOrientYAccordingToCamera' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, OffsetX) == 0x0005CC, "Member 'UGizmoRectangleComponent::OffsetX' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, OffsetY) == 0x0005D0, "Member 'UGizmoRectangleComponent::OffsetY' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, LengthX) == 0x0005D4, "Member 'UGizmoRectangleComponent::LengthX' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, LengthY) == 0x0005D8, "Member 'UGizmoRectangleComponent::LengthY' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, Thickness) == 0x0005DC, "Member 'UGizmoRectangleComponent::Thickness' has a wrong offset!");
static_assert(offsetof(UGizmoRectangleComponent, SegmentFlags) == 0x0005E0, "Member 'UGizmoRectangleComponent::SegmentFlags' has a wrong offset!");

class UGizmoViewContext final : public UObject
{
public:
	uint8                                         Pad_28[0x1B8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoViewContext">();
	}
	static class UGizmoViewContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoViewContext>();
	}
};
static_assert(alignof(UGizmoViewContext) == 0x000008, "Wrong alignment on UGizmoViewContext");
static_assert(sizeof(UGizmoViewContext) == 0x0001E0, "Wrong size on UGizmoViewContext");

class UGizmoLambdaHitTarget final : public UObject
{
public:
	uint8                                         Pad_28[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoLambdaHitTarget">();
	}
	static class UGizmoLambdaHitTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoLambdaHitTarget>();
	}
};
static_assert(alignof(UGizmoLambdaHitTarget) == 0x000008, "Wrong alignment on UGizmoLambdaHitTarget");
static_assert(sizeof(UGizmoLambdaHitTarget) == 0x0000F0, "Wrong size on UGizmoLambdaHitTarget");

class alignas(0x10) UGizmoComponentHitTarget final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UPrimitiveComponent*                    Component;
	uint8                                         Pad_38[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoComponentHitTarget">();
	}
	static class UGizmoComponentHitTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoComponentHitTarget>();
	}
};
static_assert(alignof(UGizmoComponentHitTarget) == 0x000010, "Wrong alignment on UGizmoComponentHitTarget");
static_assert(sizeof(UGizmoComponentHitTarget) == 0x000100, "Wrong size on UGizmoComponentHitTarget");
static_assert(offsetof(UGizmoComponentHitTarget, Component) == 0x000030, "Member 'UGizmoComponentHitTarget::Component' has a wrong offset!");

class AIntervalGizmoActor final : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*              UpIntervalComponent;
	class UGizmoLineHandleComponent*              DownIntervalComponent;
	class UGizmoLineHandleComponent*              ForwardIntervalComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IntervalGizmoActor">();
	}
	static class AIntervalGizmoActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AIntervalGizmoActor>();
	}
};
static_assert(alignof(AIntervalGizmoActor) == 0x000008, "Wrong alignment on AIntervalGizmoActor");
static_assert(sizeof(AIntervalGizmoActor) == 0x0002A8, "Wrong size on AIntervalGizmoActor");
static_assert(offsetof(AIntervalGizmoActor, UpIntervalComponent) == 0x000290, "Member 'AIntervalGizmoActor::UpIntervalComponent' has a wrong offset!");
static_assert(offsetof(AIntervalGizmoActor, DownIntervalComponent) == 0x000298, "Member 'AIntervalGizmoActor::DownIntervalComponent' has a wrong offset!");
static_assert(offsetof(AIntervalGizmoActor, ForwardIntervalComponent) == 0x0002A0, "Member 'AIntervalGizmoActor::ForwardIntervalComponent' has a wrong offset!");

class UIntervalGizmoBuilder final : public UInteractiveGizmoBuilder
{
public:
	uint8                                         Pad_28[0x98];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IntervalGizmoBuilder">();
	}
	static class UIntervalGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIntervalGizmoBuilder>();
	}
};
static_assert(alignof(UIntervalGizmoBuilder) == 0x000008, "Wrong alignment on UIntervalGizmoBuilder");
static_assert(sizeof(UIntervalGizmoBuilder) == 0x0000C0, "Wrong size on UIntervalGizmoBuilder");

class alignas(0x10) UIntervalGizmo final : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*       StateTarget;
	uint8                                         Pad_40[0x58];
	class UTransformProxy*                        TransformProxy;
	TArray<class UPrimitiveComponent*>            ActiveComponents;
	TArray<class UInteractiveGizmo*>              ActiveGizmos;
	uint8                                         Pad_C0[0x18];
	class UGizmoComponentAxisSource*              AxisYSource;
	class UGizmoComponentAxisSource*              AxisZSource;
	uint8                                         Pad_E8[0x118];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IntervalGizmo">();
	}
	static class UIntervalGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIntervalGizmo>();
	}
};
static_assert(alignof(UIntervalGizmo) == 0x000010, "Wrong alignment on UIntervalGizmo");
static_assert(sizeof(UIntervalGizmo) == 0x000200, "Wrong size on UIntervalGizmo");
static_assert(offsetof(UIntervalGizmo, StateTarget) == 0x000038, "Member 'UIntervalGizmo::StateTarget' has a wrong offset!");
static_assert(offsetof(UIntervalGizmo, TransformProxy) == 0x000098, "Member 'UIntervalGizmo::TransformProxy' has a wrong offset!");
static_assert(offsetof(UIntervalGizmo, ActiveComponents) == 0x0000A0, "Member 'UIntervalGizmo::ActiveComponents' has a wrong offset!");
static_assert(offsetof(UIntervalGizmo, ActiveGizmos) == 0x0000B0, "Member 'UIntervalGizmo::ActiveGizmos' has a wrong offset!");
static_assert(offsetof(UIntervalGizmo, AxisYSource) == 0x0000D8, "Member 'UIntervalGizmo::AxisYSource' has a wrong offset!");
static_assert(offsetof(UIntervalGizmo, AxisZSource) == 0x0000E0, "Member 'UIntervalGizmo::AxisZSource' has a wrong offset!");

class UGizmoAxisIntervalParameterSource final : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoFloatParameterSource> FloatParameterSource;
	float                                         MinParameter;
	float                                         MaxParameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoAxisIntervalParameterSource">();
	}
	static class UGizmoAxisIntervalParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoAxisIntervalParameterSource>();
	}
};
static_assert(alignof(UGizmoAxisIntervalParameterSource) == 0x000008, "Wrong alignment on UGizmoAxisIntervalParameterSource");
static_assert(sizeof(UGizmoAxisIntervalParameterSource) == 0x000060, "Wrong size on UGizmoAxisIntervalParameterSource");
static_assert(offsetof(UGizmoAxisIntervalParameterSource, FloatParameterSource) == 0x000048, "Member 'UGizmoAxisIntervalParameterSource::FloatParameterSource' has a wrong offset!");
static_assert(offsetof(UGizmoAxisIntervalParameterSource, MinParameter) == 0x000058, "Member 'UGizmoAxisIntervalParameterSource::MinParameter' has a wrong offset!");
static_assert(offsetof(UGizmoAxisIntervalParameterSource, MaxParameter) == 0x00005C, "Member 'UGizmoAxisIntervalParameterSource::MaxParameter' has a wrong offset!");

class UGizmoLocalFloatParameterSource final : public UGizmoBaseFloatParameterSource
{
public:
	float                                         Value;
	struct FGizmoFloatParameterChange             LastChange;
	uint8                                         Pad_54[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoLocalFloatParameterSource">();
	}
	static class UGizmoLocalFloatParameterSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoLocalFloatParameterSource>();
	}
};
static_assert(alignof(UGizmoLocalFloatParameterSource) == 0x000008, "Wrong alignment on UGizmoLocalFloatParameterSource");
static_assert(sizeof(UGizmoLocalFloatParameterSource) == 0x000058, "Wrong size on UGizmoLocalFloatParameterSource");
static_assert(offsetof(UGizmoLocalFloatParameterSource, Value) == 0x000048, "Member 'UGizmoLocalFloatParameterSource::Value' has a wrong offset!");
static_assert(offsetof(UGizmoLocalFloatParameterSource, LastChange) == 0x00004C, "Member 'UGizmoLocalFloatParameterSource::LastChange' has a wrong offset!");

class UPlanePositionGizmoBuilder final : public UInteractiveGizmoBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlanePositionGizmoBuilder">();
	}
	static class UPlanePositionGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlanePositionGizmoBuilder>();
	}
};
static_assert(alignof(UPlanePositionGizmoBuilder) == 0x000008, "Wrong alignment on UPlanePositionGizmoBuilder");
static_assert(sizeof(UPlanePositionGizmoBuilder) == 0x000028, "Wrong size on UPlanePositionGizmoBuilder");

class alignas(0x10) UPlanePositionGizmo final : public UInteractiveGizmo
{
public:
	uint8                                         Pad_38[0x10];
	TScriptInterface<class IGizmoAxisSource>      AxisSource;
	TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;
	TScriptInterface<class IGizmoClickTarget>     HitTarget;
	TScriptInterface<class IGizmoStateTarget>     StateTarget;
	class UClickDragInputBehavior*                MouseBehavior;
	bool                                          bEnableSignedAxis;
	bool                                          bFlipX;
	bool                                          bFlipY;
	uint8                                         Pad_93[0x8D];
	bool                                          bInInteraction;
	uint8                                         Pad_121[0x7];
	struct FVector                                InteractionOrigin;
	struct FVector                                InteractionNormal;
	struct FVector                                InteractionAxisX;
	struct FVector                                InteractionAxisY;
	struct FVector                                InteractionStartPoint;
	struct FVector                                InteractionCurPoint;
	struct FVector2D                              InteractionStartParameter;
	struct FVector2D                              InteractionCurParameter;
	struct FVector2D                              ParameterSigns;
	uint8                                         Pad_1E8[0x88];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlanePositionGizmo">();
	}
	static class UPlanePositionGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlanePositionGizmo>();
	}
};
static_assert(alignof(UPlanePositionGizmo) == 0x000010, "Wrong alignment on UPlanePositionGizmo");
static_assert(sizeof(UPlanePositionGizmo) == 0x000270, "Wrong size on UPlanePositionGizmo");
static_assert(offsetof(UPlanePositionGizmo, AxisSource) == 0x000048, "Member 'UPlanePositionGizmo::AxisSource' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, ParameterSource) == 0x000058, "Member 'UPlanePositionGizmo::ParameterSource' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, HitTarget) == 0x000068, "Member 'UPlanePositionGizmo::HitTarget' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, StateTarget) == 0x000078, "Member 'UPlanePositionGizmo::StateTarget' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, MouseBehavior) == 0x000088, "Member 'UPlanePositionGizmo::MouseBehavior' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, bEnableSignedAxis) == 0x000090, "Member 'UPlanePositionGizmo::bEnableSignedAxis' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, bFlipX) == 0x000091, "Member 'UPlanePositionGizmo::bFlipX' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, bFlipY) == 0x000092, "Member 'UPlanePositionGizmo::bFlipY' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, bInInteraction) == 0x000120, "Member 'UPlanePositionGizmo::bInInteraction' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionOrigin) == 0x000128, "Member 'UPlanePositionGizmo::InteractionOrigin' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionNormal) == 0x000140, "Member 'UPlanePositionGizmo::InteractionNormal' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisX) == 0x000158, "Member 'UPlanePositionGizmo::InteractionAxisX' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisY) == 0x000170, "Member 'UPlanePositionGizmo::InteractionAxisY' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionStartPoint) == 0x000188, "Member 'UPlanePositionGizmo::InteractionStartPoint' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionCurPoint) == 0x0001A0, "Member 'UPlanePositionGizmo::InteractionCurPoint' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionStartParameter) == 0x0001B8, "Member 'UPlanePositionGizmo::InteractionStartParameter' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, InteractionCurParameter) == 0x0001C8, "Member 'UPlanePositionGizmo::InteractionCurParameter' has a wrong offset!");
static_assert(offsetof(UPlanePositionGizmo, ParameterSigns) == 0x0001D8, "Member 'UPlanePositionGizmo::ParameterSigns' has a wrong offset!");

class URepositionableTransformGizmoBuilder final : public UCombinedTransformGizmoBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RepositionableTransformGizmoBuilder">();
	}
	static class URepositionableTransformGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<URepositionableTransformGizmoBuilder>();
	}
};
static_assert(alignof(URepositionableTransformGizmoBuilder) == 0x000008, "Wrong alignment on URepositionableTransformGizmoBuilder");
static_assert(sizeof(URepositionableTransformGizmoBuilder) == 0x0000F0, "Wrong size on URepositionableTransformGizmoBuilder");

class URepositionableTransformGizmo final : public UCombinedTransformGizmo
{
public:
	uint8                                         Pad_3A0[0x90];
	class UGizmoTransformChangeStateTarget*       RepositionStateTarget;
	uint8                                         Pad_438[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RepositionableTransformGizmo">();
	}
	static class URepositionableTransformGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<URepositionableTransformGizmo>();
	}
};
static_assert(alignof(URepositionableTransformGizmo) == 0x000010, "Wrong alignment on URepositionableTransformGizmo");
static_assert(sizeof(URepositionableTransformGizmo) == 0x000440, "Wrong size on URepositionableTransformGizmo");
static_assert(offsetof(URepositionableTransformGizmo, RepositionStateTarget) == 0x000430, "Member 'URepositionableTransformGizmo::RepositionStateTarget' has a wrong offset!");

class UScalableSphereGizmoBuilder final : public UInteractiveGizmoBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScalableSphereGizmoBuilder">();
	}
	static class UScalableSphereGizmoBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScalableSphereGizmoBuilder>();
	}
};
static_assert(alignof(UScalableSphereGizmoBuilder) == 0x000008, "Wrong alignment on UScalableSphereGizmoBuilder");
static_assert(sizeof(UScalableSphereGizmoBuilder) == 0x000028, "Wrong size on UScalableSphereGizmoBuilder");

class alignas(0x10) UScalableSphereGizmo final : public UInteractiveGizmo
{
public:
	uint8                                         Pad_38[0x48];
	float                                         HitErrorThreshold;
	uint8                                         Pad_84[0x4];
	class FText                                   TransactionDescription;
	float                                         Radius;
	bool                                          bIsHovering;
	bool                                          bIsDragging;
	uint8                                         Pad_A6[0x2];
	class UTransformProxy*                        ActiveTarget;
	struct FVector                                ActiveAxis;
	struct FVector                                DragStartWorldPosition;
	struct FVector                                DragCurrentPositionProjected;
	float                                         InteractionStartParameter;
	uint8                                         Pad_FC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScalableSphereGizmo">();
	}
	static class UScalableSphereGizmo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScalableSphereGizmo>();
	}
};
static_assert(alignof(UScalableSphereGizmo) == 0x000010, "Wrong alignment on UScalableSphereGizmo");
static_assert(sizeof(UScalableSphereGizmo) == 0x000100, "Wrong size on UScalableSphereGizmo");
static_assert(offsetof(UScalableSphereGizmo, HitErrorThreshold) == 0x000080, "Member 'UScalableSphereGizmo::HitErrorThreshold' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, TransactionDescription) == 0x000088, "Member 'UScalableSphereGizmo::TransactionDescription' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, Radius) == 0x0000A0, "Member 'UScalableSphereGizmo::Radius' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, bIsHovering) == 0x0000A4, "Member 'UScalableSphereGizmo::bIsHovering' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, bIsDragging) == 0x0000A5, "Member 'UScalableSphereGizmo::bIsDragging' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, ActiveTarget) == 0x0000A8, "Member 'UScalableSphereGizmo::ActiveTarget' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, ActiveAxis) == 0x0000B0, "Member 'UScalableSphereGizmo::ActiveAxis' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, DragStartWorldPosition) == 0x0000C8, "Member 'UScalableSphereGizmo::DragStartWorldPosition' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, DragCurrentPositionProjected) == 0x0000E0, "Member 'UScalableSphereGizmo::DragCurrentPositionProjected' has a wrong offset!");
static_assert(offsetof(UScalableSphereGizmo, InteractionStartParameter) == 0x0000F8, "Member 'UScalableSphereGizmo::InteractionStartParameter' has a wrong offset!");

class UScalableSphereGizmoInputBehavior final : public UAnyButtonInputBehavior
{
public:
	uint8                                         Pad_80[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScalableSphereGizmoInputBehavior">();
	}
	static class UScalableSphereGizmoInputBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScalableSphereGizmoInputBehavior>();
	}
};
static_assert(alignof(UScalableSphereGizmoInputBehavior) == 0x000008, "Wrong alignment on UScalableSphereGizmoInputBehavior");
static_assert(sizeof(UScalableSphereGizmoInputBehavior) == 0x0000D0, "Wrong size on UScalableSphereGizmoInputBehavior");

class UGizmoNilStateTarget final : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoNilStateTarget">();
	}
	static class UGizmoNilStateTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoNilStateTarget>();
	}
};
static_assert(alignof(UGizmoNilStateTarget) == 0x000008, "Wrong alignment on UGizmoNilStateTarget");
static_assert(sizeof(UGizmoNilStateTarget) == 0x000030, "Wrong size on UGizmoNilStateTarget");

class UGizmoLambdaStateTarget final : public UObject
{
public:
	uint8                                         Pad_28[0x88];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoLambdaStateTarget">();
	}
	static class UGizmoLambdaStateTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoLambdaStateTarget>();
	}
};
static_assert(alignof(UGizmoLambdaStateTarget) == 0x000008, "Wrong alignment on UGizmoLambdaStateTarget");
static_assert(sizeof(UGizmoLambdaStateTarget) == 0x0000B0, "Wrong size on UGizmoLambdaStateTarget");

class UGizmoObjectModifyStateTarget final : public UObject
{
public:
	uint8                                         Pad_28[0x28];
	TScriptInterface<class IToolContextTransactionProvider> TransactionManager;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoObjectModifyStateTarget">();
	}
	static class UGizmoObjectModifyStateTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoObjectModifyStateTarget>();
	}
};
static_assert(alignof(UGizmoObjectModifyStateTarget) == 0x000008, "Wrong alignment on UGizmoObjectModifyStateTarget");
static_assert(sizeof(UGizmoObjectModifyStateTarget) == 0x000060, "Wrong size on UGizmoObjectModifyStateTarget");
static_assert(offsetof(UGizmoObjectModifyStateTarget, TransactionManager) == 0x000050, "Member 'UGizmoObjectModifyStateTarget::TransactionManager' has a wrong offset!");

class alignas(0x10) UGizmoTransformChangeStateTarget final : public UObject
{
public:
	uint8                                         Pad_28[0x28];
	TScriptInterface<class IToolContextTransactionProvider> TransactionManager;
	uint8                                         Pad_60[0xE0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoTransformChangeStateTarget">();
	}
	static class UGizmoTransformChangeStateTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoTransformChangeStateTarget>();
	}
};
static_assert(alignof(UGizmoTransformChangeStateTarget) == 0x000010, "Wrong alignment on UGizmoTransformChangeStateTarget");
static_assert(sizeof(UGizmoTransformChangeStateTarget) == 0x000140, "Wrong size on UGizmoTransformChangeStateTarget");
static_assert(offsetof(UGizmoTransformChangeStateTarget, TransactionManager) == 0x000050, "Member 'UGizmoTransformChangeStateTarget::TransactionManager' has a wrong offset!");

class UCombinedTransformGizmoContextObject final : public UObject
{
public:
	uint8                                         Pad_28[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CombinedTransformGizmoContextObject">();
	}
	static class UCombinedTransformGizmoContextObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCombinedTransformGizmoContextObject>();
	}
};
static_assert(alignof(UCombinedTransformGizmoContextObject) == 0x000008, "Wrong alignment on UCombinedTransformGizmoContextObject");
static_assert(sizeof(UCombinedTransformGizmoContextObject) == 0x000058, "Wrong size on UCombinedTransformGizmoContextObject");

class UTransformProxy final : public UObject
{
public:
	uint8                                         Pad_28[0xA8];
	bool                                          bRotatePerObject;
	bool                                          bSetPivotMode;
	uint8                                         Pad_D2[0x1E];
	struct FTransform                             SharedTransform;
	struct FTransform                             InitialSharedTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TransformProxy">();
	}
	static class UTransformProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTransformProxy>();
	}
};
static_assert(alignof(UTransformProxy) == 0x000010, "Wrong alignment on UTransformProxy");
static_assert(sizeof(UTransformProxy) == 0x0001B0, "Wrong size on UTransformProxy");
static_assert(offsetof(UTransformProxy, bRotatePerObject) == 0x0000D0, "Member 'UTransformProxy::bRotatePerObject' has a wrong offset!");
static_assert(offsetof(UTransformProxy, bSetPivotMode) == 0x0000D1, "Member 'UTransformProxy::bSetPivotMode' has a wrong offset!");
static_assert(offsetof(UTransformProxy, SharedTransform) == 0x0000F0, "Member 'UTransformProxy::SharedTransform' has a wrong offset!");
static_assert(offsetof(UTransformProxy, InitialSharedTransform) == 0x000150, "Member 'UTransformProxy::InitialSharedTransform' has a wrong offset!");

class UGizmoBaseTransformSource : public UObject
{
public:
	uint8                                         Pad_28[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoBaseTransformSource">();
	}
	static class UGizmoBaseTransformSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoBaseTransformSource>();
	}
};
static_assert(alignof(UGizmoBaseTransformSource) == 0x000008, "Wrong alignment on UGizmoBaseTransformSource");
static_assert(sizeof(UGizmoBaseTransformSource) == 0x000048, "Wrong size on UGizmoBaseTransformSource");

class UGizmoComponentWorldTransformSource final : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                        Component;
	bool                                          bModifyComponentOnTransform;
	uint8                                         Pad_51[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoComponentWorldTransformSource">();
	}
	static class UGizmoComponentWorldTransformSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoComponentWorldTransformSource>();
	}
};
static_assert(alignof(UGizmoComponentWorldTransformSource) == 0x000008, "Wrong alignment on UGizmoComponentWorldTransformSource");
static_assert(sizeof(UGizmoComponentWorldTransformSource) == 0x000058, "Wrong size on UGizmoComponentWorldTransformSource");
static_assert(offsetof(UGizmoComponentWorldTransformSource, Component) == 0x000048, "Member 'UGizmoComponentWorldTransformSource::Component' has a wrong offset!");
static_assert(offsetof(UGizmoComponentWorldTransformSource, bModifyComponentOnTransform) == 0x000050, "Member 'UGizmoComponentWorldTransformSource::bModifyComponentOnTransform' has a wrong offset!");

class alignas(0x10) UGizmoScaledTransformSource final : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class IGizmoTransformSource> ChildTransformSource;
	uint8                                         Pad_58[0x88];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoScaledTransformSource">();
	}
	static class UGizmoScaledTransformSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoScaledTransformSource>();
	}
};
static_assert(alignof(UGizmoScaledTransformSource) == 0x000010, "Wrong alignment on UGizmoScaledTransformSource");
static_assert(sizeof(UGizmoScaledTransformSource) == 0x0000E0, "Wrong size on UGizmoScaledTransformSource");
static_assert(offsetof(UGizmoScaledTransformSource, ChildTransformSource) == 0x000048, "Member 'UGizmoScaledTransformSource::ChildTransformSource' has a wrong offset!");

class UGizmoTransformProxyTransformSource final : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                        Proxy;
	uint8                                         Pad_50[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoTransformProxyTransformSource">();
	}
	static class UGizmoTransformProxyTransformSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoTransformProxyTransformSource>();
	}
};
static_assert(alignof(UGizmoTransformProxyTransformSource) == 0x000008, "Wrong alignment on UGizmoTransformProxyTransformSource");
static_assert(sizeof(UGizmoTransformProxyTransformSource) == 0x000070, "Wrong size on UGizmoTransformProxyTransformSource");
static_assert(offsetof(UGizmoTransformProxyTransformSource, Proxy) == 0x000048, "Member 'UGizmoTransformProxyTransformSource::Proxy' has a wrong offset!");

class UGizmoScaledAndUnscaledTransformSources final : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class IGizmoTransformSource> ScaledTransformSource;
	TScriptInterface<class IGizmoTransformSource> UnscaledTransformSource;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GizmoScaledAndUnscaledTransformSources">();
	}
	static class UGizmoScaledAndUnscaledTransformSources* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGizmoScaledAndUnscaledTransformSources>();
	}
};
static_assert(alignof(UGizmoScaledAndUnscaledTransformSources) == 0x000008, "Wrong alignment on UGizmoScaledAndUnscaledTransformSources");
static_assert(sizeof(UGizmoScaledAndUnscaledTransformSources) == 0x000068, "Wrong size on UGizmoScaledAndUnscaledTransformSources");
static_assert(offsetof(UGizmoScaledAndUnscaledTransformSources, ScaledTransformSource) == 0x000048, "Member 'UGizmoScaledAndUnscaledTransformSources::ScaledTransformSource' has a wrong offset!");
static_assert(offsetof(UGizmoScaledAndUnscaledTransformSources, UnscaledTransformSource) == 0x000058, "Member 'UGizmoScaledAndUnscaledTransformSources::UnscaledTransformSource' has a wrong offset!");

class UInteractiveToolPropertySet : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	TMap<class FString, class UInteractiveToolPropertySet*> CachedPropertiesMap;
	bool                                          bIsPropertySetEnabled;
	uint8                                         Pad_89[0x1F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolPropertySet">();
	}
	static class UInteractiveToolPropertySet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveToolPropertySet>();
	}
};
static_assert(alignof(UInteractiveToolPropertySet) == 0x000008, "Wrong alignment on UInteractiveToolPropertySet");
static_assert(sizeof(UInteractiveToolPropertySet) == 0x0000A8, "Wrong size on UInteractiveToolPropertySet");
static_assert(offsetof(UInteractiveToolPropertySet, CachedPropertiesMap) == 0x000038, "Member 'UInteractiveToolPropertySet::CachedPropertiesMap' has a wrong offset!");
static_assert(offsetof(UInteractiveToolPropertySet, bIsPropertySetEnabled) == 0x000088, "Member 'UInteractiveToolPropertySet::bIsPropertySetEnabled' has a wrong offset!");

class UBrushBaseProperties final : public UInteractiveToolPropertySet
{
public:
	float                                         BrushSize;
	bool                                          bSpecifyRadius;
	uint8                                         Pad_AD[0x3];
	float                                         BrushRadius;
	float                                         BrushStrength;
	float                                         BrushFalloffAmount;
	bool                                          bShowStrength;
	bool                                          bShowFalloff;
	uint8                                         Pad_BE[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BrushBaseProperties">();
	}
	static class UBrushBaseProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBrushBaseProperties>();
	}
};
static_assert(alignof(UBrushBaseProperties) == 0x000008, "Wrong alignment on UBrushBaseProperties");
static_assert(sizeof(UBrushBaseProperties) == 0x0000C0, "Wrong size on UBrushBaseProperties");
static_assert(offsetof(UBrushBaseProperties, BrushSize) == 0x0000A8, "Member 'UBrushBaseProperties::BrushSize' has a wrong offset!");
static_assert(offsetof(UBrushBaseProperties, bSpecifyRadius) == 0x0000AC, "Member 'UBrushBaseProperties::bSpecifyRadius' has a wrong offset!");
static_assert(offsetof(UBrushBaseProperties, BrushRadius) == 0x0000B0, "Member 'UBrushBaseProperties::BrushRadius' has a wrong offset!");
static_assert(offsetof(UBrushBaseProperties, BrushStrength) == 0x0000B4, "Member 'UBrushBaseProperties::BrushStrength' has a wrong offset!");
static_assert(offsetof(UBrushBaseProperties, BrushFalloffAmount) == 0x0000B8, "Member 'UBrushBaseProperties::BrushFalloffAmount' has a wrong offset!");
static_assert(offsetof(UBrushBaseProperties, bShowStrength) == 0x0000BC, "Member 'UBrushBaseProperties::bShowStrength' has a wrong offset!");
static_assert(offsetof(UBrushBaseProperties, bShowFalloff) == 0x0000BD, "Member 'UBrushBaseProperties::bShowFalloff' has a wrong offset!");

class UInteractiveTool : public UObject
{
public:
	uint8                                         Pad_28[0x38];
	class UInputBehaviorSet*                      InputBehaviors;
	TArray<class UObject*>                        ToolPropertyObjects;
	uint8                                         Pad_78[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveTool">();
	}
	static class UInteractiveTool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveTool>();
	}
};
static_assert(alignof(UInteractiveTool) == 0x000008, "Wrong alignment on UInteractiveTool");
static_assert(sizeof(UInteractiveTool) == 0x000098, "Wrong size on UInteractiveTool");
static_assert(offsetof(UInteractiveTool, InputBehaviors) == 0x000060, "Member 'UInteractiveTool::InputBehaviors' has a wrong offset!");
static_assert(offsetof(UInteractiveTool, ToolPropertyObjects) == 0x000068, "Member 'UInteractiveTool::ToolPropertyObjects' has a wrong offset!");

class USingleSelectionTool : public UInteractiveTool
{
public:
	uint8                                         Pad_98[0x8];
	class UToolTarget*                            Target;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleSelectionTool">();
	}
	static class USingleSelectionTool* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleSelectionTool>();
	}
};
static_assert(alignof(USingleSelectionTool) == 0x000008, "Wrong alignment on USingleSelectionTool");
static_assert(sizeof(USingleSelectionTool) == 0x0000A8, "Wrong size on USingleSelectionTool");
static_assert(offsetof(USingleSelectionTool, Target) == 0x0000A0, "Member 'USingleSelectionTool::Target' has a wrong offset!");

class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	uint8                                         Pad_A8[0x50];
	TWeakObjectPtr<class UWorld>                  TargetWorld;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshSurfacePointTool">();
	}
	static class UMeshSurfacePointTool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshSurfacePointTool>();
	}
};
static_assert(alignof(UMeshSurfacePointTool) == 0x000008, "Wrong alignment on UMeshSurfacePointTool");
static_assert(sizeof(UMeshSurfacePointTool) == 0x000100, "Wrong size on UMeshSurfacePointTool");
static_assert(offsetof(UMeshSurfacePointTool, TargetWorld) == 0x0000F8, "Member 'UMeshSurfacePointTool::TargetWorld' has a wrong offset!");

class UBaseBrushTool final : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                   BrushProperties;
	bool                                          bInBrushStroke;
	uint8                                         Pad_109[0x3];
	float                                         WorldToLocalScale;
	struct FBrushStampData                        LastBrushStamp;
	uint8                                         Pad_230[0x10];
	TSoftClassPtr<class UClass>                   PropertyClass;
	class UBrushStampIndicator*                   BrushStampIndicator;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseBrushTool">();
	}
	static class UBaseBrushTool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseBrushTool>();
	}
};
static_assert(alignof(UBaseBrushTool) == 0x000008, "Wrong alignment on UBaseBrushTool");
static_assert(sizeof(UBaseBrushTool) == 0x000270, "Wrong size on UBaseBrushTool");
static_assert(offsetof(UBaseBrushTool, BrushProperties) == 0x000100, "Member 'UBaseBrushTool::BrushProperties' has a wrong offset!");
static_assert(offsetof(UBaseBrushTool, bInBrushStroke) == 0x000108, "Member 'UBaseBrushTool::bInBrushStroke' has a wrong offset!");
static_assert(offsetof(UBaseBrushTool, WorldToLocalScale) == 0x00010C, "Member 'UBaseBrushTool::WorldToLocalScale' has a wrong offset!");
static_assert(offsetof(UBaseBrushTool, LastBrushStamp) == 0x000110, "Member 'UBaseBrushTool::LastBrushStamp' has a wrong offset!");
static_assert(offsetof(UBaseBrushTool, PropertyClass) == 0x000240, "Member 'UBaseBrushTool::PropertyClass' has a wrong offset!");
static_assert(offsetof(UBaseBrushTool, BrushStampIndicator) == 0x000268, "Member 'UBaseBrushTool::BrushStampIndicator' has a wrong offset!");

class UInteractiveToolBuilder : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolBuilder">();
	}
	static class UInteractiveToolBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveToolBuilder>();
	}
};
static_assert(alignof(UInteractiveToolBuilder) == 0x000008, "Wrong alignment on UInteractiveToolBuilder");
static_assert(sizeof(UInteractiveToolBuilder) == 0x000028, "Wrong size on UInteractiveToolBuilder");

class UClickDragToolBuilder final : public UInteractiveToolBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClickDragToolBuilder">();
	}
	static class UClickDragToolBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClickDragToolBuilder>();
	}
};
static_assert(alignof(UClickDragToolBuilder) == 0x000008, "Wrong alignment on UClickDragToolBuilder");
static_assert(sizeof(UClickDragToolBuilder) == 0x000028, "Wrong size on UClickDragToolBuilder");

class UClickDragTool final : public UInteractiveTool
{
public:
	uint8                                         Pad_98[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClickDragTool">();
	}
	static class UClickDragTool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClickDragTool>();
	}
};
static_assert(alignof(UClickDragTool) == 0x000008, "Wrong alignment on UClickDragTool");
static_assert(sizeof(UClickDragTool) == 0x0000A0, "Wrong size on UClickDragTool");

class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolWithToolTargetsBuilder">();
	}
	static class UInteractiveToolWithToolTargetsBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveToolWithToolTargetsBuilder>();
	}
};
static_assert(alignof(UInteractiveToolWithToolTargetsBuilder) == 0x000008, "Wrong alignment on UInteractiveToolWithToolTargetsBuilder");
static_assert(sizeof(UInteractiveToolWithToolTargetsBuilder) == 0x000028, "Wrong size on UInteractiveToolWithToolTargetsBuilder");

class UMeshSurfacePointToolBuilder final : public UInteractiveToolWithToolTargetsBuilder
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshSurfacePointToolBuilder">();
	}
	static class UMeshSurfacePointToolBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshSurfacePointToolBuilder>();
	}
};
static_assert(alignof(UMeshSurfacePointToolBuilder) == 0x000008, "Wrong alignment on UMeshSurfacePointToolBuilder");
static_assert(sizeof(UMeshSurfacePointToolBuilder) == 0x000030, "Wrong size on UMeshSurfacePointToolBuilder");

class USingleClickToolBuilder final : public UInteractiveToolBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleClickToolBuilder">();
	}
	static class USingleClickToolBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleClickToolBuilder>();
	}
};
static_assert(alignof(USingleClickToolBuilder) == 0x000008, "Wrong alignment on USingleClickToolBuilder");
static_assert(sizeof(USingleClickToolBuilder) == 0x000028, "Wrong size on USingleClickToolBuilder");

class USingleClickTool final : public UInteractiveTool
{
public:
	uint8                                         Pad_98[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleClickTool">();
	}
	static class USingleClickTool* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleClickTool>();
	}
};
static_assert(alignof(USingleClickTool) == 0x000008, "Wrong alignment on USingleClickTool");
static_assert(sizeof(USingleClickTool) == 0x0000A0, "Wrong size on USingleClickTool");

class UContextObjectStore final : public UObject
{
public:
	TArray<class UObject*>                        ContextObjects;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextObjectStore">();
	}
	static class UContextObjectStore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextObjectStore>();
	}
};
static_assert(alignof(UContextObjectStore) == 0x000008, "Wrong alignment on UContextObjectStore");
static_assert(sizeof(UContextObjectStore) == 0x000038, "Wrong size on UContextObjectStore");
static_assert(offsetof(UContextObjectStore, ContextObjects) == 0x000028, "Member 'UContextObjectStore::ContextObjects' has a wrong offset!");

class UInputBehaviorSet final : public UObject
{
public:
	TArray<struct FBehaviorInfo>                  Behaviors;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputBehaviorSet">();
	}
	static class UInputBehaviorSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputBehaviorSet>();
	}
};
static_assert(alignof(UInputBehaviorSet) == 0x000008, "Wrong alignment on UInputBehaviorSet");
static_assert(sizeof(UInputBehaviorSet) == 0x000038, "Wrong size on UInputBehaviorSet");
static_assert(offsetof(UInputBehaviorSet, Behaviors) == 0x000028, "Member 'UInputBehaviorSet::Behaviors' has a wrong offset!");

class IInputBehaviorSource final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputBehaviorSource">();
	}
	static class IInputBehaviorSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInputBehaviorSource>();
	}
};
static_assert(alignof(IInputBehaviorSource) == 0x000008, "Wrong alignment on IInputBehaviorSource");
static_assert(sizeof(IInputBehaviorSource) == 0x000028, "Wrong size on IInputBehaviorSource");

class ULocalInputBehaviorSource final : public UObject
{
public:
	uint8                                         Pad_28[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocalInputBehaviorSource">();
	}
	static class ULocalInputBehaviorSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalInputBehaviorSource>();
	}
};
static_assert(alignof(ULocalInputBehaviorSource) == 0x000008, "Wrong alignment on ULocalInputBehaviorSource");
static_assert(sizeof(ULocalInputBehaviorSource) == 0x000070, "Wrong size on ULocalInputBehaviorSource");

class UInputRouter final : public UObject
{
public:
	bool                                          bAutoInvalidateOnHover;
	bool                                          bAutoInvalidateOnCapture;
	uint8                                         Pad_2A[0xE];
	class UInputBehaviorSet*                      ActiveInputBehaviors;
	uint8                                         Pad_40[0x150];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputRouter">();
	}
	static class UInputRouter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputRouter>();
	}
};
static_assert(alignof(UInputRouter) == 0x000008, "Wrong alignment on UInputRouter");
static_assert(sizeof(UInputRouter) == 0x000190, "Wrong size on UInputRouter");
static_assert(offsetof(UInputRouter, bAutoInvalidateOnHover) == 0x000028, "Member 'UInputRouter::bAutoInvalidateOnHover' has a wrong offset!");
static_assert(offsetof(UInputRouter, bAutoInvalidateOnCapture) == 0x000029, "Member 'UInputRouter::bAutoInvalidateOnCapture' has a wrong offset!");
static_assert(offsetof(UInputRouter, ActiveInputBehaviors) == 0x000038, "Member 'UInputRouter::ActiveInputBehaviors' has a wrong offset!");

class UInteractionMechanic final : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractionMechanic">();
	}
	static class UInteractionMechanic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractionMechanic>();
	}
};
static_assert(alignof(UInteractionMechanic) == 0x000008, "Wrong alignment on UInteractionMechanic");
static_assert(sizeof(UInteractionMechanic) == 0x000030, "Wrong size on UInteractionMechanic");

class UInteractiveGizmoManager final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<struct FActiveGizmo>                   ActiveGizmos;
	uint8                                         Pad_40[0x18];
	TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;
	uint8                                         Pad_A8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveGizmoManager">();
	}
	static class UInteractiveGizmoManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveGizmoManager>();
	}
};
static_assert(alignof(UInteractiveGizmoManager) == 0x000008, "Wrong alignment on UInteractiveGizmoManager");
static_assert(sizeof(UInteractiveGizmoManager) == 0x0000C0, "Wrong size on UInteractiveGizmoManager");
static_assert(offsetof(UInteractiveGizmoManager, ActiveGizmos) == 0x000030, "Member 'UInteractiveGizmoManager::ActiveGizmos' has a wrong offset!");
static_assert(offsetof(UInteractiveGizmoManager, GizmoBuilders) == 0x000058, "Member 'UInteractiveGizmoManager::GizmoBuilders' has a wrong offset!");

class UInteractiveToolManager final : public UObject
{
public:
	uint8                                         Pad_28[0x30];
	class UInteractiveTool*                       ActiveLeftTool;
	class UInteractiveTool*                       ActiveRightTool;
	uint8                                         Pad_68[0x80];
	TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;
	uint8                                         Pad_138[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolManager">();
	}
	static class UInteractiveToolManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveToolManager>();
	}
};
static_assert(alignof(UInteractiveToolManager) == 0x000008, "Wrong alignment on UInteractiveToolManager");
static_assert(sizeof(UInteractiveToolManager) == 0x000198, "Wrong size on UInteractiveToolManager");
static_assert(offsetof(UInteractiveToolManager, ActiveLeftTool) == 0x000058, "Member 'UInteractiveToolManager::ActiveLeftTool' has a wrong offset!");
static_assert(offsetof(UInteractiveToolManager, ActiveRightTool) == 0x000060, "Member 'UInteractiveToolManager::ActiveRightTool' has a wrong offset!");
static_assert(offsetof(UInteractiveToolManager, ToolBuilders) == 0x0000E8, "Member 'UInteractiveToolManager::ToolBuilders' has a wrong offset!");

class alignas(0x10) UInteractiveToolsContext final : public UObject
{
public:
	uint8                                         Pad_28[0x30];
	class UInputRouter*                           InputRouter;
	class UToolTargetManager*                     TargetManager;
	class UInteractiveToolManager*                ToolManager;
	class UInteractiveGizmoManager*               GizmoManager;
	class UContextObjectStore*                    ContextObjectStore;
	uint8                                         Pad_80[0x280];
	TSoftClassPtr<class UClass>                   ToolManagerClass;
	uint8                                         Pad_328[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveToolsContext">();
	}
	static class UInteractiveToolsContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveToolsContext>();
	}
};
static_assert(alignof(UInteractiveToolsContext) == 0x000010, "Wrong alignment on UInteractiveToolsContext");
static_assert(sizeof(UInteractiveToolsContext) == 0x000330, "Wrong size on UInteractiveToolsContext");
static_assert(offsetof(UInteractiveToolsContext, InputRouter) == 0x000058, "Member 'UInteractiveToolsContext::InputRouter' has a wrong offset!");
static_assert(offsetof(UInteractiveToolsContext, TargetManager) == 0x000060, "Member 'UInteractiveToolsContext::TargetManager' has a wrong offset!");
static_assert(offsetof(UInteractiveToolsContext, ToolManager) == 0x000068, "Member 'UInteractiveToolsContext::ToolManager' has a wrong offset!");
static_assert(offsetof(UInteractiveToolsContext, GizmoManager) == 0x000070, "Member 'UInteractiveToolsContext::GizmoManager' has a wrong offset!");
static_assert(offsetof(UInteractiveToolsContext, ContextObjectStore) == 0x000078, "Member 'UInteractiveToolsContext::ContextObjectStore' has a wrong offset!");
static_assert(offsetof(UInteractiveToolsContext, ToolManagerClass) == 0x000300, "Member 'UInteractiveToolsContext::ToolManagerClass' has a wrong offset!");

class UMultiSelectionTool final : public UInteractiveTool
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UToolTarget*>                    Targets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MultiSelectionTool">();
	}
	static class UMultiSelectionTool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiSelectionTool>();
	}
};
static_assert(alignof(UMultiSelectionTool) == 0x000008, "Wrong alignment on UMultiSelectionTool");
static_assert(sizeof(UMultiSelectionTool) == 0x0000B0, "Wrong size on UMultiSelectionTool");
static_assert(offsetof(UMultiSelectionTool, Targets) == 0x0000A0, "Member 'UMultiSelectionTool::Targets' has a wrong offset!");

class USceneSnappingManager final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SceneSnappingManager">();
	}
	static class USceneSnappingManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USceneSnappingManager>();
	}
};
static_assert(alignof(USceneSnappingManager) == 0x000008, "Wrong alignment on USceneSnappingManager");
static_assert(sizeof(USceneSnappingManager) == 0x000028, "Wrong size on USceneSnappingManager");

class USelectionSet : public UObject
{
public:
	uint8                                         Pad_28[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SelectionSet">();
	}
	static class USelectionSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectionSet>();
	}
};
static_assert(alignof(USelectionSet) == 0x000008, "Wrong alignment on USelectionSet");
static_assert(sizeof(USelectionSet) == 0x000040, "Wrong size on USelectionSet");

class UMeshSelectionSet final : public USelectionSet
{
public:
	TArray<int32>                                 Vertices;
	TArray<int32>                                 Edges;
	TArray<int32>                                 Faces;
	TArray<int32>                                 Groups;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshSelectionSet">();
	}
	static class UMeshSelectionSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshSelectionSet>();
	}
};
static_assert(alignof(UMeshSelectionSet) == 0x000008, "Wrong alignment on UMeshSelectionSet");
static_assert(sizeof(UMeshSelectionSet) == 0x000080, "Wrong size on UMeshSelectionSet");
static_assert(offsetof(UMeshSelectionSet, Vertices) == 0x000040, "Member 'UMeshSelectionSet::Vertices' has a wrong offset!");
static_assert(offsetof(UMeshSelectionSet, Edges) == 0x000050, "Member 'UMeshSelectionSet::Edges' has a wrong offset!");
static_assert(offsetof(UMeshSelectionSet, Faces) == 0x000060, "Member 'UMeshSelectionSet::Faces' has a wrong offset!");
static_assert(offsetof(UMeshSelectionSet, Groups) == 0x000070, "Member 'UMeshSelectionSet::Groups' has a wrong offset!");

class UToolTargetManager final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<class UToolTargetFactory*>             Factories;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToolTargetManager">();
	}
	static class UToolTargetManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToolTargetManager>();
	}
};
static_assert(alignof(UToolTargetManager) == 0x000008, "Wrong alignment on UToolTargetManager");
static_assert(sizeof(UToolTargetManager) == 0x000040, "Wrong size on UToolTargetManager");
static_assert(offsetof(UToolTargetManager, Factories) == 0x000030, "Member 'UToolTargetManager::Factories' has a wrong offset!");

}
