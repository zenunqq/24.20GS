#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class UShowdownEventTile_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Focus_Violator;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       Focus;
	class UWidgetAnimation*                       TransitionSize;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          CommonBorder_InputContainer;
	class UImage*                                 Image_BG;
	class UImage*                                 Image_Ended;
	class UImage*                                 Image_Focus;
	class UImage*                                 Image_Hover;
	class UImage*                                 Image_Tail;
	class UShowdownEventTile_RoundBreak_C*        ShowdownEventTile_RoundBreak;
	class UShowdownEventTileInfo_C*               ShowdownEventTileInfo;
	class UShowdownEventTileViolator_C*           Violator;
	class FString                                 EventId;
	bool                                          isEnded;
	bool                                          IsLive;
	uint8                                         Pad_14BA[0x6];
	TMulticastInlineDelegate<void()>              OnWindowSelected;
	class FString                                 TournamentId;

public:
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void EventColorize(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void EventColorizeDispatch(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void EventIntro(int32 Index_0);
	void EventMultiRoundStyle();
	void EventResize(bool Out);
	void EventSetState(EFortShowdownEventState EventState);
	void ExecuteUbergraph_ShowdownEventTile(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void SetData(const class FString& TournamentInfo, const class FString& EventInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownEventTile_C">();
	}
	static class UShowdownEventTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownEventTile_C>();
	}
};
static_assert(alignof(UShowdownEventTile_C) == 0x000010, "Wrong alignment on UShowdownEventTile_C");
static_assert(sizeof(UShowdownEventTile_C) == 0x0014E0, "Wrong size on UShowdownEventTile_C");
static_assert(offsetof(UShowdownEventTile_C, UberGraphFrame) == 0x001430, "Member 'UShowdownEventTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Focus_Violator) == 0x001438, "Member 'UShowdownEventTile_C::Focus_Violator' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Hover) == 0x001440, "Member 'UShowdownEventTile_C::Hover' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Focus) == 0x001448, "Member 'UShowdownEventTile_C::Focus' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, TransitionSize) == 0x001450, "Member 'UShowdownEventTile_C::TransitionSize' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Intro) == 0x001458, "Member 'UShowdownEventTile_C::Intro' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, CommonBorder_InputContainer) == 0x001460, "Member 'UShowdownEventTile_C::CommonBorder_InputContainer' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Image_BG) == 0x001468, "Member 'UShowdownEventTile_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Image_Ended) == 0x001470, "Member 'UShowdownEventTile_C::Image_Ended' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Image_Focus) == 0x001478, "Member 'UShowdownEventTile_C::Image_Focus' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Image_Hover) == 0x001480, "Member 'UShowdownEventTile_C::Image_Hover' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Image_Tail) == 0x001488, "Member 'UShowdownEventTile_C::Image_Tail' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, ShowdownEventTile_RoundBreak) == 0x001490, "Member 'UShowdownEventTile_C::ShowdownEventTile_RoundBreak' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, ShowdownEventTileInfo) == 0x001498, "Member 'UShowdownEventTile_C::ShowdownEventTileInfo' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, Violator) == 0x0014A0, "Member 'UShowdownEventTile_C::Violator' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, EventId) == 0x0014A8, "Member 'UShowdownEventTile_C::EventId' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, isEnded) == 0x0014B8, "Member 'UShowdownEventTile_C::isEnded' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, IsLive) == 0x0014B9, "Member 'UShowdownEventTile_C::IsLive' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, OnWindowSelected) == 0x0014C0, "Member 'UShowdownEventTile_C::OnWindowSelected' has a wrong offset!");
static_assert(offsetof(UShowdownEventTile_C, TournamentId) == 0x0014D0, "Member 'UShowdownEventTile_C::TournamentId' has a wrong offset!");

}
