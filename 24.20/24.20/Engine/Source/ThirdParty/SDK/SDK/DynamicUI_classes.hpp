#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "DynamicUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class IDynamicUITransitionableWidgetInterface final : public IInterface
{
public:
	void BroadcastTransitionCompleted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUITransitionableWidgetInterface">();
	}
	static class IDynamicUITransitionableWidgetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDynamicUITransitionableWidgetInterface>();
	}
};
static_assert(alignof(IDynamicUITransitionableWidgetInterface) == 0x000008, "Wrong alignment on IDynamicUITransitionableWidgetInterface");
static_assert(sizeof(IDynamicUITransitionableWidgetInterface) == 0x000028, "Wrong size on IDynamicUITransitionableWidgetInterface");

class ADynamicUIDirectorBase : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	TArray<class UDynamicUIScene*>                DefaultScenes;
	TWeakObjectPtr<class ULocalPlayer>            OwningLocalPlayer;
	bool                                          bAddEventRouter;
	bool                                          bEnabledDuringReplay;
	uint8                                         Pad_2AA[0x6];
	class UGameplayEventRouterComponent*          EventRouter;

public:
	void AddScene(const class UDynamicUIScene* Scene);
	void RemoveScene(const class UDynamicUIScene* Scene);

	class UGameplayEventRouterComponent* GetOwnedEventRouter() const;
	class ULocalPlayer* GetOwningLocalPlayer() const;
	class APlayerController* GetOwningLocalPlayerController() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIDirectorBase">();
	}
	static class ADynamicUIDirectorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADynamicUIDirectorBase>();
	}
};
static_assert(alignof(ADynamicUIDirectorBase) == 0x000008, "Wrong alignment on ADynamicUIDirectorBase");
static_assert(sizeof(ADynamicUIDirectorBase) == 0x0002B8, "Wrong size on ADynamicUIDirectorBase");
static_assert(offsetof(ADynamicUIDirectorBase, DefaultScenes) == 0x000290, "Member 'ADynamicUIDirectorBase::DefaultScenes' has a wrong offset!");
static_assert(offsetof(ADynamicUIDirectorBase, OwningLocalPlayer) == 0x0002A0, "Member 'ADynamicUIDirectorBase::OwningLocalPlayer' has a wrong offset!");
static_assert(offsetof(ADynamicUIDirectorBase, bAddEventRouter) == 0x0002A8, "Member 'ADynamicUIDirectorBase::bAddEventRouter' has a wrong offset!");
static_assert(offsetof(ADynamicUIDirectorBase, bEnabledDuringReplay) == 0x0002A9, "Member 'ADynamicUIDirectorBase::bEnabledDuringReplay' has a wrong offset!");
static_assert(offsetof(ADynamicUIDirectorBase, EventRouter) == 0x0002B0, "Member 'ADynamicUIDirectorBase::EventRouter' has a wrong offset!");

class UDynamicUIConstraintBase : public UObject
{
public:
	uint8                                         Pad_28[0x48];
	struct FVector2D                              Offset;
	class UDynamicUIConstraintOverrideBase*       ConstraintOverride;
	uint8                                         bUseOffset : 1;
	uint8                                         bUseOverride : 1;
	uint8                                         Pad_89[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintBase">();
	}
	static class UDynamicUIConstraintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintBase>();
	}
};
static_assert(alignof(UDynamicUIConstraintBase) == 0x000008, "Wrong alignment on UDynamicUIConstraintBase");
static_assert(sizeof(UDynamicUIConstraintBase) == 0x000090, "Wrong size on UDynamicUIConstraintBase");
static_assert(offsetof(UDynamicUIConstraintBase, Offset) == 0x000070, "Member 'UDynamicUIConstraintBase::Offset' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintBase, ConstraintOverride) == 0x000080, "Member 'UDynamicUIConstraintBase::ConstraintOverride' has a wrong offset!");

class UDynamicUIConstraintPosition final : public UDynamicUIConstraintBase
{
public:
	struct FVector2D                              Position;
	EDynamicUIAnchor                              Anchor;
	uint8                                         bUseSafeZone : 1;
	uint8                                         Pad_A5[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintPosition">();
	}
	static class UDynamicUIConstraintPosition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintPosition>();
	}
};
static_assert(alignof(UDynamicUIConstraintPosition) == 0x000008, "Wrong alignment on UDynamicUIConstraintPosition");
static_assert(sizeof(UDynamicUIConstraintPosition) == 0x0000A8, "Wrong size on UDynamicUIConstraintPosition");
static_assert(offsetof(UDynamicUIConstraintPosition, Position) == 0x000090, "Member 'UDynamicUIConstraintPosition::Position' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintPosition, Anchor) == 0x0000A0, "Member 'UDynamicUIConstraintPosition::Anchor' has a wrong offset!");

class UDynamicUIConstraintAlignment final : public UDynamicUIConstraintBase
{
public:
	EHorizontalAlignment                          HorizontalAlignment;
	EVerticalAlignment                            VerticalAlignment;
	uint8                                         Pad_92[0x2];
	EDynamicUIAnchor                              Anchor;
	struct FDynamicUIAspectRatio                  MaxAspectRatio;
	uint8                                         bUseSafeZone : 1;
	uint8                                         bUseMaxAspectRatio : 1;
	uint8                                         Pad_A1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintAlignment">();
	}
	static class UDynamicUIConstraintAlignment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintAlignment>();
	}
};
static_assert(alignof(UDynamicUIConstraintAlignment) == 0x000008, "Wrong alignment on UDynamicUIConstraintAlignment");
static_assert(sizeof(UDynamicUIConstraintAlignment) == 0x0000A8, "Wrong size on UDynamicUIConstraintAlignment");
static_assert(offsetof(UDynamicUIConstraintAlignment, HorizontalAlignment) == 0x000090, "Member 'UDynamicUIConstraintAlignment::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintAlignment, VerticalAlignment) == 0x000091, "Member 'UDynamicUIConstraintAlignment::VerticalAlignment' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintAlignment, Anchor) == 0x000094, "Member 'UDynamicUIConstraintAlignment::Anchor' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintAlignment, MaxAspectRatio) == 0x000098, "Member 'UDynamicUIConstraintAlignment::MaxAspectRatio' has a wrong offset!");

class UDynamicUIConstraintWidget final : public UDynamicUIConstraintBase
{
public:
	EDynamicUIAnchor                              Anchor;
	uint8                                         Pad_94[0x4];
	struct FDynamicUIWidgetTarget                 TargetWidget;
	EDynamicUIAnchor                              TargetAnchor;
	uint8                                         Pad_124[0x4];
	TArray<class UDynamicUIConstraintBase*>       Fallbacks;
	uint8                                         bConstrainToUnallowedWidgets : 1;
	uint8                                         bUseFallbacks : 1;
	uint8                                         Pad_139[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintWidget">();
	}
	static class UDynamicUIConstraintWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintWidget>();
	}
};
static_assert(alignof(UDynamicUIConstraintWidget) == 0x000008, "Wrong alignment on UDynamicUIConstraintWidget");
static_assert(sizeof(UDynamicUIConstraintWidget) == 0x000140, "Wrong size on UDynamicUIConstraintWidget");
static_assert(offsetof(UDynamicUIConstraintWidget, Anchor) == 0x000090, "Member 'UDynamicUIConstraintWidget::Anchor' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintWidget, TargetWidget) == 0x000098, "Member 'UDynamicUIConstraintWidget::TargetWidget' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintWidget, TargetAnchor) == 0x000120, "Member 'UDynamicUIConstraintWidget::TargetAnchor' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintWidget, Fallbacks) == 0x000128, "Member 'UDynamicUIConstraintWidget::Fallbacks' has a wrong offset!");

class UDynamicUIConstraintContainer final : public UDynamicUIConstraintBase
{
public:
	TArray<struct FDynamicUIWidgetTarget>         WidgetsToContain;
	struct FMargin                                Padding;
	uint8                                         bMustMatchAllWidgets : 1;
	uint8                                         Pad_B1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintContainer">();
	}
	static class UDynamicUIConstraintContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintContainer>();
	}
};
static_assert(alignof(UDynamicUIConstraintContainer) == 0x000008, "Wrong alignment on UDynamicUIConstraintContainer");
static_assert(sizeof(UDynamicUIConstraintContainer) == 0x0000B8, "Wrong size on UDynamicUIConstraintContainer");
static_assert(offsetof(UDynamicUIConstraintContainer, WidgetsToContain) == 0x000090, "Member 'UDynamicUIConstraintContainer::WidgetsToContain' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintContainer, Padding) == 0x0000A0, "Member 'UDynamicUIConstraintContainer::Padding' has a wrong offset!");

class UDynamicUIConstraintReplace final : public UDynamicUIConstraintBase
{
public:
	struct FDynamicUIWidgetTarget                 TargetWidget;
	TArray<class UDynamicUIConstraintBase*>       Fallbacks;
	uint8                                         bUseFallbacks : 1;
	uint8                                         Pad_129[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintReplace">();
	}
	static class UDynamicUIConstraintReplace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintReplace>();
	}
};
static_assert(alignof(UDynamicUIConstraintReplace) == 0x000008, "Wrong alignment on UDynamicUIConstraintReplace");
static_assert(sizeof(UDynamicUIConstraintReplace) == 0x000130, "Wrong size on UDynamicUIConstraintReplace");
static_assert(offsetof(UDynamicUIConstraintReplace, TargetWidget) == 0x000090, "Member 'UDynamicUIConstraintReplace::TargetWidget' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintReplace, Fallbacks) == 0x000118, "Member 'UDynamicUIConstraintReplace::Fallbacks' has a wrong offset!");

class UDynamicUIConstraintOverrideBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintOverrideBase">();
	}
	static class UDynamicUIConstraintOverrideBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintOverrideBase>();
	}
};
static_assert(alignof(UDynamicUIConstraintOverrideBase) == 0x000008, "Wrong alignment on UDynamicUIConstraintOverrideBase");
static_assert(sizeof(UDynamicUIConstraintOverrideBase) == 0x000028, "Wrong size on UDynamicUIConstraintOverrideBase");

class UDynamicUIConstraintPlatformOverride final : public UDynamicUIConstraintOverrideBase
{
public:
	TMap<class FName, class UDynamicUIConstraintBase*> PlatformVisibilityControls;
	TMap<ECommonInputType, class UDynamicUIConstraintBase*> InputTypeVisibilityControls;
	uint8                                         Pad_C8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIConstraintPlatformOverride">();
	}
	static class UDynamicUIConstraintPlatformOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIConstraintPlatformOverride>();
	}
};
static_assert(alignof(UDynamicUIConstraintPlatformOverride) == 0x000008, "Wrong alignment on UDynamicUIConstraintPlatformOverride");
static_assert(sizeof(UDynamicUIConstraintPlatformOverride) == 0x0000D0, "Wrong size on UDynamicUIConstraintPlatformOverride");
static_assert(offsetof(UDynamicUIConstraintPlatformOverride, PlatformVisibilityControls) == 0x000028, "Member 'UDynamicUIConstraintPlatformOverride::PlatformVisibilityControls' has a wrong offset!");
static_assert(offsetof(UDynamicUIConstraintPlatformOverride, InputTypeVisibilityControls) == 0x000078, "Member 'UDynamicUIConstraintPlatformOverride::InputTypeVisibilityControls' has a wrong offset!");

class UDynamicUIManager final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x18];
	TMap<TWeakObjectPtr<class ULocalPlayer>, struct FDynamicUIPlayerData> PlayerDataMap;

public:
	void AddScene(const class UDynamicUIScene* Scene, class APlayerController*& Player);
	void AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player);
	void AddSceneToFirstLocalPlayer(const class UDynamicUIScene* Scene);
	void RemoveScene(const class UDynamicUIScene* Scene, class APlayerController*& Player);
	void RemoveSceneFromFirstLocalPlayer(const class UDynamicUIScene* Scene);
	void RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIManager">();
	}
	static class UDynamicUIManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIManager>();
	}
};
static_assert(alignof(UDynamicUIManager) == 0x000008, "Wrong alignment on UDynamicUIManager");
static_assert(sizeof(UDynamicUIManager) == 0x000098, "Wrong size on UDynamicUIManager");
static_assert(offsetof(UDynamicUIManager, PlayerDataMap) == 0x000048, "Member 'UDynamicUIManager::PlayerDataMap' has a wrong offset!");

class UDynamicUIScene final : public UDataAsset
{
public:
	uint8                                         LayerID;
	uint8                                         Pad_31[0x7];
	TArray<struct FDynamicUIAllowed>              Allowed;
	TArray<class UDynamicUIUnallowBase*>          Unallow;
	TArray<struct FDynamicUIPreload>              Preload;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIScene">();
	}
	static class UDynamicUIScene* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIScene>();
	}
};
static_assert(alignof(UDynamicUIScene) == 0x000008, "Wrong alignment on UDynamicUIScene");
static_assert(sizeof(UDynamicUIScene) == 0x000068, "Wrong size on UDynamicUIScene");
static_assert(offsetof(UDynamicUIScene, LayerID) == 0x000030, "Member 'UDynamicUIScene::LayerID' has a wrong offset!");
static_assert(offsetof(UDynamicUIScene, Allowed) == 0x000038, "Member 'UDynamicUIScene::Allowed' has a wrong offset!");
static_assert(offsetof(UDynamicUIScene, Unallow) == 0x000048, "Member 'UDynamicUIScene::Unallow' has a wrong offset!");
static_assert(offsetof(UDynamicUIScene, Preload) == 0x000058, "Member 'UDynamicUIScene::Preload' has a wrong offset!");

class UDynamicUISizeBase : public UObject
{
public:
	uint8                                         Pad_28[0x48];
	class UDynamicUISizeOverrideBase*             SizeOverride;
	uint8                                         bUseOverride : 1;
	uint8                                         bUseRenderTransform : 1;
	uint8                                         Pad_79[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUISizeBase">();
	}
	static class UDynamicUISizeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUISizeBase>();
	}
};
static_assert(alignof(UDynamicUISizeBase) == 0x000008, "Wrong alignment on UDynamicUISizeBase");
static_assert(sizeof(UDynamicUISizeBase) == 0x000080, "Wrong size on UDynamicUISizeBase");
static_assert(offsetof(UDynamicUISizeBase, SizeOverride) == 0x000070, "Member 'UDynamicUISizeBase::SizeOverride' has a wrong offset!");

class UDynamicUISizeFixed final : public UDynamicUISizeBase
{
public:
	struct FVector2f                              Size;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUISizeFixed">();
	}
	static class UDynamicUISizeFixed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUISizeFixed>();
	}
};
static_assert(alignof(UDynamicUISizeFixed) == 0x000008, "Wrong alignment on UDynamicUISizeFixed");
static_assert(sizeof(UDynamicUISizeFixed) == 0x000088, "Wrong size on UDynamicUISizeFixed");
static_assert(offsetof(UDynamicUISizeFixed, Size) == 0x000080, "Member 'UDynamicUISizeFixed::Size' has a wrong offset!");

class UDynamicUISizeScale final : public UDynamicUISizeBase
{
public:
	struct FVector2f                              Scale;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUISizeScale">();
	}
	static class UDynamicUISizeScale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUISizeScale>();
	}
};
static_assert(alignof(UDynamicUISizeScale) == 0x000008, "Wrong alignment on UDynamicUISizeScale");
static_assert(sizeof(UDynamicUISizeScale) == 0x000088, "Wrong size on UDynamicUISizeScale");
static_assert(offsetof(UDynamicUISizeScale, Scale) == 0x000080, "Member 'UDynamicUISizeScale::Scale' has a wrong offset!");

class UDynamicUISizeMatchWidget final : public UDynamicUISizeBase
{
public:
	struct FDynamicUIWidgetTarget                 TargetWidget;
	EDynamicUISizeMatch                           MatchType;
	uint8                                         Pad_10C[0x4];
	TArray<class UDynamicUISizeBase*>             Fallbacks;
	uint8                                         bUseFallbacks : 1;
	uint8                                         Pad_121[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUISizeMatchWidget">();
	}
	static class UDynamicUISizeMatchWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUISizeMatchWidget>();
	}
};
static_assert(alignof(UDynamicUISizeMatchWidget) == 0x000008, "Wrong alignment on UDynamicUISizeMatchWidget");
static_assert(sizeof(UDynamicUISizeMatchWidget) == 0x000128, "Wrong size on UDynamicUISizeMatchWidget");
static_assert(offsetof(UDynamicUISizeMatchWidget, TargetWidget) == 0x000080, "Member 'UDynamicUISizeMatchWidget::TargetWidget' has a wrong offset!");
static_assert(offsetof(UDynamicUISizeMatchWidget, MatchType) == 0x000108, "Member 'UDynamicUISizeMatchWidget::MatchType' has a wrong offset!");
static_assert(offsetof(UDynamicUISizeMatchWidget, Fallbacks) == 0x000110, "Member 'UDynamicUISizeMatchWidget::Fallbacks' has a wrong offset!");

class UDynamicUISizeOverrideBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUISizeOverrideBase">();
	}
	static class UDynamicUISizeOverrideBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUISizeOverrideBase>();
	}
};
static_assert(alignof(UDynamicUISizeOverrideBase) == 0x000008, "Wrong alignment on UDynamicUISizeOverrideBase");
static_assert(sizeof(UDynamicUISizeOverrideBase) == 0x000028, "Wrong size on UDynamicUISizeOverrideBase");

class UDynamicUISizeOverridePlatform final : public UDynamicUISizeOverrideBase
{
public:
	TMap<class FName, class UDynamicUISizeBase*>  PlatformOverrides;
	TMap<ECommonInputType, class UDynamicUISizeBase*> InputTypeOverrides;
	uint8                                         Pad_C8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUISizeOverridePlatform">();
	}
	static class UDynamicUISizeOverridePlatform* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUISizeOverridePlatform>();
	}
};
static_assert(alignof(UDynamicUISizeOverridePlatform) == 0x000008, "Wrong alignment on UDynamicUISizeOverridePlatform");
static_assert(sizeof(UDynamicUISizeOverridePlatform) == 0x0000D0, "Wrong size on UDynamicUISizeOverridePlatform");
static_assert(offsetof(UDynamicUISizeOverridePlatform, PlatformOverrides) == 0x000028, "Member 'UDynamicUISizeOverridePlatform::PlatformOverrides' has a wrong offset!");
static_assert(offsetof(UDynamicUISizeOverridePlatform, InputTypeOverrides) == 0x000078, "Member 'UDynamicUISizeOverridePlatform::InputTypeOverrides' has a wrong offset!");

class UDynamicUIUnallowBase : public UObject
{
public:
	EDynamicUIUnallowedBehavior                   Behavior;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIUnallowBase">();
	}
	static class UDynamicUIUnallowBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIUnallowBase>();
	}
};
static_assert(alignof(UDynamicUIUnallowBase) == 0x000008, "Wrong alignment on UDynamicUIUnallowBase");
static_assert(sizeof(UDynamicUIUnallowBase) == 0x000030, "Wrong size on UDynamicUIUnallowBase");
static_assert(offsetof(UDynamicUIUnallowBase, Behavior) == 0x000028, "Member 'UDynamicUIUnallowBase::Behavior' has a wrong offset!");

class UDynamicUIUnallowWidget final : public UDynamicUIUnallowBase
{
public:
	struct FDynamicUIWidgetTarget                 Widget;
	uint8                                         bTargetAll : 1;
	uint8                                         Pad_B9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIUnallowWidget">();
	}
	static class UDynamicUIUnallowWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIUnallowWidget>();
	}
};
static_assert(alignof(UDynamicUIUnallowWidget) == 0x000008, "Wrong alignment on UDynamicUIUnallowWidget");
static_assert(sizeof(UDynamicUIUnallowWidget) == 0x0000C0, "Wrong size on UDynamicUIUnallowWidget");
static_assert(offsetof(UDynamicUIUnallowWidget, Widget) == 0x000030, "Member 'UDynamicUIUnallowWidget::Widget' has a wrong offset!");

class UDynamicUIUnallowLayer final : public UDynamicUIUnallowBase
{
public:
	uint8                                         LayerID;
	EDynamicUIUnallowLayerComparison              Comparison;
	uint8                                         Pad_32[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIUnallowLayer">();
	}
	static class UDynamicUIUnallowLayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIUnallowLayer>();
	}
};
static_assert(alignof(UDynamicUIUnallowLayer) == 0x000008, "Wrong alignment on UDynamicUIUnallowLayer");
static_assert(sizeof(UDynamicUIUnallowLayer) == 0x000038, "Wrong size on UDynamicUIUnallowLayer");
static_assert(offsetof(UDynamicUIUnallowLayer, LayerID) == 0x000030, "Member 'UDynamicUIUnallowLayer::LayerID' has a wrong offset!");
static_assert(offsetof(UDynamicUIUnallowLayer, Comparison) == 0x000031, "Member 'UDynamicUIUnallowLayer::Comparison' has a wrong offset!");

class UDynamicUIVisualizerWidget final : public UUserWidget
{
public:
	TArray<class UDynamicUIScene*>                Scenes;
	bool                                          bRefresh;
	uint8                                         Pad_279[0x17];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicUIVisualizerWidget">();
	}
	static class UDynamicUIVisualizerWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicUIVisualizerWidget>();
	}
};
static_assert(alignof(UDynamicUIVisualizerWidget) == 0x000008, "Wrong alignment on UDynamicUIVisualizerWidget");
static_assert(sizeof(UDynamicUIVisualizerWidget) == 0x000290, "Wrong size on UDynamicUIVisualizerWidget");
static_assert(offsetof(UDynamicUIVisualizerWidget, Scenes) == 0x000268, "Member 'UDynamicUIVisualizerWidget::Scenes' has a wrong offset!");
static_assert(offsetof(UDynamicUIVisualizerWidget, bRefresh) == 0x000278, "Member 'UDynamicUIVisualizerWidget::bRefresh' has a wrong offset!");

}
