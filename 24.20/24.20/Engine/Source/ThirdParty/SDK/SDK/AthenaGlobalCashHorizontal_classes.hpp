#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaGlobalCashHorizontal_C final : public UFortGlobalCashWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_AthenaGlobalCashHorizontal(int32 EntryPoint);
	void OnQueryCompletedSuccessfully(int32 GlobalCashBalance);
	void OnQueryStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaGlobalCashHorizontal_C">();
	}
	static class UAthenaGlobalCashHorizontal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGlobalCashHorizontal_C>();
	}
};
static_assert(alignof(UAthenaGlobalCashHorizontal_C) == 0x000008, "Wrong alignment on UAthenaGlobalCashHorizontal_C");
static_assert(sizeof(UAthenaGlobalCashHorizontal_C) == 0x0002F8, "Wrong size on UAthenaGlobalCashHorizontal_C");
static_assert(offsetof(UAthenaGlobalCashHorizontal_C, UberGraphFrame) == 0x0002F0, "Member 'UAthenaGlobalCashHorizontal_C::UberGraphFrame' has a wrong offset!");

}
