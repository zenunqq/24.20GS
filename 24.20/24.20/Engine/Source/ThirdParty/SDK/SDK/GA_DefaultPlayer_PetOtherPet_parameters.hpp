#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_34[0x4];
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet) == 0x000008, "Wrong alignment on GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet");
static_assert(sizeof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet) == 0x000048, "Wrong size on GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet");
static_assert(offsetof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet, EntryPoint) == 0x000000, "Member 'GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000038, "Member 'GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
