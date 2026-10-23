#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_7[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	bool                                          K2Node_Event_bOwned;
	uint8                                         Pad_29[0x7];
	class UTexture2D*                             K2Node_Event_Texture;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_IsMonthlyBenefit_ReturnValue;
	uint8                                         Pad_3B[0x5];
	class UWidget*                                K2Node_Select_Default_1;
};
static_assert(alignof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile) == 0x000008, "Wrong alignment on CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile");
static_assert(sizeof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile) == 0x000048, "Wrong size on CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, EntryPoint) == 0x000000, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, Temp_byte_Variable) == 0x000004, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, Temp_byte_Variable_1) == 0x000005, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, Temp_bool_Variable) == 0x000006, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000010, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000020, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, K2Node_Event_bOwned) == 0x000028, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::K2Node_Event_bOwned' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, K2Node_Event_Texture) == 0x000030, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::K2Node_Event_Texture' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, Temp_bool_Variable_1) == 0x000038, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, K2Node_Select_Default) == 0x000039, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, CallFunc_IsMonthlyBenefit_ReturnValue) == 0x00003A, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::CallFunc_IsMonthlyBenefit_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile, K2Node_Select_Default_1) == 0x000040, "Member 'CrewPurchase_RewardTile_C_ExecuteUbergraph_CrewPurchase_RewardTile::K2Node_Select_Default_1' has a wrong offset!");

struct CrewPurchase_RewardTile_C_OnDownloadTileImageComplete final
{
public:
	class UTexture2D*                             Texture;
};
static_assert(alignof(CrewPurchase_RewardTile_C_OnDownloadTileImageComplete) == 0x000008, "Wrong alignment on CrewPurchase_RewardTile_C_OnDownloadTileImageComplete");
static_assert(sizeof(CrewPurchase_RewardTile_C_OnDownloadTileImageComplete) == 0x000008, "Wrong size on CrewPurchase_RewardTile_C_OnDownloadTileImageComplete");
static_assert(offsetof(CrewPurchase_RewardTile_C_OnDownloadTileImageComplete, Texture) == 0x000000, "Member 'CrewPurchase_RewardTile_C_OnDownloadTileImageComplete::Texture' has a wrong offset!");

struct CrewPurchase_RewardTile_C_OnUpdateOwnedState final
{
public:
	bool                                          bOwned;
};
static_assert(alignof(CrewPurchase_RewardTile_C_OnUpdateOwnedState) == 0x000001, "Wrong alignment on CrewPurchase_RewardTile_C_OnUpdateOwnedState");
static_assert(sizeof(CrewPurchase_RewardTile_C_OnUpdateOwnedState) == 0x000001, "Wrong size on CrewPurchase_RewardTile_C_OnUpdateOwnedState");
static_assert(offsetof(CrewPurchase_RewardTile_C_OnUpdateOwnedState, bOwned) == 0x000000, "Member 'CrewPurchase_RewardTile_C_OnUpdateOwnedState::bOwned' has a wrong offset!");

}
