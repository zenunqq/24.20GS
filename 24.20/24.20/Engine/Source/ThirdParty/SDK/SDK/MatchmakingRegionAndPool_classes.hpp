#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UMatchmakingRegionAndPool_C final : public UMatchmakingRegionAndPoolBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       ClassicModeText;
	class UWidgetSwitcher*                        IBMSwitcher;
	class UHorizontalBox*                         InputRegion;
	class UCommonTextBlock*                       RegionText;
	class USizeBox*                               SizeBox_Mobile;

public:
	void Construct();
	void ExecuteUbergraph_MatchmakingRegionAndPool(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchmakingRegionAndPool_C">();
	}
	static class UMatchmakingRegionAndPool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchmakingRegionAndPool_C>();
	}
};
static_assert(alignof(UMatchmakingRegionAndPool_C) == 0x000008, "Wrong alignment on UMatchmakingRegionAndPool_C");
static_assert(sizeof(UMatchmakingRegionAndPool_C) == 0x0002A0, "Wrong size on UMatchmakingRegionAndPool_C");
static_assert(offsetof(UMatchmakingRegionAndPool_C, UberGraphFrame) == 0x000270, "Member 'UMatchmakingRegionAndPool_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMatchmakingRegionAndPool_C, ClassicModeText) == 0x000278, "Member 'UMatchmakingRegionAndPool_C::ClassicModeText' has a wrong offset!");
static_assert(offsetof(UMatchmakingRegionAndPool_C, IBMSwitcher) == 0x000280, "Member 'UMatchmakingRegionAndPool_C::IBMSwitcher' has a wrong offset!");
static_assert(offsetof(UMatchmakingRegionAndPool_C, InputRegion) == 0x000288, "Member 'UMatchmakingRegionAndPool_C::InputRegion' has a wrong offset!");
static_assert(offsetof(UMatchmakingRegionAndPool_C, RegionText) == 0x000290, "Member 'UMatchmakingRegionAndPool_C::RegionText' has a wrong offset!");
static_assert(offsetof(UMatchmakingRegionAndPool_C, SizeBox_Mobile) == 0x000298, "Member 'UMatchmakingRegionAndPool_C::SizeBox_Mobile' has a wrong offset!");

}
