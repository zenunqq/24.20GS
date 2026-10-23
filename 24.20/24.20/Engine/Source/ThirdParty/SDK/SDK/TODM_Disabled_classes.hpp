#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MASTER_TODM_classes.hpp"

namespace SDK
{

class ATODM_Disabled_C final : public AMASTER_TODM_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TODM_Disabled_C;

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TODM_Disabled(int32 EntryPoint);
	void DisableLightAndFog(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TODM_Disabled_C">();
	}
	static class ATODM_Disabled_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATODM_Disabled_C>();
	}
};
static_assert(alignof(ATODM_Disabled_C) == 0x000010, "Wrong alignment on ATODM_Disabled_C");
static_assert(sizeof(ATODM_Disabled_C) == 0x0012F0, "Wrong size on ATODM_Disabled_C");
static_assert(offsetof(ATODM_Disabled_C, UberGraphFrame_TODM_Disabled_C) == 0x0012E0, "Member 'ATODM_Disabled_C::UberGraphFrame_TODM_Disabled_C' has a wrong offset!");

}
