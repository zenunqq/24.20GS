#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UMinimalSquadMember_C final : public UAthenaMinimalSquadMemberEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       StyleNotReady;
	class UWidgetAnimation*                       StyleSitOut;
	class UWidgetAnimation*                       StyleEmpty;
	class UWidgetAnimation*                       OnReady;
	class UImage*                                 Image_Meeple;
	class UImage*                                 LocalUserIndicator;
	class UOverlay*                               MeepleContainer;
	class UImage*                                 ReadyFlash;

public:
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void ExecuteUbergraph_MinimalSquadMember(int32 EntryPoint);
	void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
	void SetEmptyVisuals();
	void SetNotReadyVisuals();
	void SetReadyVisuals();
	void SetSitOutVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimalSquadMember_C">();
	}
	static class UMinimalSquadMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimalSquadMember_C>();
	}
};
static_assert(alignof(UMinimalSquadMember_C) == 0x000010, "Wrong alignment on UMinimalSquadMember_C");
static_assert(sizeof(UMinimalSquadMember_C) == 0x0014B0, "Wrong size on UMinimalSquadMember_C");
static_assert(offsetof(UMinimalSquadMember_C, UberGraphFrame) == 0x001460, "Member 'UMinimalSquadMember_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, StyleNotReady) == 0x001468, "Member 'UMinimalSquadMember_C::StyleNotReady' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, StyleSitOut) == 0x001470, "Member 'UMinimalSquadMember_C::StyleSitOut' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, StyleEmpty) == 0x001478, "Member 'UMinimalSquadMember_C::StyleEmpty' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, OnReady) == 0x001480, "Member 'UMinimalSquadMember_C::OnReady' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, Image_Meeple) == 0x001488, "Member 'UMinimalSquadMember_C::Image_Meeple' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, LocalUserIndicator) == 0x001490, "Member 'UMinimalSquadMember_C::LocalUserIndicator' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, MeepleContainer) == 0x001498, "Member 'UMinimalSquadMember_C::MeepleContainer' has a wrong offset!");
static_assert(offsetof(UMinimalSquadMember_C, ReadyFlash) == 0x0014A0, "Member 'UMinimalSquadMember_C::ReadyFlash' has a wrong offset!");

}
