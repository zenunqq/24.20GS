#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SubgameTile_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SubgameTile_C_PreConstruct) == 0x000001, "Wrong alignment on SubgameTile_C_PreConstruct");
static_assert(sizeof(SubgameTile_C_PreConstruct) == 0x000001, "Wrong size on SubgameTile_C_PreConstruct");
static_assert(offsetof(SubgameTile_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SubgameTile_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SubgameTile_C_ExecuteUbergraph_SubgameTile final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_1D[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	float                                         CallFunc_GetEndTime_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	float                                         CallFunc_GetEndTime_ReturnValue_3;
	uint8                                         Pad_64[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
};
static_assert(alignof(SubgameTile_C_ExecuteUbergraph_SubgameTile) == 0x000008, "Wrong alignment on SubgameTile_C_ExecuteUbergraph_SubgameTile");
static_assert(sizeof(SubgameTile_C_ExecuteUbergraph_SubgameTile) == 0x000080, "Wrong size on SubgameTile_C_ExecuteUbergraph_SubgameTile");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, EntryPoint) == 0x000000, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue) == 0x000018, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, K2Node_Event_IsDesignTime) == 0x00001C, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000028, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000030, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000038, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue_1) == 0x000040, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue_2) == 0x000044, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_2) == 0x000050, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000058, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue_3) == 0x000060, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_3) == 0x000068, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_4) == 0x000078, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");

}
