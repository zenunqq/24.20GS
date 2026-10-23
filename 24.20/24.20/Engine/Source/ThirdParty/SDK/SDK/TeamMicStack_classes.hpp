#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTeamMicStack_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UVerticalBox*                           _Vertical_Box__Team_Members;
	class UCommonBorder*                          BorderFrame;
	TArray<class UCinematic_TeamMics_C*>          TeamMembers;

public:
	void AppendTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo);
	void ClearContents();
	void Construct();
	void ExecuteUbergraph_TeamMicStack(int32 EntryPoint);
	void HandlePartyLeft();
	void HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info);
	void HandleTeamMemberRemoved(int32 Member_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMicStack_C">();
	}
	static class UTeamMicStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMicStack_C>();
	}
};
static_assert(alignof(UTeamMicStack_C) == 0x000008, "Wrong alignment on UTeamMicStack_C");
static_assert(sizeof(UTeamMicStack_C) == 0x0002F8, "Wrong size on UTeamMicStack_C");
static_assert(offsetof(UTeamMicStack_C, UberGraphFrame) == 0x0002D0, "Member 'UTeamMicStack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMicStack_C, _Vertical_Box__Team_Members) == 0x0002D8, "Member 'UTeamMicStack_C::_Vertical_Box__Team_Members' has a wrong offset!");
static_assert(offsetof(UTeamMicStack_C, BorderFrame) == 0x0002E0, "Member 'UTeamMicStack_C::BorderFrame' has a wrong offset!");
static_assert(offsetof(UTeamMicStack_C, TeamMembers) == 0x0002E8, "Member 'UTeamMicStack_C::TeamMembers' has a wrong offset!");

}
