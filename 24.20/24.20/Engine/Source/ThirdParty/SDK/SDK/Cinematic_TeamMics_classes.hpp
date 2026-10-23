#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UCinematic_TeamMics_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UMicIndicator_C*                        MicIndicator;
	class UCommonWidgetSwitcherLegacy*            SwitcherConnectingStranger;
	class UCommonTextBlock*                       TextBlock_6;
	class UCommonTextBlock*                       TextPlayerName;
	uint8                                         Pad_2B8[0x8];
	struct FFortTeamMemberInfo                    MemberInfo;

public:
	void Construct();
	void ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint);
	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cinematic-TeamMics_C">();
	}
	static class UCinematic_TeamMics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematic_TeamMics_C>();
	}
};
static_assert(alignof(UCinematic_TeamMics_C) == 0x000010, "Wrong alignment on UCinematic_TeamMics_C");
static_assert(sizeof(UCinematic_TeamMics_C) == 0x000510, "Wrong size on UCinematic_TeamMics_C");
static_assert(offsetof(UCinematic_TeamMics_C, UberGraphFrame) == 0x000290, "Member 'UCinematic_TeamMics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, MicIndicator) == 0x000298, "Member 'UCinematic_TeamMics_C::MicIndicator' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, SwitcherConnectingStranger) == 0x0002A0, "Member 'UCinematic_TeamMics_C::SwitcherConnectingStranger' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, TextBlock_6) == 0x0002A8, "Member 'UCinematic_TeamMics_C::TextBlock_6' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, TextPlayerName) == 0x0002B0, "Member 'UCinematic_TeamMics_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, MemberInfo) == 0x0002C0, "Member 'UCinematic_TeamMics_C::MemberInfo' has a wrong offset!");

}
