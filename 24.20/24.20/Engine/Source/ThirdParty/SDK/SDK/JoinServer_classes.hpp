#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UJoinServer_C final : public UFortUIStateWidget_JoinServer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBuildWatermark_C*                      BuildWatermark;

public:
	void OnShowTutorialDialog();
	void OnEnterState(EFortUIState PreviousUIState);
	void ExecuteUbergraph_JoinServer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinServer_C">();
	}
	static class UJoinServer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinServer_C>();
	}
};
static_assert(alignof(UJoinServer_C) == 0x000008, "Wrong alignment on UJoinServer_C");
static_assert(sizeof(UJoinServer_C) == 0x000580, "Wrong size on UJoinServer_C");
static_assert(offsetof(UJoinServer_C, UberGraphFrame) == 0x000570, "Member 'UJoinServer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinServer_C, BuildWatermark) == 0x000578, "Member 'UJoinServer_C::BuildWatermark' has a wrong offset!");

}
