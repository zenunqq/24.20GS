#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaStatsRow_C final : public UFortProfileStatsRow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void SetStatValueAsText(const class FText& StatValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaStatsRow(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaStatsRow_C">();
	}
	static class UAthenaStatsRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaStatsRow_C>();
	}
};
static_assert(alignof(UAthenaStatsRow_C) == 0x000008, "Wrong alignment on UAthenaStatsRow_C");
static_assert(sizeof(UAthenaStatsRow_C) == 0x0002D0, "Wrong size on UAthenaStatsRow_C");
static_assert(offsetof(UAthenaStatsRow_C, UberGraphFrame) == 0x0002C8, "Member 'UAthenaStatsRow_C::UberGraphFrame' has a wrong offset!");

}
