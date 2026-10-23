#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UW_PinnedQuestMarkerIndicator_C final : public UAthenaMarkedActorIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowHide;
	class UImage*                                 Pin;

public:
	void Construct();
	void ExecuteUbergraph_W_PinnedQuestMarkerIndicator(int32 EntryPoint);
	float GetRemovalDuration();
	void NotifyWillBeRemoved();
	void PreConstruct(bool IsDesignTime);

	class UCanvasPanel* GetCanvasPanelContainer(EFortActorIndicatorContainerWidget ContainerEnum) const;
	class AActor* GetIndicatedActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PinnedQuestMarkerIndicator_C">();
	}
	static class UW_PinnedQuestMarkerIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PinnedQuestMarkerIndicator_C>();
	}
};
static_assert(alignof(UW_PinnedQuestMarkerIndicator_C) == 0x000008, "Wrong alignment on UW_PinnedQuestMarkerIndicator_C");
static_assert(sizeof(UW_PinnedQuestMarkerIndicator_C) == 0x000620, "Wrong size on UW_PinnedQuestMarkerIndicator_C");
static_assert(offsetof(UW_PinnedQuestMarkerIndicator_C, UberGraphFrame) == 0x000608, "Member 'UW_PinnedQuestMarkerIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PinnedQuestMarkerIndicator_C, ShowHide) == 0x000610, "Member 'UW_PinnedQuestMarkerIndicator_C::ShowHide' has a wrong offset!");
static_assert(offsetof(UW_PinnedQuestMarkerIndicator_C, Pin) == 0x000618, "Member 'UW_PinnedQuestMarkerIndicator_C::Pin' has a wrong offset!");

}
