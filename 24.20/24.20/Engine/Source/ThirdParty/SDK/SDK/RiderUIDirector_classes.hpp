#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DynamicUI_classes.hpp"

namespace SDK
{

class ARiderUIDirector_C final : public ADynamicUIDirectorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RiderUIDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RiderUIDirector_C">();
	}
	static class ARiderUIDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARiderUIDirector_C>();
	}
};
static_assert(alignof(ARiderUIDirector_C) == 0x000008, "Wrong alignment on ARiderUIDirector_C");
static_assert(sizeof(ARiderUIDirector_C) == 0x0002C8, "Wrong size on ARiderUIDirector_C");
static_assert(offsetof(ARiderUIDirector_C, UberGraphFrame) == 0x0002B8, "Member 'ARiderUIDirector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARiderUIDirector_C, DefaultSceneRoot) == 0x0002C0, "Member 'ARiderUIDirector_C::DefaultSceneRoot' has a wrong offset!");

}
