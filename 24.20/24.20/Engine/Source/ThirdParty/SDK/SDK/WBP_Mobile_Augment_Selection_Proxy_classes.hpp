#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_Mobile_Augment_Selection_Proxy_C final : public UFortMobileHUDElementProxy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mobile_Augment_Selection_Proxy_C">();
	}
	static class UWBP_Mobile_Augment_Selection_Proxy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mobile_Augment_Selection_Proxy_C>();
	}
};
static_assert(alignof(UWBP_Mobile_Augment_Selection_Proxy_C) == 0x000008, "Wrong alignment on UWBP_Mobile_Augment_Selection_Proxy_C");
static_assert(sizeof(UWBP_Mobile_Augment_Selection_Proxy_C) == 0x000380, "Wrong size on UWBP_Mobile_Augment_Selection_Proxy_C");
static_assert(offsetof(UWBP_Mobile_Augment_Selection_Proxy_C, UberGraphFrame) == 0x000378, "Member 'UWBP_Mobile_Augment_Selection_Proxy_C::UberGraphFrame' has a wrong offset!");

}
