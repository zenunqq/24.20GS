#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button) == 0x000008, "Wrong alignment on MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button");
static_assert(sizeof(MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button) == 0x000018, "Wrong size on MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button");
static_assert(offsetof(MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button, EntryPoint) == 0x000000, "Member 'MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
