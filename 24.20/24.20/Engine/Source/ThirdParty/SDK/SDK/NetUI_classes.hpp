#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UBadNetworkIndicator final : public UFortHUDElementWidget
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_2D1[0x3];
	float                                         MinimumDisplayTime;
	float                                         UpdateTime;
	float                                         InitialDelay;
	uint8                                         Pad_2E0[0x20];

public:
	void UpdateDisplay();

	float GetPacketLoss() const;
	float GetPing() const;
	bool HasBadPacketLoss() const;
	bool HasBadPing() const;
	bool HasSeverePacketLoss() const;
	bool HasSeverePing() const;
	bool ShouldDisplay() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BadNetworkIndicator">();
	}
	static class UBadNetworkIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBadNetworkIndicator>();
	}
};
static_assert(alignof(UBadNetworkIndicator) == 0x000008, "Wrong alignment on UBadNetworkIndicator");
static_assert(sizeof(UBadNetworkIndicator) == 0x000300, "Wrong size on UBadNetworkIndicator");
static_assert(offsetof(UBadNetworkIndicator, bEnabled) == 0x0002D0, "Member 'UBadNetworkIndicator::bEnabled' has a wrong offset!");
static_assert(offsetof(UBadNetworkIndicator, MinimumDisplayTime) == 0x0002D4, "Member 'UBadNetworkIndicator::MinimumDisplayTime' has a wrong offset!");
static_assert(offsetof(UBadNetworkIndicator, UpdateTime) == 0x0002D8, "Member 'UBadNetworkIndicator::UpdateTime' has a wrong offset!");
static_assert(offsetof(UBadNetworkIndicator, InitialDelay) == 0x0002DC, "Member 'UBadNetworkIndicator::InitialDelay' has a wrong offset!");

class UNetDebugWidget final : public UUserWidget
{
public:
	class UCommonTextBlock*                       PingUI;
	class UCommonTextBlock*                       PacketInRateUI;
	class UCommonTextBlock*                       PacketOutRateUI;
	class UCommonTextBlock*                       PacketInLossUI;
	class UCommonTextBlock*                       PacketOutLossUI;
	class UCommonTextBlock*                       UpBandwidthUI;
	class UCommonTextBlock*                       DownBandwidthUI;
	uint8                                         Pad_2A0[0xB0];

public:
	void StartTimer();
	void StopTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDebugWidget">();
	}
	static class UNetDebugWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDebugWidget>();
	}
};
static_assert(alignof(UNetDebugWidget) == 0x000008, "Wrong alignment on UNetDebugWidget");
static_assert(sizeof(UNetDebugWidget) == 0x000350, "Wrong size on UNetDebugWidget");
static_assert(offsetof(UNetDebugWidget, PingUI) == 0x000268, "Member 'UNetDebugWidget::PingUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketInRateUI) == 0x000270, "Member 'UNetDebugWidget::PacketInRateUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketOutRateUI) == 0x000278, "Member 'UNetDebugWidget::PacketOutRateUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketInLossUI) == 0x000280, "Member 'UNetDebugWidget::PacketInLossUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketOutLossUI) == 0x000288, "Member 'UNetDebugWidget::PacketOutLossUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, UpBandwidthUI) == 0x000290, "Member 'UNetDebugWidget::UpBandwidthUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, DownBandwidthUI) == 0x000298, "Member 'UNetDebugWidget::DownBandwidthUI' has a wrong offset!");

class UNetGraph final : public UUserWidget
{
public:
	struct FColor                                 BackgroundColor;
	struct FColor                                 PingLineColor;
	struct FColor                                 QueuedBunchesLineColor;
	struct FColor                                 PacketLossLineColor;
	struct FVector2D                              DesiredSize;
	float                                         MaxPingToGraph;
	uint8                                         Pad_28C[0x14];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetGraph">();
	}
	static class UNetGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetGraph>();
	}
};
static_assert(alignof(UNetGraph) == 0x000008, "Wrong alignment on UNetGraph");
static_assert(sizeof(UNetGraph) == 0x0002A0, "Wrong size on UNetGraph");
static_assert(offsetof(UNetGraph, BackgroundColor) == 0x000268, "Member 'UNetGraph::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UNetGraph, PingLineColor) == 0x00026C, "Member 'UNetGraph::PingLineColor' has a wrong offset!");
static_assert(offsetof(UNetGraph, QueuedBunchesLineColor) == 0x000270, "Member 'UNetGraph::QueuedBunchesLineColor' has a wrong offset!");
static_assert(offsetof(UNetGraph, PacketLossLineColor) == 0x000274, "Member 'UNetGraph::PacketLossLineColor' has a wrong offset!");
static_assert(offsetof(UNetGraph, DesiredSize) == 0x000278, "Member 'UNetGraph::DesiredSize' has a wrong offset!");
static_assert(offsetof(UNetGraph, MaxPingToGraph) == 0x000288, "Member 'UNetGraph::MaxPingToGraph' has a wrong offset!");

}
