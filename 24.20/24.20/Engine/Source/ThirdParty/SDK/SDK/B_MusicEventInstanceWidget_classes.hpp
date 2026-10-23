#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UB_MusicEventInstanceWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UUEFN_TextBlock_C*                      Text;
	class UMusicEventInstance*                    EventInstance;
	double                                        Distance;
	class UB_MusicEventDebugWidget_C*             DebugWidget;

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_B_MusicEventInstanceWidget(int32 EntryPoint);
	void GetFormatText(class FText* Result);
	struct FSlateColor GetTextColor();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MusicEventInstanceWidget_C">();
	}
	static class UB_MusicEventInstanceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_MusicEventInstanceWidget_C>();
	}
};
static_assert(alignof(UB_MusicEventInstanceWidget_C) == 0x000008, "Wrong alignment on UB_MusicEventInstanceWidget_C");
static_assert(sizeof(UB_MusicEventInstanceWidget_C) == 0x000290, "Wrong size on UB_MusicEventInstanceWidget_C");
static_assert(offsetof(UB_MusicEventInstanceWidget_C, UberGraphFrame) == 0x000268, "Member 'UB_MusicEventInstanceWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_MusicEventInstanceWidget_C, Text) == 0x000270, "Member 'UB_MusicEventInstanceWidget_C::Text' has a wrong offset!");
static_assert(offsetof(UB_MusicEventInstanceWidget_C, EventInstance) == 0x000278, "Member 'UB_MusicEventInstanceWidget_C::EventInstance' has a wrong offset!");
static_assert(offsetof(UB_MusicEventInstanceWidget_C, Distance) == 0x000280, "Member 'UB_MusicEventInstanceWidget_C::Distance' has a wrong offset!");
static_assert(offsetof(UB_MusicEventInstanceWidget_C, DebugWidget) == 0x000288, "Member 'UB_MusicEventInstanceWidget_C::DebugWidget' has a wrong offset!");

}
