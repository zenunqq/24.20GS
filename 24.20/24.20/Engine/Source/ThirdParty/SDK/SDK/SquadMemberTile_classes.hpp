#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class USquadMemberTile_C final : public UAthenaSquadMemberDetailedEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnIntro;
	class UWidgetAnimation*                       OnLocalUserDefined;
	class UWidgetAnimation*                       OnSelected;
	class UWidgetAnimation*                       SetRibbonRotation;
	class UWidgetAnimation*                       StyleEmpty;
	class UWidgetAnimation*                       StyleNotReady;
	class UWidgetAnimation*                       StyleReady;
	class UWidgetAnimation*                       StyleSitOut;
	class UWidgetAnimation*                       OnHovered;
	class UBorder*                                EntryBorder;
	class UImage*                                 LoadingThrobberBacking;
	class UImage*                                 LocalUserIcon;
	class UImage*                                 SquadOverlay;
	class UImage*                                 SquadRibbon;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SquadMemberTile(int32 EntryPoint);
	void OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(class UObject* Loaded);
	void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
	void OnMemberIsInFrontendChanged(bool bIsInFrontEnd);
	void OnSquadAssigned();
	void PreConstruct(bool IsDesignTime);
	void SetEmptyVisuals();
	void SetNotReadyVisuals();
	void SetReadyVisuals();
	void SetSitOutVisuals();
	void SetVisuals(EGameReadiness Member_Readiness, bool Is_In_Frontend);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadMemberTile_C">();
	}
	static class USquadMemberTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadMemberTile_C>();
	}
};
static_assert(alignof(USquadMemberTile_C) == 0x000010, "Wrong alignment on USquadMemberTile_C");
static_assert(sizeof(USquadMemberTile_C) == 0x001520, "Wrong size on USquadMemberTile_C");
static_assert(offsetof(USquadMemberTile_C, UberGraphFrame) == 0x0014A0, "Member 'USquadMemberTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnIntro) == 0x0014A8, "Member 'USquadMemberTile_C::OnIntro' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnLocalUserDefined) == 0x0014B0, "Member 'USquadMemberTile_C::OnLocalUserDefined' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnSelected) == 0x0014B8, "Member 'USquadMemberTile_C::OnSelected' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, SetRibbonRotation) == 0x0014C0, "Member 'USquadMemberTile_C::SetRibbonRotation' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleEmpty) == 0x0014C8, "Member 'USquadMemberTile_C::StyleEmpty' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleNotReady) == 0x0014D0, "Member 'USquadMemberTile_C::StyleNotReady' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleReady) == 0x0014D8, "Member 'USquadMemberTile_C::StyleReady' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleSitOut) == 0x0014E0, "Member 'USquadMemberTile_C::StyleSitOut' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnHovered) == 0x0014E8, "Member 'USquadMemberTile_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, EntryBorder) == 0x0014F0, "Member 'USquadMemberTile_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, LoadingThrobberBacking) == 0x0014F8, "Member 'USquadMemberTile_C::LoadingThrobberBacking' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, LocalUserIcon) == 0x001500, "Member 'USquadMemberTile_C::LocalUserIcon' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, SquadOverlay) == 0x001508, "Member 'USquadMemberTile_C::SquadOverlay' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, SquadRibbon) == 0x001510, "Member 'USquadMemberTile_C::SquadRibbon' has a wrong offset!");

}
