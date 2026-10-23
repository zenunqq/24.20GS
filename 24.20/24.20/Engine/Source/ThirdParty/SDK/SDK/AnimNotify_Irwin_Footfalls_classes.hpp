#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimNotify_Irwin_Footfalls_C final : public UAnimNotify
{
public:
	int32                                         FootfallsIndex;
	bool                                          is_Running__;
	bool                                          is_Sprinting__;

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_Irwin_Footfalls_C">();
	}
	static class UAnimNotify_Irwin_Footfalls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_Irwin_Footfalls_C>();
	}
};
static_assert(alignof(UAnimNotify_Irwin_Footfalls_C) == 0x000008, "Wrong alignment on UAnimNotify_Irwin_Footfalls_C");
static_assert(sizeof(UAnimNotify_Irwin_Footfalls_C) == 0x000040, "Wrong size on UAnimNotify_Irwin_Footfalls_C");
static_assert(offsetof(UAnimNotify_Irwin_Footfalls_C, FootfallsIndex) == 0x000038, "Member 'UAnimNotify_Irwin_Footfalls_C::FootfallsIndex' has a wrong offset!");
static_assert(offsetof(UAnimNotify_Irwin_Footfalls_C, is_Running__) == 0x00003C, "Member 'UAnimNotify_Irwin_Footfalls_C::is_Running__' has a wrong offset!");
static_assert(offsetof(UAnimNotify_Irwin_Footfalls_C, is_Sprinting__) == 0x00003D, "Member 'UAnimNotify_Irwin_Footfalls_C::is_Sprinting__' has a wrong offset!");

}
