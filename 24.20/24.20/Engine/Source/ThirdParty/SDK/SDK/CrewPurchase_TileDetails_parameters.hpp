#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14[0x4];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UCrewPurchaseScreen_C*                  CallFunc_FindParentWidgetOfType_ReturnValue;
	class FString                                 CallFunc_GetCurrentLanguage_ReturnValue;
	class UCrewPurchaseScreen_C*                  K2Node_DynamicCast_AsCrew_Purchase_Screen;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Contains_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_55[0x3];
	double                                        K2Node_Select_Default;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
};
static_assert(alignof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails) == 0x000008, "Wrong alignment on CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails");
static_assert(sizeof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails) == 0x000070, "Wrong size on CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, EntryPoint) == 0x000000, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, Temp_bool_Variable) == 0x000004, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, Temp_real_Variable) == 0x000018, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, Temp_real_Variable_1) == 0x000020, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, CallFunc_FindParentWidgetOfType_ReturnValue) == 0x000030, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::CallFunc_FindParentWidgetOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, CallFunc_GetCurrentLanguage_ReturnValue) == 0x000038, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::CallFunc_GetCurrentLanguage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, K2Node_DynamicCast_AsCrew_Purchase_Screen) == 0x000048, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::K2Node_DynamicCast_AsCrew_Purchase_Screen' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, CallFunc_Contains_ReturnValue) == 0x000051, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, CallFunc_BooleanOR_ReturnValue) == 0x000052, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, CallFunc_BooleanOR_ReturnValue_1) == 0x000053, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, K2Node_Event_IsDesignTime) == 0x000054, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, K2Node_Select_Default) == 0x000058, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

struct CrewPurchase_TileDetails_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(CrewPurchase_TileDetails_C_PreConstruct) == 0x000001, "Wrong alignment on CrewPurchase_TileDetails_C_PreConstruct");
static_assert(sizeof(CrewPurchase_TileDetails_C_PreConstruct) == 0x000001, "Wrong size on CrewPurchase_TileDetails_C_PreConstruct");
static_assert(offsetof(CrewPurchase_TileDetails_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CrewPurchase_TileDetails_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
