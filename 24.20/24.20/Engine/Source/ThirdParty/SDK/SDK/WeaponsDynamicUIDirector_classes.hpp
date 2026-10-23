#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DynamicUI_classes.hpp"

namespace SDK
{

class AWeaponsDynamicUIDirector_C final : public ADynamicUIDirectorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WeaponsDynamicUIDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponsDynamicUIDirector_C">();
	}
	static class AWeaponsDynamicUIDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeaponsDynamicUIDirector_C>();
	}
};
static_assert(alignof(AWeaponsDynamicUIDirector_C) == 0x000008, "Wrong alignment on AWeaponsDynamicUIDirector_C");
static_assert(sizeof(AWeaponsDynamicUIDirector_C) == 0x0002C8, "Wrong size on AWeaponsDynamicUIDirector_C");
static_assert(offsetof(AWeaponsDynamicUIDirector_C, UberGraphFrame) == 0x0002B8, "Member 'AWeaponsDynamicUIDirector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWeaponsDynamicUIDirector_C, DefaultSceneRoot) == 0x0002C0, "Member 'AWeaponsDynamicUIDirector_C::DefaultSceneRoot' has a wrong offset!");

}
