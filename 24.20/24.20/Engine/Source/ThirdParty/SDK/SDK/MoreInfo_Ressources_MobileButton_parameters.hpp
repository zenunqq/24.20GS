#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton) == 0x000008, "Wrong alignment on MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton");
static_assert(sizeof(MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton) == 0x000018, "Wrong size on MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton");
static_assert(offsetof(MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton, EntryPoint) == 0x000000, "Member 'MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
