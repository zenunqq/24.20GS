#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class ULatencyGraph final : public UUserWidget
{
public:
	struct FColor                                 TotalLatencyLineColor;
	struct FColor                                 GameLatencyLineColor;
	struct FColor                                 RenderLatencyLineColor;
	struct FColor                                 DriverLatencyLineColor;
	struct FColor                                 OSWorkQueueLatencyLineColor;
	struct FColor                                 GPURenderLatencyLineColor;
	struct FColor                                 BackgroundColor;
	float                                         MaxLatencyToGraph;
	struct FVector2D                              DesiredSize;
	uint8                                         Pad_298[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LatencyGraph">();
	}
	static class ULatencyGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULatencyGraph>();
	}
};
static_assert(alignof(ULatencyGraph) == 0x000008, "Wrong alignment on ULatencyGraph");
static_assert(sizeof(ULatencyGraph) == 0x0002B0, "Wrong size on ULatencyGraph");
static_assert(offsetof(ULatencyGraph, TotalLatencyLineColor) == 0x000268, "Member 'ULatencyGraph::TotalLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, GameLatencyLineColor) == 0x00026C, "Member 'ULatencyGraph::GameLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, RenderLatencyLineColor) == 0x000270, "Member 'ULatencyGraph::RenderLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, DriverLatencyLineColor) == 0x000274, "Member 'ULatencyGraph::DriverLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, OSWorkQueueLatencyLineColor) == 0x000278, "Member 'ULatencyGraph::OSWorkQueueLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, GPURenderLatencyLineColor) == 0x00027C, "Member 'ULatencyGraph::GPURenderLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, BackgroundColor) == 0x000280, "Member 'ULatencyGraph::BackgroundColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, MaxLatencyToGraph) == 0x000284, "Member 'ULatencyGraph::MaxLatencyToGraph' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, DesiredSize) == 0x000288, "Member 'ULatencyGraph::DesiredSize' has a wrong offset!");

class ULatencyWidget final : public UUserWidget
{
public:
	uint8                                         Pad_268[0x8];
	class UCommonTextBlock*                       TotalLatencyUI;
	class UCommonTextBlock*                       GameLatencyUI;
	class UCommonTextBlock*                       RenderLatencyUI;
	class UCommonTextBlock*                       OSWorkLatencyUI;
	class UCommonTextBlock*                       DriverLatencyUI;
	class UCommonTextBlock*                       GPURenderLatencyUI;
	class UCommonTextBlock*                       TweakLatencyUI;
	uint8                                         Pad_2A8[0xB8];

public:
	void StartTimer();
	void StopTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LatencyWidget">();
	}
	static class ULatencyWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULatencyWidget>();
	}
};
static_assert(alignof(ULatencyWidget) == 0x000008, "Wrong alignment on ULatencyWidget");
static_assert(sizeof(ULatencyWidget) == 0x000360, "Wrong size on ULatencyWidget");
static_assert(offsetof(ULatencyWidget, TotalLatencyUI) == 0x000270, "Member 'ULatencyWidget::TotalLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, GameLatencyUI) == 0x000278, "Member 'ULatencyWidget::GameLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, RenderLatencyUI) == 0x000280, "Member 'ULatencyWidget::RenderLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, OSWorkLatencyUI) == 0x000288, "Member 'ULatencyWidget::OSWorkLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, DriverLatencyUI) == 0x000290, "Member 'ULatencyWidget::DriverLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, GPURenderLatencyUI) == 0x000298, "Member 'ULatencyWidget::GPURenderLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, TweakLatencyUI) == 0x0002A0, "Member 'ULatencyWidget::TweakLatencyUI' has a wrong offset!");

}
