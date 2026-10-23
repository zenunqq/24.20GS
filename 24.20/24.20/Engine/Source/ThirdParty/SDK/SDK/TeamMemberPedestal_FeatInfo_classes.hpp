#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTeamMemberPedestal_FeatInfo_C final : public UFortTeamMemberPedestalFeatInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FeatInfoSet;

public:
	void OnFeatDefinitionSet();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void ExecuteUbergraph_TeamMemberPedestal_FeatInfo(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_FeatInfo_C">();
	}
	static class UTeamMemberPedestal_FeatInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberPedestal_FeatInfo_C>();
	}
};
static_assert(alignof(UTeamMemberPedestal_FeatInfo_C) == 0x000010, "Wrong alignment on UTeamMemberPedestal_FeatInfo_C");
static_assert(sizeof(UTeamMemberPedestal_FeatInfo_C) == 0x001480, "Wrong size on UTeamMemberPedestal_FeatInfo_C");
static_assert(offsetof(UTeamMemberPedestal_FeatInfo_C, UberGraphFrame) == 0x001470, "Member 'UTeamMemberPedestal_FeatInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_FeatInfo_C, FeatInfoSet) == 0x001478, "Member 'UTeamMemberPedestal_FeatInfo_C::FeatInfoSet' has a wrong offset!");

}
