#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTeamMemberPedestal_XPBoostInfo_C final : public UFortTeamMemberXPBoostInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UOverlay*                               PrimaryOvr;

public:
	void OnCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_XPBoostInfo_C">();
	}
	static class UTeamMemberPedestal_XPBoostInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberPedestal_XPBoostInfo_C>();
	}
};
static_assert(alignof(UTeamMemberPedestal_XPBoostInfo_C) == 0x000010, "Wrong alignment on UTeamMemberPedestal_XPBoostInfo_C");
static_assert(sizeof(UTeamMemberPedestal_XPBoostInfo_C) == 0x001480, "Wrong size on UTeamMemberPedestal_XPBoostInfo_C");
static_assert(offsetof(UTeamMemberPedestal_XPBoostInfo_C, UberGraphFrame) == 0x001470, "Member 'UTeamMemberPedestal_XPBoostInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_XPBoostInfo_C, PrimaryOvr) == 0x001478, "Member 'UTeamMemberPedestal_XPBoostInfo_C::PrimaryOvr' has a wrong offset!");

}
