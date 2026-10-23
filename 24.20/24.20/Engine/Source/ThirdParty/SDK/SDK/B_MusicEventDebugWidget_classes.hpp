#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UB_MusicEventDebugWidget_C final : public UMusicEventSubsystemDebugWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBackgroundBlur*                        Background;
	class UCommonListView*                        EventInstances;
	class FString                                 AssetFilter;
	TArray<class UMusicEventInstance*>            Instances;
	int32                                         FontSize;

public:
	void ExecuteUbergraph_B_MusicEventDebugWidget(int32 EntryPoint);
	void FilterInstances();
	void SetEventInstances(const TArray<class UMusicEventInstance*>& Instances_0);
	void SetMusicEventAssetFilter(const class FString& Filter);
	void SetMusicEventFontSize(int32 Size);
	void SetMusicEventPos(double X, double Y);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MusicEventDebugWidget_C">();
	}
	static class UB_MusicEventDebugWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_MusicEventDebugWidget_C>();
	}
};
static_assert(alignof(UB_MusicEventDebugWidget_C) == 0x000008, "Wrong alignment on UB_MusicEventDebugWidget_C");
static_assert(sizeof(UB_MusicEventDebugWidget_C) == 0x0002A8, "Wrong size on UB_MusicEventDebugWidget_C");
static_assert(offsetof(UB_MusicEventDebugWidget_C, UberGraphFrame) == 0x000268, "Member 'UB_MusicEventDebugWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_MusicEventDebugWidget_C, Background) == 0x000270, "Member 'UB_MusicEventDebugWidget_C::Background' has a wrong offset!");
static_assert(offsetof(UB_MusicEventDebugWidget_C, EventInstances) == 0x000278, "Member 'UB_MusicEventDebugWidget_C::EventInstances' has a wrong offset!");
static_assert(offsetof(UB_MusicEventDebugWidget_C, AssetFilter) == 0x000280, "Member 'UB_MusicEventDebugWidget_C::AssetFilter' has a wrong offset!");
static_assert(offsetof(UB_MusicEventDebugWidget_C, Instances) == 0x000290, "Member 'UB_MusicEventDebugWidget_C::Instances' has a wrong offset!");
static_assert(offsetof(UB_MusicEventDebugWidget_C, FontSize) == 0x0002A0, "Member 'UB_MusicEventDebugWidget_C::FontSize' has a wrong offset!");

}
