#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaTemperature_C final : public UAthenaTemperatureBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ShowTemperatureChanged(bool bShowTemperature);
	void ExecuteUbergraph_AthenaTemperature(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTemperature_C">();
	}
	static class UAthenaTemperature_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTemperature_C>();
	}
};
static_assert(alignof(UAthenaTemperature_C) == 0x000008, "Wrong alignment on UAthenaTemperature_C");
static_assert(sizeof(UAthenaTemperature_C) == 0x0002A8, "Wrong size on UAthenaTemperature_C");
static_assert(offsetof(UAthenaTemperature_C, UberGraphFrame) == 0x0002A0, "Member 'UAthenaTemperature_C::UberGraphFrame' has a wrong offset!");

}
