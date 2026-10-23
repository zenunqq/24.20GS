#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms final
{
public:
	struct FTransform                             CallFunc_GetPreviewMeshWorldTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Percent_FloatFloat_ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms");
static_assert(sizeof(PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms) == 0x000150, "Wrong size on PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms");
static_assert(offsetof(PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms, CallFunc_GetPreviewMeshWorldTransform_ReturnValue) == 0x000000, "Member 'PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms::CallFunc_GetPreviewMeshWorldTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000060, "Member 'PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000140, "Member 'PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000148, "Member 'PartyDisplayManagerBP_C_UpdatePreviewMeshTransforms::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");

struct PartyDisplayManagerBP_C_ShowItem final
{
public:
	const class UFortItem*                        ItemToView;
	struct FGuid                                  RequestID;
};
static_assert(alignof(PartyDisplayManagerBP_C_ShowItem) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_ShowItem");
static_assert(sizeof(PartyDisplayManagerBP_C_ShowItem) == 0x000018, "Wrong size on PartyDisplayManagerBP_C_ShowItem");
static_assert(offsetof(PartyDisplayManagerBP_C_ShowItem, ItemToView) == 0x000000, "Member 'PartyDisplayManagerBP_C_ShowItem::ItemToView' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ShowItem, RequestID) == 0x000008, "Member 'PartyDisplayManagerBP_C_ShowItem::RequestID' has a wrong offset!");

struct PartyDisplayManagerBP_C_SetupStaticMeshVisuals final
{
public:
	class UStaticMesh*                            NewMesh;
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition;
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	bool                                          CallFunc_SetStaticMesh_ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_SetupStaticMeshVisuals) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_SetupStaticMeshVisuals");
static_assert(sizeof(PartyDisplayManagerBP_C_SetupStaticMeshVisuals) == 0x000160, "Wrong size on PartyDisplayManagerBP_C_SetupStaticMeshVisuals");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupStaticMeshVisuals, NewMesh) == 0x000000, "Member 'PartyDisplayManagerBP_C_SetupStaticMeshVisuals::NewMesh' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupStaticMeshVisuals, CallFunc_GetItemDefinitionToShow_ItemDefinition) == 0x000008, "Member 'PartyDisplayManagerBP_C_SetupStaticMeshVisuals::CallFunc_GetItemDefinitionToShow_ItemDefinition' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupStaticMeshVisuals, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'PartyDisplayManagerBP_C_SetupStaticMeshVisuals::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupStaticMeshVisuals, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000070, "Member 'PartyDisplayManagerBP_C_SetupStaticMeshVisuals::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupStaticMeshVisuals, CallFunc_SetStaticMesh_ReturnValue) == 0x000150, "Member 'PartyDisplayManagerBP_C_SetupStaticMeshVisuals::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

struct PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals final
{
public:
	class USkeletalMesh*                          NewMesh;
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition;
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
};
static_assert(alignof(PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals");
static_assert(sizeof(PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals) == 0x000150, "Wrong size on PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals, NewMesh) == 0x000000, "Member 'PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals::NewMesh' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals, CallFunc_GetItemDefinitionToShow_ItemDefinition) == 0x000008, "Member 'PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals::CallFunc_GetItemDefinitionToShow_ItemDefinition' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000070, "Member 'PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");

struct PartyDisplayManagerBP_C_Set_Character_Parts_Visibility final
{
public:
	bool                                          NewVisible;
};
static_assert(alignof(PartyDisplayManagerBP_C_Set_Character_Parts_Visibility) == 0x000001, "Wrong alignment on PartyDisplayManagerBP_C_Set_Character_Parts_Visibility");
static_assert(sizeof(PartyDisplayManagerBP_C_Set_Character_Parts_Visibility) == 0x000001, "Wrong size on PartyDisplayManagerBP_C_Set_Character_Parts_Visibility");
static_assert(offsetof(PartyDisplayManagerBP_C_Set_Character_Parts_Visibility, NewVisible) == 0x000000, "Member 'PartyDisplayManagerBP_C_Set_Character_Parts_Visibility::NewVisible' has a wrong offset!");

struct PartyDisplayManagerBP_C_SetUIOverrideVisuals final
{
public:
	class UTexture2D*                             Large_Texture;
	class UFortItemDefinition*                    Item;
	EFortRarity                                   Rarity;
	uint8                                         Pad_11[0x7];
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;
	class FString                                 CallFunc_GetPersistentName_ReturnValue;
	int32                                         CallFunc_FindSubstring_ReturnValue;
	uint8                                         Pad_AC[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;
	uint8                                         Pad_B9[0x3];
	int32                                         CallFunc_FindSubstring_ReturnValue_1;
	int32                                         CallFunc_FindSubstring_ReturnValue_2;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue_1;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue_2;
	uint8                                         Pad_C6[0x2];
	int32                                         CallFunc_FindSubstring_ReturnValue_3;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue_3;
};
static_assert(alignof(PartyDisplayManagerBP_C_SetUIOverrideVisuals) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_SetUIOverrideVisuals");
static_assert(sizeof(PartyDisplayManagerBP_C_SetUIOverrideVisuals) == 0x0000D0, "Wrong size on PartyDisplayManagerBP_C_SetUIOverrideVisuals");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, Large_Texture) == 0x000000, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::Large_Texture' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, Item) == 0x000008, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::Item' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, Rarity) == 0x000010, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::Rarity' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_BPGetRarityData_ReturnValue) == 0x000018, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_GetPersistentName_ReturnValue) == 0x000098, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_GetPersistentName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_FindSubstring_ReturnValue) == 0x0000A8, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000B0, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_Conv_IntToBool_ReturnValue) == 0x0000B8, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_FindSubstring_ReturnValue_1) == 0x0000BC, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_FindSubstring_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_FindSubstring_ReturnValue_2) == 0x0000C0, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_FindSubstring_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_Conv_IntToBool_ReturnValue_1) == 0x0000C4, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_Conv_IntToBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_Conv_IntToBool_ReturnValue_2) == 0x0000C5, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_Conv_IntToBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_FindSubstring_ReturnValue_3) == 0x0000C8, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_FindSubstring_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_SetUIOverrideVisuals, CallFunc_Conv_IntToBool_ReturnValue_3) == 0x0000CC, "Member 'PartyDisplayManagerBP_C_SetUIOverrideVisuals::CallFunc_Conv_IntToBool_ReturnValue_3' has a wrong offset!");

struct PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress final
{
public:
	const class AFortPlayerPawn*                  Pawn;
	int32                                         CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex;
	bool                                          CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue;
	uint8                                         Pad_D[0x3];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_1B[0x5];
	struct FUniqueNetIdRepl                       CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue;
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;
	EFortPartyMemberLocation                      CallFunc_GetPartyMemberLocation_LocationOut;
	bool                                          CallFunc_GetPartyMemberLocation_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress");
static_assert(sizeof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress) == 0x000060, "Wrong size on PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, Pawn) == 0x000000, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::Pawn' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex) == 0x000008, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue) == 0x00000C, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000010, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_IsValid_ReturnValue_1) == 0x00001A, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue) == 0x000020, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_GetContext_ReturnValue) == 0x000050, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_GetPartyMemberLocation_LocationOut) == 0x000058, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_GetPartyMemberLocation_LocationOut' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, CallFunc_GetPartyMemberLocation_ReturnValue) == 0x000059, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::CallFunc_GetPartyMemberLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress, K2Node_SwitchEnum_CmpSuccess) == 0x00005A, "Member 'PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct PartyDisplayManagerBP_C_ResOutPawnFromLobby final
{
public:
	class AFortPlayerPawn*                        Pawn;
	int32                                         PartyIndex;
};
static_assert(alignof(PartyDisplayManagerBP_C_ResOutPawnFromLobby) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_ResOutPawnFromLobby");
static_assert(sizeof(PartyDisplayManagerBP_C_ResOutPawnFromLobby) == 0x000010, "Wrong size on PartyDisplayManagerBP_C_ResOutPawnFromLobby");
static_assert(offsetof(PartyDisplayManagerBP_C_ResOutPawnFromLobby, Pawn) == 0x000000, "Member 'PartyDisplayManagerBP_C_ResOutPawnFromLobby::Pawn' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResOutPawnFromLobby, PartyIndex) == 0x000008, "Member 'PartyDisplayManagerBP_C_ResOutPawnFromLobby::PartyIndex' has a wrong offset!");

struct PartyDisplayManagerBP_C_ResetVisuals final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_3[0xD];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;
	bool                                          CallFunc_SetStaticMesh_ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_ResetVisuals) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_ResetVisuals");
static_assert(sizeof(PartyDisplayManagerBP_C_ResetVisuals) == 0x000160, "Wrong size on PartyDisplayManagerBP_C_ResetVisuals");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetVisuals, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PartyDisplayManagerBP_C_ResetVisuals::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetVisuals, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'PartyDisplayManagerBP_C_ResetVisuals::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetVisuals, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'PartyDisplayManagerBP_C_ResetVisuals::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetVisuals, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'PartyDisplayManagerBP_C_ResetVisuals::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetVisuals, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000070, "Member 'PartyDisplayManagerBP_C_ResetVisuals::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetVisuals, CallFunc_SetStaticMesh_ReturnValue) == 0x000150, "Member 'PartyDisplayManagerBP_C_ResetVisuals::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

struct PartyDisplayManagerBP_C_ResetPreScaleLocations final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_3;
};
static_assert(alignof(PartyDisplayManagerBP_C_ResetPreScaleLocations) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_ResetPreScaleLocations");
static_assert(sizeof(PartyDisplayManagerBP_C_ResetPreScaleLocations) == 0x000380, "Wrong size on PartyDisplayManagerBP_C_ResetPreScaleLocations");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetPreScaleLocations, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000000, "Member 'PartyDisplayManagerBP_C_ResetPreScaleLocations::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetPreScaleLocations, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0000E0, "Member 'PartyDisplayManagerBP_C_ResetPreScaleLocations::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetPreScaleLocations, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x0001C0, "Member 'PartyDisplayManagerBP_C_ResetPreScaleLocations::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ResetPreScaleLocations, CallFunc_K2_SetRelativeLocation_SweepHitResult_3) == 0x0002A0, "Member 'PartyDisplayManagerBP_C_ResetPreScaleLocations::CallFunc_K2_SetRelativeLocation_SweepHitResult_3' has a wrong offset!");

struct PartyDisplayManagerBP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(PartyDisplayManagerBP_C_ReceiveTick) == 0x000004, "Wrong alignment on PartyDisplayManagerBP_C_ReceiveTick");
static_assert(sizeof(PartyDisplayManagerBP_C_ReceiveTick) == 0x000004, "Wrong size on PartyDisplayManagerBP_C_ReceiveTick");
static_assert(offsetof(PartyDisplayManagerBP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'PartyDisplayManagerBP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct PartyDisplayManagerBP_C_PartyMemberInProgressCheck final
{
public:
	class AFortPlayerPawn*                        Pawn;
	int32                                         PlayerIndex;
	int32                                         CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex;
	bool                                          CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue;
	uint8                                         Pad_11[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          CallFunc_IsPartyInProgressEnabled_ReturnValue;
	uint8                                         Pad_31[0x7];
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;
	struct FUniqueNetIdRepl                       CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue;
	EFortPartyMemberLocation                      CallFunc_GetPartyMemberLocation_LocationOut;
	bool                                          CallFunc_GetPartyMemberLocation_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_PartyMemberInProgressCheck");
static_assert(sizeof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck) == 0x000078, "Wrong size on PartyDisplayManagerBP_C_PartyMemberInProgressCheck");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, Pawn) == 0x000000, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::Pawn' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, PlayerIndex) == 0x000008, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::PlayerIndex' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex) == 0x00000C, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue) == 0x000010, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000018, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000028, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_IsPartyInProgressEnabled_ReturnValue) == 0x000030, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_IsPartyInProgressEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue) == 0x000040, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_GetPartyMemberLocation_LocationOut) == 0x000070, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_GetPartyMemberLocation_LocationOut' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, CallFunc_GetPartyMemberLocation_ReturnValue) == 0x000071, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::CallFunc_GetPartyMemberLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_PartyMemberInProgressCheck, K2Node_SwitchEnum_CmpSuccess) == 0x000072, "Member 'PartyDisplayManagerBP_C_PartyMemberInProgressCheck::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby");
static_assert(sizeof(PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby) == 0x000008, "Wrong size on PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby");
static_assert(offsetof(PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby, Pawn) == 0x000000, "Member 'PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby::Pawn' has a wrong offset!");

struct PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class USceneComponent*                        CallFunc_Array_Get_Item;
	class UParticleSystemComponent*               K2Node_DynamicCast_AsCascade_Particle_System_Component;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_41[0x7];
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_51[0x3];
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_61[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_6C[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_82[0x2];
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue;
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_1;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_2;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_3;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_4;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_5;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_6;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_7;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_8;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_9;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_10;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_11;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_C9[0x7];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges");
static_assert(sizeof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges) == 0x0000D8, "Wrong size on PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, Pawn) == 0x000000, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::Pawn' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000008, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_GetChildrenComponents_Children) == 0x000018, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, Temp_int_Array_Index_Variable) == 0x000028, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_Array_Get_Item) == 0x000030, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_AsCascade_Particle_System_Component) == 0x000038, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_AsCascade_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_AsPrimitive_Component) == 0x000048, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_GetNumMaterials_ReturnValue) == 0x000054, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, Temp_int_Variable) == 0x000068, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_GetMaterial_ReturnValue) == 0x000070, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000078, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, K2Node_DynamicCast_bSuccess_3) == 0x000080, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000081, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue) == 0x000084, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetTextureParameterValue_ReturnValue) == 0x000088, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetTextureParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetTextureParameterValue_ReturnValue_1) == 0x000090, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetTextureParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_Add_IntInt_ReturnValue_1) == 0x000098, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_1) == 0x00009C, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_2) == 0x0000A0, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_3) == 0x0000A4, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_4) == 0x0000A8, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_5) == 0x0000AC, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_6) == 0x0000B0, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_7) == 0x0000B4, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_8) == 0x0000B8, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_9) == 0x0000BC, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_10) == 0x0000C0, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_K2_GetScalarParameterValue_ReturnValue_11) == 0x0000C4, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_K2_GetScalarParameterValue_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000D0, "Member 'PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

struct PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted final
{
public:
	class UFortItem*                              ItemWhoseAssetsWereLoaded;
	TArray<class UObject*>                        LoadedAssets;
	struct FGuid                                  RequestID;
};
static_assert(alignof(PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted");
static_assert(sizeof(PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted) == 0x000028, "Wrong size on PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted");
static_assert(offsetof(PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted, ItemWhoseAssetsWereLoaded) == 0x000000, "Member 'PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted::ItemWhoseAssetsWereLoaded' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted, LoadedAssets) == 0x000008, "Member 'PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted::LoadedAssets' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted, RequestID) == 0x000018, "Member 'PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted::RequestID' has a wrong offset!");

struct PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem final
{
public:
	class UMeshComponent*                         OutDisplayedMesh;
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue;
	TScriptInterface<class ICustomCharacterPartOwnerInterface> CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput;
	class USkeletalMeshComponent*                 CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue;
	class AFortPlayerParachute*                   K2Node_DynamicCast_AsFort_Player_Parachute;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	class USkeletalMeshComponent*                 CallFunc_GetParachuteRootMesh_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_41[0x7];
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem");
static_assert(sizeof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem) == 0x000058, "Wrong size on PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, OutDisplayedMesh) == 0x000000, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::OutDisplayedMesh' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue) == 0x000008, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput) == 0x000010, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue) == 0x000020, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, K2Node_DynamicCast_AsFort_Player_Parachute) == 0x000028, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::K2Node_DynamicCast_AsFort_Player_Parachute' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_GetParachuteRootMesh_ReturnValue) == 0x000038, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_GetParachuteRootMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000048, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem, CallFunc_IsValid_ReturnValue_2) == 0x000051, "Member 'PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct PartyDisplayManagerBP_C_GetWeaponPlacementTransform final
{
public:
	struct FTransform                             ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_121[0xF];
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_GetWeaponPlacementTransform");
static_assert(sizeof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform) == 0x0001F0, "Wrong size on PartyDisplayManagerBP_C_GetWeaponPlacementTransform");
static_assert(offsetof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform, ReturnValue) == 0x000000, "Member 'PartyDisplayManagerBP_C_GetWeaponPlacementTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'PartyDisplayManagerBP_C_GetWeaponPlacementTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform, CallFunc_GetTransform_ReturnValue) == 0x0000C0, "Member 'PartyDisplayManagerBP_C_GetWeaponPlacementTransform::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'PartyDisplayManagerBP_C_GetWeaponPlacementTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform, CallFunc_GetTransform_ReturnValue_1) == 0x000130, "Member 'PartyDisplayManagerBP_C_GetWeaponPlacementTransform::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetWeaponPlacementTransform, CallFunc_ComposeTransforms_ReturnValue) == 0x000190, "Member 'PartyDisplayManagerBP_C_GetWeaponPlacementTransform::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");

struct PartyDisplayManagerBP_C_GetItemPreviewOffset final
{
public:
	class UFortItemDefinition*                    ItemDefinition;
	uint8                                         Pad_8[0x8];
	struct FTransform                             ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_71[0xF];
	struct FTransform                             CallFunc_GetPreviewMeshOffset_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_18D[0x3];
	struct FTransform                             K2Node_Select_Default;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	uint8                                         Pad_238[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_GetItemPreviewOffset) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_GetItemPreviewOffset");
static_assert(sizeof(PartyDisplayManagerBP_C_GetItemPreviewOffset) == 0x000360, "Wrong size on PartyDisplayManagerBP_C_GetItemPreviewOffset");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, ItemDefinition) == 0x000000, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::ItemDefinition' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, ReturnValue) == 0x000010, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, Temp_bool_Variable) == 0x000070, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_GetPreviewMeshOffset_ReturnValue) == 0x000080, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_GetPreviewMeshOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BreakTransform_Location) == 0x000140, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BreakTransform_Rotation) == 0x000158, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BreakTransform_Scale) == 0x000170, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000188, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_EqualEqual_VectorVector_ReturnValue_1) == 0x000189, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_EqualEqual_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_EqualEqual_RotatorRotator_ReturnValue) == 0x00018A, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_EqualEqual_RotatorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BooleanAND_ReturnValue) == 0x00018B, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BooleanAND_ReturnValue_1) == 0x00018C, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, K2Node_Select_Default) == 0x000190, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BreakTransform_Location_1) == 0x0001F0, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BreakTransform_Rotation_1) == 0x000208, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_BreakTransform_Scale_1) == 0x000220, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_MakeTransform_ReturnValue_1) == 0x000240, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_MakeTransform_ReturnValue_2) == 0x0002A0, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemPreviewOffset, CallFunc_ComposeTransforms_ReturnValue) == 0x000300, "Member 'PartyDisplayManagerBP_C_GetItemPreviewOffset::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");

struct PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform final
{
public:
	struct FTransform                             ReturnValue;
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_69[0x7];
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_79[0x7];
	struct FTransform                             CallFunc_GetItemPreviewOffset_ReturnValue;
	struct FTransform                             CallFunc_GetWeaponPlacementTransform_ReturnValue;
	double                                        K2Node_Select_Default;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue_1;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
};
static_assert(alignof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform");
static_assert(sizeof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform) == 0x000290, "Wrong size on PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, ReturnValue) == 0x000000, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, Temp_real_Variable) == 0x000060, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, Temp_bool_Variable) == 0x000068, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_GetItemDefinitionToShow_ItemDefinition) == 0x000070, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_GetItemDefinitionToShow_ItemDefinition' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_GetItemPreviewOffset_ReturnValue) == 0x000080, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_GetItemPreviewOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_GetWeaponPlacementTransform_ReturnValue) == 0x0000E0, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_GetWeaponPlacementTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, K2Node_Select_Default) == 0x000140, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_MakeRotator_ReturnValue) == 0x000148, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_MakeTransform_ReturnValue) == 0x000160, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_ComposeTransforms_ReturnValue) == 0x0001C0, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_ComposeTransforms_ReturnValue_1) == 0x000220, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_ComposeTransforms_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000280, "Member 'PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

struct PartyDisplayManagerBP_C_GetItemDefinitionToShow final
{
public:
	class UFortItemDefinition*                    ItemDefinition;
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;
	class UFortItemDefinition*                    CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1B[0x5];
	class UFortItemDefinition*                    K2Node_Select_Default;
};
static_assert(alignof(PartyDisplayManagerBP_C_GetItemDefinitionToShow) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_GetItemDefinitionToShow");
static_assert(sizeof(PartyDisplayManagerBP_C_GetItemDefinitionToShow) == 0x000028, "Wrong size on PartyDisplayManagerBP_C_GetItemDefinitionToShow");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemDefinitionToShow, ItemDefinition) == 0x000000, "Member 'PartyDisplayManagerBP_C_GetItemDefinitionToShow::ItemDefinition' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemDefinitionToShow, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000008, "Member 'PartyDisplayManagerBP_C_GetItemDefinitionToShow::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemDefinitionToShow, CallFunc_GetSchematicCraftingResultBP_ReturnValue) == 0x000010, "Member 'PartyDisplayManagerBP_C_GetItemDefinitionToShow::CallFunc_GetSchematicCraftingResultBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemDefinitionToShow, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'PartyDisplayManagerBP_C_GetItemDefinitionToShow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemDefinitionToShow, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'PartyDisplayManagerBP_C_GetItemDefinitionToShow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemDefinitionToShow, Temp_bool_Variable) == 0x00001A, "Member 'PartyDisplayManagerBP_C_GetItemDefinitionToShow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_GetItemDefinitionToShow, K2Node_Select_Default) == 0x000020, "Member 'PartyDisplayManagerBP_C_GetItemDefinitionToShow::K2Node_Select_Default' has a wrong offset!");

struct PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437 final
{
public:
	class UFortItem*                              Item;
	struct FGuid                                  RequestID;
};
static_assert(alignof(PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437");
static_assert(sizeof(PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437) == 0x000018, "Wrong size on PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437");
static_assert(offsetof(PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437, Item) == 0x000000, "Member 'PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437::Item' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437, RequestID) == 0x000008, "Member 'PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437::RequestID' has a wrong offset!");

struct PartyDisplayManagerBP_C_CharacterCustomizationFinished final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(PartyDisplayManagerBP_C_CharacterCustomizationFinished) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_CharacterCustomizationFinished");
static_assert(sizeof(PartyDisplayManagerBP_C_CharacterCustomizationFinished) == 0x000008, "Wrong size on PartyDisplayManagerBP_C_CharacterCustomizationFinished");
static_assert(offsetof(PartyDisplayManagerBP_C_CharacterCustomizationFinished, Pawn) == 0x000000, "Member 'PartyDisplayManagerBP_C_CharacterCustomizationFinished::Pawn' has a wrong offset!");

struct PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	class UFortItem*                              K2Node_Event_ItemWhoseAssetsWereLoaded;
	TArray<class UObject*>                        K2Node_Event_LoadedAssets;
	struct FGuid                                  K2Node_Event_RequestId;
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition;
	TArray<class UFortItem*>                      K2Node_MakeArray_Array;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_142[0x6];
	TArray<class UFortItem*>                      K2Node_MakeArray_Array_1;
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition_1;
	TSoftObjectPtr<class UStaticMesh>             CallFunc_GetPreviewStaticMeshAsset_Asset;
	bool                                          CallFunc_GetPreviewStaticMeshAsset_ReturnValue;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	uint8                                         Pad_18A[0x6];
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetLargePreviewImage_ReturnValue;
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1C9[0x7];
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1E1[0x7];
	TSoftObjectPtr<class USkeletalMesh>           CallFunc_GetPreviewSkeletalMeshAsset_Asset;
	bool                                          CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue;
	uint8                                         Pad_211[0x7];
	class UFortItemDefinition*                    CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_229[0x7];
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	uint8                                         Pad_23B[0x5];
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition_2;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_24C[0x4];
	struct FTransform                             CallFunc_GetWeaponPlacementTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;
	TArray<TSoftObjectPtr<class UObject>>         CallFunc_GetPreviewAssets_ReturnValue;
	bool                                          K2Node_CustomEvent_NewVisible;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	uint8                                         Pad_3EA[0x6];
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_3F9[0x7];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_4C4[0x4];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	const class UFortItem*                        K2Node_Event_ItemToView;
	struct FGuid                                  K2Node_Event_RequestId_1;
	TArray<class UFortItem*>                      K2Node_MakeArray_Array_2;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_5DA[0x6];
	class AFortPlayerPawn*                        K2Node_Event_Pawn_2;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_5F2[0x6];
	class AFortPlayerPawn*                        K2Node_Event_Pawn_1;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_604[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class USceneComponent*                        CallFunc_Array_Get_Item;
	class USkeletalMeshComponent*                 K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_631[0x3];
	int32                                         CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex;
	bool                                          CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue;
	uint8                                         Pad_639[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_649[0x7];
	struct FUniqueNetIdRepl                       CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue;
	class AFortPlayerPawn*                        K2Node_Event_Pawn;
	int32                                         K2Node_Event_PartyIndex;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_68D[0x3];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	bool                                          Temp_bool_B_Execution_Happened_Variable;
	bool                                          CallFunc_IsInCharacterCustomization_ReturnValue;
	bool                                          Temp_bool_A_Execution_Happened_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_69D[0x3];
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition_3;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_2;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_7F9[0x7];
	class UFXSystemComponent*                     CallFunc_GetContrailFXComponent_ReturnValue;
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	class UFrontendAnimInstance*                  K2Node_DynamicCast_AsFrontend_Anim_Instance;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_81C[0x4];
	class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals* CallFunc_SetupPrefabVisuals_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_829[0x7];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_83A[0x6];
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_85C[0x4];
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_869[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_87C[0x4];
	class UFortItem*                              Temp_object_Variable;
	TArray<class UFortItem*>                      K2Node_MakeArray_Array_3;
	struct FGuid                                  Temp_struct_Variable;
	class UFortItem*                              K2Node_CustomEvent_Item;
	struct FGuid                                  K2Node_CustomEvent_RequestId;
	TDelegate<void(class UFortItem* Item, const struct FGuid& RequestID)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_8CC[0x4];
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;
	EFortPartyMemberLocation                      CallFunc_GetPartyMemberLocation_LocationOut;
	bool                                          CallFunc_GetPartyMemberLocation_ReturnValue;
	uint8                                         Pad_8DA[0x2];
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_8ED[0x3];
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	uint8                                         Pad_911[0xF];
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_989[0x7];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	int32                                         CallFunc_GetCurrentLockerSubslotIndex_ReturnValue;
	uint8                                         Pad_9A4[0x4];
	class AB_EmotePreviewDisplay_C*               K2Node_DynamicCast_AsB_Emote_Preview_Display;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	uint8                                         Pad_9B1[0x7];
	TSoftClassPtr<class UClass>                   CallFunc_GetPreviewPrefabAssetAtSubSlot_Asset;
	bool                                          CallFunc_GetPreviewPrefabAssetAtSubSlot_ReturnValue;
	uint8                                         Pad_9E1[0x7];
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;
	bool                                          K2Node_ClassDynamicCast_bSuccess;
	uint8                                         Pad_9F9[0x7];
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionToShow_ItemDefinition_4;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_A09[0x7];
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_3;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_4;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP) == 0x000010, "Wrong alignment on PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP");
static_assert(sizeof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP) == 0x000B40, "Wrong size on PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, EntryPoint) == 0x000000, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000008, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000020, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_ItemWhoseAssetsWereLoaded) == 0x000100, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_ItemWhoseAssetsWereLoaded' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_LoadedAssets) == 0x000108, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_LoadedAssets' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_RequestId) == 0x000118, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_RequestId' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetItemDefinitionToShow_ItemDefinition) == 0x000128, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetItemDefinitionToShow_ItemDefinition' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_MakeArray_Array) == 0x000130, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Not_PreBool_ReturnValue) == 0x000141, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_MakeArray_Array_1) == 0x000148, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetItemDefinitionToShow_ItemDefinition_1) == 0x000158, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetItemDefinitionToShow_ItemDefinition_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPreviewStaticMeshAsset_Asset) == 0x000160, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPreviewStaticMeshAsset_Asset' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPreviewStaticMeshAsset_ReturnValue) == 0x000188, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPreviewStaticMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetRarity_ReturnValue) == 0x000189, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000190, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetLargePreviewImage_ReturnValue) == 0x000198, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetLargePreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsStatic_Mesh) == 0x0001C0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess) == 0x0001C8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0001D0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsTexture_2D) == 0x0001D8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_1) == 0x0001E0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPreviewSkeletalMeshAsset_Asset) == 0x0001E8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPreviewSkeletalMeshAsset_Asset' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue) == 0x000210, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetSchematicCraftingResultBP_ReturnValue) == 0x000218, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetSchematicCraftingResultBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2) == 0x000220, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsValid_ReturnValue_1) == 0x000228, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsSkeletal_Mesh) == 0x000230, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsSkeletal_Mesh' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_2) == 0x000238, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000239, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x00023A, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetItemDefinitionToShow_ItemDefinition_2) == 0x000240, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetItemDefinitionToShow_ItemDefinition_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_DeltaSeconds) == 0x000248, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetWeaponPlacementTransform_ReturnValue) == 0x000250, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetWeaponPlacementTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_BreakTransform_Location) == 0x0002B0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_BreakTransform_Rotation) == 0x0002C8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_BreakTransform_Scale) == 0x0002E0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0002F8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPreviewAssets_ReturnValue) == 0x0003D8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPreviewAssets_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_CustomEvent_NewVisible) == 0x0003E8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_CustomEvent_NewVisible' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x0003E9, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue) == 0x0003F0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsValid_ReturnValue_2) == 0x0003F8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetTransform_ReturnValue) == 0x000400, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_BreakTransform_Location_1) == 0x000460, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_BreakTransform_Rotation_1) == 0x000478, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_BreakTransform_Scale_1) == 0x000490, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0004A8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetChildrenComponents_Children) == 0x0004B0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Array_Length_ReturnValue) == 0x0004C0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x0004C8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x0004D0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_ItemToView) == 0x0005B0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_ItemToView' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_RequestId_1) == 0x0005B8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_RequestId_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_MakeArray_Array_2) == 0x0005C8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_HasAuthority_ReturnValue) == 0x0005D8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_HasAuthority_ReturnValue_1) == 0x0005D9, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_Pawn_2) == 0x0005E0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_Pawn_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0005E8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsDedicatedServer_ReturnValue) == 0x0005F0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsValid_ReturnValue_3) == 0x0005F1, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_Pawn_1) == 0x0005F8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_Pawn_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_int_Array_Index_Variable) == 0x000600, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000608, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Array_Get_Item) == 0x000620, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsSkeletal_Mesh_Component) == 0x000628, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_3) == 0x000630, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex) == 0x000634, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue) == 0x000638, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000640, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_4) == 0x000648, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue) == 0x000650, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_Pawn) == 0x000680, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_Pawn' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_Event_PartyIndex) == 0x000688, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_Event_PartyIndex' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00068C, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsPlayer_Pawn_Athena_1) == 0x000690, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsPlayer_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_5) == 0x000698, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_bool_B_Execution_Happened_Variable) == 0x000699, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_bool_B_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsInCharacterCustomization_ReturnValue) == 0x00069A, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsInCharacterCustomization_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_bool_A_Execution_Happened_Variable) == 0x00069B, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_bool_A_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_BooleanAND_ReturnValue) == 0x00069C, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetTransform_ReturnValue_1) == 0x0006A0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetItemDefinitionToShow_ItemDefinition_3) == 0x000700, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetItemDefinitionToShow_ItemDefinition_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000708, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1) == 0x0007E8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsPlayer_Pawn_Athena_2) == 0x0007F0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsPlayer_Pawn_Athena_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_6) == 0x0007F8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetContrailFXComponent_ReturnValue) == 0x000800, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetContrailFXComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetAnimInstance_ReturnValue) == 0x000808, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsFrontend_Anim_Instance) == 0x000810, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsFrontend_Anim_Instance' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_7) == 0x000818, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsValid_ReturnValue_4) == 0x000819, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_bool_Has_Been_Initd_Variable) == 0x00081A, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_bool_IsClosed_Variable) == 0x00081B, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SetupPrefabVisuals_ReturnValue) == 0x000820, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SetupPrefabVisuals_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsValid_ReturnValue_5) == 0x000828, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SpawnEmitterAtLocation_ReturnValue_2) == 0x000830, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SpawnEmitterAtLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetSubGame_ReturnValue) == 0x000838, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000839, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000840, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_int_Loop_Counter_Variable) == 0x000858, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2) == 0x000860, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Less_IntInt_ReturnValue) == 0x000868, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Add_IntInt_ReturnValue) == 0x00086C, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_CreateDelegate_OutputDelegate) == 0x000870, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_object_Variable) == 0x000880, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_MakeArray_Array_3) == 0x000888, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, Temp_struct_Variable) == 0x000898, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_CustomEvent_Item) == 0x0008A8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_CustomEvent_RequestId) == 0x0008B0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_CustomEvent_RequestId' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_CreateDelegate_OutputDelegate_1) == 0x0008C0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetContext_ReturnValue) == 0x0008D0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPartyMemberLocation_LocationOut) == 0x0008D8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPartyMemberLocation_LocationOut' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPartyMemberLocation_ReturnValue) == 0x0008D9, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPartyMemberLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_LinearColorLerp_ReturnValue) == 0x0008DC, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_SwitchEnum_CmpSuccess) == 0x0008EC, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_LinearColorLerp_ReturnValue_1) == 0x0008F0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000900, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000908, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000910, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetRelativeTransform_ReturnValue) == 0x000920, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_AddComponent_ReturnValue) == 0x000980, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsValid_ReturnValue_6) == 0x000988, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000990, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000998, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetCurrentLockerSubslotIndex_ReturnValue) == 0x0009A0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetCurrentLockerSubslotIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_AsB_Emote_Preview_Display) == 0x0009A8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_AsB_Emote_Preview_Display' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_DynamicCast_bSuccess_8) == 0x0009B0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPreviewPrefabAssetAtSubSlot_Asset) == 0x0009B8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPreviewPrefabAssetAtSubSlot_Asset' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetPreviewPrefabAssetAtSubSlot_ReturnValue) == 0x0009E0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetPreviewPrefabAssetAtSubSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x0009E8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_ClassDynamicCast_AsActor) == 0x0009F0, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, K2Node_ClassDynamicCast_bSuccess) == 0x0009F8, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_GetItemDefinitionToShow_ItemDefinition_4) == 0x000A00, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_GetItemDefinitionToShow_ItemDefinition_4' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000A08, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_Conv_FloatToVector_ReturnValue_1) == 0x000A10, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_Conv_FloatToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000A28, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000A40, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SpawnEmitterAtLocation_ReturnValue_3) == 0x000A58, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SpawnEmitterAtLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_SpawnEmitterAtLocation_ReturnValue_4) == 0x000A60, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_SpawnEmitterAtLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000A68, "Member 'PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

struct PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem final
{
public:
	class AActor*                                 ReturnValue;
};
static_assert(alignof(PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem) == 0x000008, "Wrong alignment on PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem");
static_assert(sizeof(PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem) == 0x000008, "Wrong size on PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem");
static_assert(offsetof(PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem, ReturnValue) == 0x000000, "Member 'PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem::ReturnValue' has a wrong offset!");

}
