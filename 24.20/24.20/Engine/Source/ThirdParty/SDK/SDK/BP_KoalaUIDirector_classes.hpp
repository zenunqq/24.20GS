#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DynamicUI_classes.hpp"

namespace SDK
{

class ABP_KoalaUIDirector_C final : public ADynamicUIDirectorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_KoalaUIDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KoalaUIDirector_C">();
	}
	static class ABP_KoalaUIDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KoalaUIDirector_C>();
	}
};
static_assert(alignof(ABP_KoalaUIDirector_C) == 0x000008, "Wrong alignment on ABP_KoalaUIDirector_C");
static_assert(sizeof(ABP_KoalaUIDirector_C) == 0x0002C8, "Wrong size on ABP_KoalaUIDirector_C");
static_assert(offsetof(ABP_KoalaUIDirector_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_KoalaUIDirector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_KoalaUIDirector_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_KoalaUIDirector_C::DefaultSceneRoot' has a wrong offset!");

}
