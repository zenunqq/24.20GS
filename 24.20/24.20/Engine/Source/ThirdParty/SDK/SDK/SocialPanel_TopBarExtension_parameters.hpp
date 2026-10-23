#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension) == 0x000008, "Wrong alignment on SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension");
static_assert(sizeof(SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension) == 0x000018, "Wrong size on SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension");
static_assert(offsetof(SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension, EntryPoint) == 0x000000, "Member 'SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
