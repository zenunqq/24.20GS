#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct TeamMemberPedestal_C_UserConstructionScript final
{
public:
	struct FLinearColor                           NewLocalVar_2;
	struct FLinearColor                           NewLocalVar_1;
	struct FLinearColor                           NewLocalVar_0;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_SelectFloat_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	bool                                          CallFunc_SetStaticMesh_ReturnValue;
	uint8                                         Pad_89[0x3];
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_2;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_3;
};
static_assert(alignof(TeamMemberPedestal_C_UserConstructionScript) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_UserConstructionScript");
static_assert(sizeof(TeamMemberPedestal_C_UserConstructionScript) == 0x0000A0, "Wrong size on TeamMemberPedestal_C_UserConstructionScript");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, NewLocalVar_2) == 0x000000, "Member 'TeamMemberPedestal_C_UserConstructionScript::NewLocalVar_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, NewLocalVar_1) == 0x000010, "Member 'TeamMemberPedestal_C_UserConstructionScript::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, NewLocalVar_0) == 0x000020, "Member 'TeamMemberPedestal_C_UserConstructionScript::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000030, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000040, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000048, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x000050, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue) == 0x000058, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000060, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue_1) == 0x000068, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000070, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue_2) == 0x000078, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000080, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000088, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x00008C, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SetIntensity_NewIntensity_ImplicitCast_1) == 0x000090, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SetIntensity_NewIntensity_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SetIntensity_NewIntensity_ImplicitCast_2) == 0x000094, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SetIntensity_NewIntensity_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_UserConstructionScript, CallFunc_SetIntensity_NewIntensity_ImplicitCast_3) == 0x000098, "Member 'TeamMemberPedestal_C_UserConstructionScript::CallFunc_SetIntensity_NewIntensity_ImplicitCast_3' has a wrong offset!");

struct TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled final
{
public:
	bool                                          IsHovered;
	bool                                          CallFunc_IsCurrentMemberLocal_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_3[0x5];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UTeamMemberPedestal_Nameplate_C*        K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled");
static_assert(sizeof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled) == 0x000038, "Wrong size on TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, IsHovered) == 0x000000, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::IsHovered' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, CallFunc_IsCurrentMemberLocal_ReturnValue) == 0x000001, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::CallFunc_IsCurrentMemberLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate) == 0x000018, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled, CallFunc_IsUsingGamepad_ReturnValue) == 0x000030, "Member 'TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

struct TeamMemberPedestal_C_TransitionToLoadingScreen final
{
public:
	bool                                          Bool;
};
static_assert(alignof(TeamMemberPedestal_C_TransitionToLoadingScreen) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_TransitionToLoadingScreen");
static_assert(sizeof(TeamMemberPedestal_C_TransitionToLoadingScreen) == 0x000001, "Wrong size on TeamMemberPedestal_C_TransitionToLoadingScreen");
static_assert(offsetof(TeamMemberPedestal_C_TransitionToLoadingScreen, Bool) == 0x000000, "Member 'TeamMemberPedestal_C_TransitionToLoadingScreen::Bool' has a wrong offset!");

struct TeamMemberPedestal_C_TransitionToCharacterScreen final
{
public:
	bool                                          Bool;
};
static_assert(alignof(TeamMemberPedestal_C_TransitionToCharacterScreen) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_TransitionToCharacterScreen");
static_assert(sizeof(TeamMemberPedestal_C_TransitionToCharacterScreen) == 0x000001, "Wrong size on TeamMemberPedestal_C_TransitionToCharacterScreen");
static_assert(offsetof(TeamMemberPedestal_C_TransitionToCharacterScreen, Bool) == 0x000000, "Member 'TeamMemberPedestal_C_TransitionToCharacterScreen::Bool' has a wrong offset!");

struct TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen final
{
public:
	bool                                          Bool;
};
static_assert(alignof(TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen");
static_assert(sizeof(TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen) == 0x000001, "Wrong size on TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen");
static_assert(offsetof(TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen, Bool) == 0x000000, "Member 'TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen::Bool' has a wrong offset!");

struct TeamMemberPedestal_C_StopLobbyAnimation final
{
public:
	bool                                          CallFunc_IsInAthena_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_3[0x5];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_C_StopLobbyAnimation) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_StopLobbyAnimation");
static_assert(sizeof(TeamMemberPedestal_C_StopLobbyAnimation) == 0x000010, "Wrong size on TeamMemberPedestal_C_StopLobbyAnimation");
static_assert(offsetof(TeamMemberPedestal_C_StopLobbyAnimation, CallFunc_IsInAthena_ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_C_StopLobbyAnimation::CallFunc_IsInAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_StopLobbyAnimation, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'TeamMemberPedestal_C_StopLobbyAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_StopLobbyAnimation, CallFunc_IsValid_ReturnValue_1) == 0x000002, "Member 'TeamMemberPedestal_C_StopLobbyAnimation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_StopLobbyAnimation, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_C_StopLobbyAnimation::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");

struct TeamMemberPedestal_C_SetSparkleParticlesEnabled final
{
public:
	bool                                          IsEnabled;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_C_SetSparkleParticlesEnabled) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_SetSparkleParticlesEnabled");
static_assert(sizeof(TeamMemberPedestal_C_SetSparkleParticlesEnabled) == 0x000002, "Wrong size on TeamMemberPedestal_C_SetSparkleParticlesEnabled");
static_assert(offsetof(TeamMemberPedestal_C_SetSparkleParticlesEnabled, IsEnabled) == 0x000000, "Member 'TeamMemberPedestal_C_SetSparkleParticlesEnabled::IsEnabled' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetSparkleParticlesEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'TeamMemberPedestal_C_SetSparkleParticlesEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct TeamMemberPedestal_C_SetFNCrew final
{
public:
	struct FLinearColor                           CrewColor2;
	struct FLinearColor                           CrewColor1;
};
static_assert(alignof(TeamMemberPedestal_C_SetFNCrew) == 0x000004, "Wrong alignment on TeamMemberPedestal_C_SetFNCrew");
static_assert(sizeof(TeamMemberPedestal_C_SetFNCrew) == 0x000020, "Wrong size on TeamMemberPedestal_C_SetFNCrew");
static_assert(offsetof(TeamMemberPedestal_C_SetFNCrew, CrewColor2) == 0x000000, "Member 'TeamMemberPedestal_C_SetFNCrew::CrewColor2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFNCrew, CrewColor1) == 0x000010, "Member 'TeamMemberPedestal_C_SetFNCrew::CrewColor1' has a wrong offset!");

struct TeamMemberPedestal_C_SetFakeBlobShadowVisiblity final
{
public:
	bool                                          Visible;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_4[0x4];
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetVisualEffectQuality_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_17[0x1];
	double                                        CallFunc_SelectFloat_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_SetFakeBlobShadowVisiblity");
static_assert(sizeof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity) == 0x000028, "Wrong size on TeamMemberPedestal_C_SetFakeBlobShadowVisiblity");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, Visible) == 0x000000, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::Visible' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_IsMobilePlatform_ReturnValue) == 0x000001, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_IsErebus_ReturnValue) == 0x000002, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_GetVisualEffectQuality_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_GetVisualEffectQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_BooleanOR_ReturnValue_1) == 0x000015, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_BooleanAND_ReturnValue) == 0x000016, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_SetFakeBlobShadowVisiblity, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000020, "Member 'TeamMemberPedestal_C_SetFakeBlobShadowVisiblity::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct TeamMemberPedestal_C_RefreshWidgets final
{
public:
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsInLobby_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue;
	bool                                          CallFunc_IsValidTeamMember_ReturnValue;
	bool                                          CallFunc_IsCurrentMemberLocal_ReturnValue;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsValidTeamMember_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_15[0x3];
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue_1;
	EFortStoreState                               CallFunc_GetStoreState_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	EFrontEndCamera                               CallFunc_GetFrontEndCamera_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
};
static_assert(alignof(TeamMemberPedestal_C_RefreshWidgets) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_RefreshWidgets");
static_assert(sizeof(TeamMemberPedestal_C_RefreshWidgets) == 0x000038, "Wrong size on TeamMemberPedestal_C_RefreshWidgets");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, Temp_bool_Variable) == 0x000008, "Member 'TeamMemberPedestal_C_RefreshWidgets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_IsInLobby_ReturnValue) == 0x000009, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_IsInLobby_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, Temp_byte_Variable) == 0x00000A, "Member 'TeamMemberPedestal_C_RefreshWidgets::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, Temp_byte_Variable_1) == 0x00000B, "Member 'TeamMemberPedestal_C_RefreshWidgets::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_IsInLocalSquadGroup_ReturnValue) == 0x00000C, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_IsInLocalSquadGroup_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_IsValidTeamMember_ReturnValue) == 0x00000D, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_IsValidTeamMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_IsCurrentMemberLocal_ReturnValue) == 0x00000E, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_IsCurrentMemberLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_IsInLocalSquadGroup_ReturnValue_1) == 0x00000F, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_IsInLocalSquadGroup_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_BooleanAND_ReturnValue_1) == 0x000011, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_IsValidTeamMember_ReturnValue_1) == 0x000012, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_IsValidTeamMember_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, K2Node_Select_Default) == 0x000014, "Member 'TeamMemberPedestal_C_RefreshWidgets::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_GetContext_ReturnValue_1) == 0x000018, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_GetStoreState_ReturnValue) == 0x000020, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_GetStoreState_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_GetContext_ReturnValue_2) == 0x000028, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_GetFrontEndCamera_ReturnValue) == 0x000031, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_GetFrontEndCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_BooleanAND_ReturnValue_2) == 0x000032, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000033, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000034, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_BooleanOR_ReturnValue) == 0x000035, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_RefreshWidgets, CallFunc_BooleanAND_ReturnValue_3) == 0x000036, "Member 'TeamMemberPedestal_C_RefreshWidgets::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

struct TeamMemberPedestal_C_PlayLobbyAnimation final
{
public:
	struct FGameplayTagQuery                      CallFunc_MakeGameplayTagQuery_ReturnValue;
	bool                                          CallFunc_IsInAthena_ReturnValue;
	uint8                                         Pad_49[0x7];
	TScriptInterface<class ICustomCharacterPartOwnerInterface> K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_61[0x7];
	TScriptInterface<class ICustomCharacterPartOwnerInterface> K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_7A[0x6];
	struct FGameplayTagQuery                      CallFunc_MakeGameplayTagQuery_ReturnValue_1;
};
static_assert(alignof(TeamMemberPedestal_C_PlayLobbyAnimation) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_PlayLobbyAnimation");
static_assert(sizeof(TeamMemberPedestal_C_PlayLobbyAnimation) == 0x0000C8, "Wrong size on TeamMemberPedestal_C_PlayLobbyAnimation");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, CallFunc_MakeGameplayTagQuery_ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::CallFunc_MakeGameplayTagQuery_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, CallFunc_IsInAthena_ReturnValue) == 0x000048, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::CallFunc_IsInAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface) == 0x000050, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface_1) == 0x000068, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_PlayLobbyAnimation, CallFunc_MakeGameplayTagQuery_ReturnValue_1) == 0x000080, "Member 'TeamMemberPedestal_C_PlayLobbyAnimation::CallFunc_MakeGameplayTagQuery_ReturnValue_1' has a wrong offset!");

struct TeamMemberPedestal_C_OnTeamMemberStateChanged final
{
public:
	struct FFortTeamMemberInfo                    Team_Member_Info;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_C_OnTeamMemberStateChanged) == 0x000010, "Wrong alignment on TeamMemberPedestal_C_OnTeamMemberStateChanged");
static_assert(sizeof(TeamMemberPedestal_C_OnTeamMemberStateChanged) == 0x000260, "Wrong size on TeamMemberPedestal_C_OnTeamMemberStateChanged");
static_assert(offsetof(TeamMemberPedestal_C_OnTeamMemberStateChanged, Team_Member_Info) == 0x000000, "Member 'TeamMemberPedestal_C_OnTeamMemberStateChanged::Team_Member_Info' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnTeamMemberStateChanged, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000250, "Member 'TeamMemberPedestal_C_OnTeamMemberStateChanged::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

struct TeamMemberPedestal_C_OnTeamMemberSet final
{
public:
	bool                                          bHasValidTeamMember;
};
static_assert(alignof(TeamMemberPedestal_C_OnTeamMemberSet) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_OnTeamMemberSet");
static_assert(sizeof(TeamMemberPedestal_C_OnTeamMemberSet) == 0x000001, "Wrong size on TeamMemberPedestal_C_OnTeamMemberSet");
static_assert(offsetof(TeamMemberPedestal_C_OnTeamMemberSet, bHasValidTeamMember) == 0x000000, "Member 'TeamMemberPedestal_C_OnTeamMemberSet::bHasValidTeamMember' has a wrong offset!");

struct TeamMemberPedestal_C_OnPedestalIsPopulatedChanged final
{
public:
	bool                                          bIsPopulated;
	bool                                          bOwningSquadContainsLocalPlayer;
};
static_assert(alignof(TeamMemberPedestal_C_OnPedestalIsPopulatedChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_OnPedestalIsPopulatedChanged");
static_assert(sizeof(TeamMemberPedestal_C_OnPedestalIsPopulatedChanged) == 0x000002, "Wrong size on TeamMemberPedestal_C_OnPedestalIsPopulatedChanged");
static_assert(offsetof(TeamMemberPedestal_C_OnPedestalIsPopulatedChanged, bIsPopulated) == 0x000000, "Member 'TeamMemberPedestal_C_OnPedestalIsPopulatedChanged::bIsPopulated' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnPedestalIsPopulatedChanged, bOwningSquadContainsLocalPlayer) == 0x000001, "Member 'TeamMemberPedestal_C_OnPedestalIsPopulatedChanged::bOwningSquadContainsLocalPlayer' has a wrong offset!");

struct TeamMemberPedestal_C_OnPartyDataChanged final
{
public:
	struct FFortTeamMemberInfo                    Member_Info;
};
static_assert(alignof(TeamMemberPedestal_C_OnPartyDataChanged) == 0x000010, "Wrong alignment on TeamMemberPedestal_C_OnPartyDataChanged");
static_assert(sizeof(TeamMemberPedestal_C_OnPartyDataChanged) == 0x000250, "Wrong size on TeamMemberPedestal_C_OnPartyDataChanged");
static_assert(offsetof(TeamMemberPedestal_C_OnPartyDataChanged, Member_Info) == 0x000000, "Member 'TeamMemberPedestal_C_OnPartyDataChanged::Member_Info' has a wrong offset!");

struct TeamMemberPedestal_C_OnOwningPedestalGroupEstablished final
{
public:
	int32                                         SquadIdx;
	bool                                          bSquadHasLocalPlayer;
	bool                                          bIsPopulated;
};
static_assert(alignof(TeamMemberPedestal_C_OnOwningPedestalGroupEstablished) == 0x000004, "Wrong alignment on TeamMemberPedestal_C_OnOwningPedestalGroupEstablished");
static_assert(sizeof(TeamMemberPedestal_C_OnOwningPedestalGroupEstablished) == 0x000008, "Wrong size on TeamMemberPedestal_C_OnOwningPedestalGroupEstablished");
static_assert(offsetof(TeamMemberPedestal_C_OnOwningPedestalGroupEstablished, SquadIdx) == 0x000000, "Member 'TeamMemberPedestal_C_OnOwningPedestalGroupEstablished::SquadIdx' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnOwningPedestalGroupEstablished, bSquadHasLocalPlayer) == 0x000004, "Member 'TeamMemberPedestal_C_OnOwningPedestalGroupEstablished::bSquadHasLocalPlayer' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnOwningPedestalGroupEstablished, bIsPopulated) == 0x000005, "Member 'TeamMemberPedestal_C_OnOwningPedestalGroupEstablished::bIsPopulated' has a wrong offset!");

struct TeamMemberPedestal_C_OnNewSquadEstablished final
{
public:
	bool                                          bMultipleSquadsPopulated;
	bool                                          bOwningSquadContainsLocalPlayer;
	uint8                                         Pad_2[0x6];
	struct FAthenaTeamDisplayInfo                 OwningSquadStyle;
};
static_assert(alignof(TeamMemberPedestal_C_OnNewSquadEstablished) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_OnNewSquadEstablished");
static_assert(sizeof(TeamMemberPedestal_C_OnNewSquadEstablished) == 0x000090, "Wrong size on TeamMemberPedestal_C_OnNewSquadEstablished");
static_assert(offsetof(TeamMemberPedestal_C_OnNewSquadEstablished, bMultipleSquadsPopulated) == 0x000000, "Member 'TeamMemberPedestal_C_OnNewSquadEstablished::bMultipleSquadsPopulated' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnNewSquadEstablished, bOwningSquadContainsLocalPlayer) == 0x000001, "Member 'TeamMemberPedestal_C_OnNewSquadEstablished::bOwningSquadContainsLocalPlayer' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnNewSquadEstablished, OwningSquadStyle) == 0x000008, "Member 'TeamMemberPedestal_C_OnNewSquadEstablished::OwningSquadStyle' has a wrong offset!");

struct TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9");
static_assert(sizeof(TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9) == 0x000008, "Wrong size on TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9");
static_assert(offsetof(TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9, Loaded) == 0x000000, "Member 'TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9::Loaded' has a wrong offset!");

struct TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged final
{
public:
	bool                                          bIsInMatch;
};
static_assert(alignof(TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged");
static_assert(sizeof(TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged) == 0x000001, "Wrong size on TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged");
static_assert(offsetof(TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged, bIsInMatch) == 0x000000, "Member 'TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged::bIsInMatch' has a wrong offset!");

struct TeamMemberPedestal_C_OnGameReadinessChanged final
{
public:
	EGameReadiness                                GameReadiness;
};
static_assert(alignof(TeamMemberPedestal_C_OnGameReadinessChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_OnGameReadinessChanged");
static_assert(sizeof(TeamMemberPedestal_C_OnGameReadinessChanged) == 0x000001, "Wrong size on TeamMemberPedestal_C_OnGameReadinessChanged");
static_assert(offsetof(TeamMemberPedestal_C_OnGameReadinessChanged, GameReadiness) == 0x000000, "Member 'TeamMemberPedestal_C_OnGameReadinessChanged::GameReadiness' has a wrong offset!");

struct TeamMemberPedestal_C_OnFrontEndCameraChanged final
{
public:
	EFrontEndCamera                               New_Camera;
	EFrontEndCamera                               Old_Camera;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_C_OnFrontEndCameraChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_OnFrontEndCameraChanged");
static_assert(sizeof(TeamMemberPedestal_C_OnFrontEndCameraChanged) == 0x000007, "Wrong size on TeamMemberPedestal_C_OnFrontEndCameraChanged");
static_assert(offsetof(TeamMemberPedestal_C_OnFrontEndCameraChanged, New_Camera) == 0x000000, "Member 'TeamMemberPedestal_C_OnFrontEndCameraChanged::New_Camera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnFrontEndCameraChanged, Old_Camera) == 0x000001, "Member 'TeamMemberPedestal_C_OnFrontEndCameraChanged::Old_Camera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnFrontEndCameraChanged, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'TeamMemberPedestal_C_OnFrontEndCameraChanged::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnFrontEndCameraChanged, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'TeamMemberPedestal_C_OnFrontEndCameraChanged::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnFrontEndCameraChanged, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'TeamMemberPedestal_C_OnFrontEndCameraChanged::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnFrontEndCameraChanged, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000005, "Member 'TeamMemberPedestal_C_OnFrontEndCameraChanged::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnFrontEndCameraChanged, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'TeamMemberPedestal_C_OnFrontEndCameraChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct TeamMemberPedestal_C_OnAvatarChanged final
{
public:
	class UTexture2D*                             AvatarImage;
	struct FColor                                 AvatarBackground;
	struct FColor                                 HighlightColor;
};
static_assert(alignof(TeamMemberPedestal_C_OnAvatarChanged) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_OnAvatarChanged");
static_assert(sizeof(TeamMemberPedestal_C_OnAvatarChanged) == 0x000010, "Wrong size on TeamMemberPedestal_C_OnAvatarChanged");
static_assert(offsetof(TeamMemberPedestal_C_OnAvatarChanged, AvatarImage) == 0x000000, "Member 'TeamMemberPedestal_C_OnAvatarChanged::AvatarImage' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnAvatarChanged, AvatarBackground) == 0x000008, "Member 'TeamMemberPedestal_C_OnAvatarChanged::AvatarBackground' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_OnAvatarChanged, HighlightColor) == 0x00000C, "Member 'TeamMemberPedestal_C_OnAvatarChanged::HighlightColor' has a wrong offset!");

struct TeamMemberPedestal_C_InitializeInputActionRefs final
{
public:
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	class UTeamMemberPedestal_Nameplate_C*        K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;
	class ULobbyPlayerAddPlayer_C*                K2Node_DynamicCast_AsLobby_Player_Add_Player;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_29[0x7];
	class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(TeamMemberPedestal_C_InitializeInputActionRefs) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_InitializeInputActionRefs");
static_assert(sizeof(TeamMemberPedestal_C_InitializeInputActionRefs) == 0x000040, "Wrong size on TeamMemberPedestal_C_InitializeInputActionRefs");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate) == 0x000008, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x000018, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, K2Node_DynamicCast_AsLobby_Player_Add_Player) == 0x000020, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::K2Node_DynamicCast_AsLobby_Player_Add_Player' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button) == 0x000030, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeInputActionRefs, K2Node_DynamicCast_bSuccess_2) == 0x000038, "Member 'TeamMemberPedestal_C_InitializeInputActionRefs::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct TeamMemberPedestal_C_InitializeContextEvents final
{
public:
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_C[0x4];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_24[0x4];
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue_1;
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_3C[0x4];
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue_2;
};
static_assert(alignof(TeamMemberPedestal_C_InitializeContextEvents) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_InitializeContextEvents");
static_assert(sizeof(TeamMemberPedestal_C_InitializeContextEvents) == 0x000050, "Wrong size on TeamMemberPedestal_C_InitializeContextEvents");
static_assert(offsetof(TeamMemberPedestal_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'TeamMemberPedestal_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'TeamMemberPedestal_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue_1) == 0x000028, "Member 'TeamMemberPedestal_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'TeamMemberPedestal_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeContextEvents, CallFunc_GetLocalPlayerTeam_ReturnValue) == 0x000040, "Member 'TeamMemberPedestal_C_InitializeContextEvents::CallFunc_GetLocalPlayerTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue_2) == 0x000048, "Member 'TeamMemberPedestal_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");

struct TeamMemberPedestal_C_HandleHoverInputActions final
{
public:
	bool                                          bIsHovered;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_IsCurrentMemberLocal_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(TeamMemberPedestal_C_HandleHoverInputActions) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_HandleHoverInputActions");
static_assert(sizeof(TeamMemberPedestal_C_HandleHoverInputActions) == 0x000011, "Wrong size on TeamMemberPedestal_C_HandleHoverInputActions");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, bIsHovered) == 0x000000, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::bIsHovered' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_byte_Variable) == 0x000001, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_byte_Variable_1) == 0x000002, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_bool_Variable) == 0x000003, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_byte_Variable_2) == 0x000004, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_byte_Variable_3) == 0x000005, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_bool_Variable_1) == 0x000006, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_byte_Variable_4) == 0x000007, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_byte_Variable_5) == 0x000008, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, Temp_bool_Variable_2) == 0x000009, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, CallFunc_IsCurrentMemberLocal_ReturnValue) == 0x00000A, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::CallFunc_IsCurrentMemberLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, K2Node_Select_Default) == 0x00000D, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, K2Node_Select_Default_1) == 0x00000E, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, CallFunc_BooleanAND_ReturnValue) == 0x00000F, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleHoverInputActions, K2Node_Select_Default_2) == 0x000010, "Member 'TeamMemberPedestal_C_HandleHoverInputActions::K2Node_Select_Default_2' has a wrong offset!");

struct TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected final
{
public:
	class UObject*                                EventSource;
	class UObject*                                EventFocus;
	struct FFortClientEvent                       ClientEvent;
};
static_assert(alignof(TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected");
static_assert(sizeof(TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected) == 0x000028, "Wrong size on TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected");
static_assert(offsetof(TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected, EventSource) == 0x000000, "Member 'TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected::EventSource' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected, EventFocus) == 0x000008, "Member 'TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected::EventFocus' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected, ClientEvent) == 0x000010, "Member 'TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected::ClientEvent' has a wrong offset!");

struct TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed final
{
public:
	class UObject*                                EventSource;
	class UObject*                                EventFocus;
	struct FFortClientEvent                       ClientEvent;
};
static_assert(alignof(TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed");
static_assert(sizeof(TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed) == 0x000028, "Wrong size on TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed");
static_assert(offsetof(TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed, EventSource) == 0x000000, "Member 'TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed::EventSource' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed, EventFocus) == 0x000008, "Member 'TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed::EventFocus' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed, ClientEvent) == 0x000010, "Member 'TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed::ClientEvent' has a wrong offset!");

struct TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal final
{
public:
	int32                                         EntryPoint;
	EGameReadiness                                Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	ETimelineDirection                            Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	struct FLinearColor                           Temp_struct_Variable;
	uint8                                         Pad_34[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable;
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_52[0x2];
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_65[0x3];
	double                                        Temp_real_Variable_3;
	double                                        Temp_real_Variable_4;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_79[0x7];
	double                                        Temp_real_Variable_5;
	double                                        Temp_real_Variable_6;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	bool                                          K2Node_Select_Default;
	uint8                                         Pad_A9[0x3];
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;
	bool                                          K2Node_Event_bIsInMatch;
	uint8                                         Pad_199[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          K2Node_Event_bIsPopulated_1;
	bool                                          K2Node_Event_bOwningSquadContainsLocalPlayer_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1A3[0x5];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1B1[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_1C1[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	bool                                          CallFunc_IsInFrontend_ReturnValue;
	uint8                                         Pad_1F9[0x7];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	EGameReadiness                                K2Node_Event_GameReadiness;
	uint8                                         Pad_211[0x7];
	double                                        K2Node_Select_Default_1;
	TArray<class ACameraAnimationTransition_C*>   CallFunc_GetAllActorsOfClass_OutActors;
	class ACameraAnimationTransition_C*           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          K2Node_Event_bMultipleSquadsPopulated;
	bool                                          K2Node_Event_bOwningSquadContainsLocalPlayer;
	uint8                                         Pad_23E[0x2];
	struct FAthenaTeamDisplayInfo                 K2Node_Event_OwningSquadStyle;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue;
	uint8                                         Pad_2C9[0x3];
	struct FLinearColor                           K2Node_Select_Default_2;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue_1;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue_2;
	uint8                                         Pad_2DE[0x2];
	int32                                         K2Node_Event_SquadIdx;
	bool                                          K2Node_Event_bSquadHasLocalPlayer;
	bool                                          K2Node_Event_bIsPopulated;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue_3;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue_4;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue_5;
	bool                                          K2Node_Event_bHasValidTeamMember;
	bool                                          CallFunc_IsPlayingFortnite_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_2EF[0x1];
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;
	bool                                          CallFunc_IsInLocalSquadGroup_ReturnValue_6;
	uint8                                         Pad_301[0x7];
	double                                        K2Node_Select_Default_3;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	class UTexture2D*                             K2Node_Event_AvatarImage;
	struct FColor                                 K2Node_Event_AvatarBackground;
	struct FColor                                 K2Node_Event_HighlightColor;
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;
	int32                                         CallFunc_GetMaterialIndex_ReturnValue;
	uint8                                         Pad_344[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	bool                                          K2Node_CustomEvent_Bool_2;
	bool                                          K2Node_CustomEvent_Bool_1;
	bool                                          K2Node_CustomEvent_Bool;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_369[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	class UObject*                                K2Node_HandleClientEvent_EventSource_1;
	class UObject*                                K2Node_HandleClientEvent_EventFocus_1;
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent_1;
	class UObject*                                K2Node_HandleClientEvent_EventSource;
	class UObject*                                K2Node_HandleClientEvent_EventFocus;
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;
	int32                                         CallFunc_GetCurrentTeamSize_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_495[0x3];
	int32                                         CallFunc_GetCurrentTeamSize_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_49D[0x3];
	double                                        K2Node_Select_Default_4;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_4A9[0x3];
	struct FLinearColor                           K2Node_Select_Default_5;
	bool                                          CallFunc_IsInFrontend_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	uint8                                         Pad_4BE[0x2];
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_2;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_3;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_4;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
};
static_assert(alignof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal");
static_assert(sizeof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal) == 0x0004E8, "Wrong size on TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, EntryPoint) == 0x000000, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_byte_Variable) == 0x000004, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_real_Variable) == 0x000008, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_real_Variable_1) == 0x000010, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_real_Variable_2) == 0x000018, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_byte_Variable_1) == 0x000020, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_bool_Variable) == 0x000021, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_bool_Variable_1) == 0x000022, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_bool_Variable_2) == 0x000023, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_struct_Variable) == 0x000024, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_CustomEvent_Loaded) == 0x000038, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_object_Variable) == 0x000040, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_DynamicCast_AsTexture) == 0x000048, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_bool_Variable_3) == 0x000051, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_struct_Variable_1) == 0x000054, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_bool_Variable_4) == 0x000064, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_real_Variable_3) == 0x000068, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_real_Variable_4) == 0x000070, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_bool_Variable_5) == 0x000078, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_real_Variable_5) == 0x000080, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_real_Variable_6) == 0x000088, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_real_Variable_6' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Select_Default) == 0x0000A8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000B8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bIsInMatch) == 0x000198, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bIsInMatch' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_int_Array_Index_Variable) == 0x00019C, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bIsPopulated_1) == 0x0001A0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bIsPopulated_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bOwningSquadContainsLocalPlayer_1) == 0x0001A1, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bOwningSquadContainsLocalPlayer_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsValid_ReturnValue) == 0x0001A2, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0001A8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_DynamicCast_AsPlayer_Pawn_Athena_1) == 0x0001B8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_DynamicCast_AsPlayer_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_DynamicCast_bSuccess_2) == 0x0001C0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0001D0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0001D8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0001E0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x0001E8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x0001F0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInFrontend_ReturnValue) == 0x0001F8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInFrontend_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_GetMaterial_ReturnValue) == 0x000200, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000208, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_GameReadiness) == 0x000210, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_GameReadiness' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Select_Default_1) == 0x000218, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_GetAllActorsOfClass_OutActors) == 0x000220, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Array_Get_Item) == 0x000230, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Array_Length_ReturnValue) == 0x000238, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bMultipleSquadsPopulated) == 0x00023C, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bMultipleSquadsPopulated' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bOwningSquadContainsLocalPlayer) == 0x00023D, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bOwningSquadContainsLocalPlayer' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_OwningSquadStyle) == 0x000240, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_OwningSquadStyle' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInLocalSquadGroup_ReturnValue) == 0x0002C8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInLocalSquadGroup_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Select_Default_2) == 0x0002CC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInLocalSquadGroup_ReturnValue_1) == 0x0002DC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInLocalSquadGroup_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInLocalSquadGroup_ReturnValue_2) == 0x0002DD, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInLocalSquadGroup_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_SquadIdx) == 0x0002E0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_SquadIdx' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bSquadHasLocalPlayer) == 0x0002E4, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bSquadHasLocalPlayer' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bIsPopulated) == 0x0002E5, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bIsPopulated' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_BooleanOR_ReturnValue) == 0x0002E6, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002E7, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInLocalSquadGroup_ReturnValue_3) == 0x0002E8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInLocalSquadGroup_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInLocalSquadGroup_ReturnValue_4) == 0x0002E9, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInLocalSquadGroup_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInLocalSquadGroup_ReturnValue_5) == 0x0002EA, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInLocalSquadGroup_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_bHasValidTeamMember) == 0x0002EB, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_bHasValidTeamMember' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsPlayingFortnite_ReturnValue) == 0x0002EC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsPlayingFortnite_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Not_PreBool_ReturnValue) == 0x0002ED, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_BooleanAND_ReturnValue) == 0x0002EE, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x0002F0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInLocalSquadGroup_ReturnValue_6) == 0x000300, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInLocalSquadGroup_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Select_Default_3) == 0x000308, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_GetMaterial_ReturnValue_1) == 0x000310, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_GetMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000318, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_AvatarImage) == 0x000320, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_AvatarImage' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_AvatarBackground) == 0x000328, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_AvatarBackground' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Event_HighlightColor) == 0x00032C, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Event_HighlightColor' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000330, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_GetMaterialIndex_ReturnValue) == 0x000340, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_GetMaterialIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_GetMaterial_ReturnValue_2) == 0x000348, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_GetMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000350, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x000358, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_CustomEvent_Bool_2) == 0x000360, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_CustomEvent_Bool_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_CustomEvent_Bool_1) == 0x000361, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_CustomEvent_Bool_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_CustomEvent_Bool) == 0x000362, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_CustomEvent_Bool' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000363, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, Temp_int_Loop_Counter_Variable) == 0x000364, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Less_IntInt_ReturnValue) == 0x000368, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Add_IntInt_ReturnValue) == 0x00036C, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000370, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_HandleClientEvent_EventSource_1) == 0x000440, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_HandleClientEvent_EventSource_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_HandleClientEvent_EventFocus_1) == 0x000448, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_HandleClientEvent_EventFocus_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_HandleClientEvent_ClientEvent_1) == 0x000450, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_HandleClientEvent_ClientEvent_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_HandleClientEvent_EventSource) == 0x000468, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_HandleClientEvent_EventFocus) == 0x000470, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_HandleClientEvent_ClientEvent) == 0x000478, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_GetCurrentTeamSize_ReturnValue) == 0x000490, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_GetCurrentTeamSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Greater_IntInt_ReturnValue) == 0x000494, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_GetCurrentTeamSize_ReturnValue_1) == 0x000498, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_GetCurrentTeamSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00049C, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Select_Default_4) == 0x0004A0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Not_PreBool_ReturnValue_1) == 0x0004A8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, K2Node_Select_Default_5) == 0x0004AC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_IsInFrontend_ReturnValue_1) == 0x0004BC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_IsInFrontend_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_Not_PreBool_ReturnValue_2) == 0x0004BD, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x0004C0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetIntensity_NewIntensity_ImplicitCast_1) == 0x0004C4, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetIntensity_NewIntensity_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetIntensity_NewIntensity_ImplicitCast_2) == 0x0004C8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetIntensity_NewIntensity_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetIntensity_NewIntensity_ImplicitCast_3) == 0x0004CC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetIntensity_NewIntensity_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetIntensity_NewIntensity_ImplicitCast_4) == 0x0004D0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetIntensity_NewIntensity_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetIntensity_NewIntensity_ImplicitCast_5) == 0x0004D4, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetIntensity_NewIntensity_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0004D8, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0004DC, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x0004E0, "Member 'TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");

struct TeamMemberPedestal_C_EnableHologram final
{
public:
	bool                                          Enabled;
};
static_assert(alignof(TeamMemberPedestal_C_EnableHologram) == 0x000001, "Wrong alignment on TeamMemberPedestal_C_EnableHologram");
static_assert(sizeof(TeamMemberPedestal_C_EnableHologram) == 0x000001, "Wrong size on TeamMemberPedestal_C_EnableHologram");
static_assert(offsetof(TeamMemberPedestal_C_EnableHologram, Enabled) == 0x000000, "Member 'TeamMemberPedestal_C_EnableHologram::Enabled' has a wrong offset!");

struct TeamMemberPedestal_C_ClearPawnMaterialOverride final
{
public:
	class APlayerPawn_Athena_Generic_C*           K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_RemoveMaterialOverrideLocal_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_C_ClearPawnMaterialOverride) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_ClearPawnMaterialOverride");
static_assert(sizeof(TeamMemberPedestal_C_ClearPawnMaterialOverride) == 0x000010, "Wrong size on TeamMemberPedestal_C_ClearPawnMaterialOverride");
static_assert(offsetof(TeamMemberPedestal_C_ClearPawnMaterialOverride, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic) == 0x000000, "Member 'TeamMemberPedestal_C_ClearPawnMaterialOverride::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ClearPawnMaterialOverride, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'TeamMemberPedestal_C_ClearPawnMaterialOverride::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ClearPawnMaterialOverride, CallFunc_RemoveMaterialOverrideLocal_ReturnValue) == 0x000009, "Member 'TeamMemberPedestal_C_ClearPawnMaterialOverride::CallFunc_RemoveMaterialOverrideLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ClearPawnMaterialOverride, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'TeamMemberPedestal_C_ClearPawnMaterialOverride::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn final
{
public:
	class APlayerPawn_Athena_Generic_C*           K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_RemoveMaterialOverrideLocal_ReturnValue;
	uint8                                         Pad_A[0x6];
	TSoftObjectPtr<class UMaterialInterface>      CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	struct FGuid                                  CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn) == 0x000008, "Wrong alignment on TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn");
static_assert(sizeof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn) == 0x000050, "Wrong size on TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn");
static_assert(offsetof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic) == 0x000000, "Member 'TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn, CallFunc_RemoveMaterialOverrideLocal_ReturnValue) == 0x000009, "Member 'TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn::CallFunc_RemoveMaterialOverrideLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn, CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue) == 0x000038, "Member 'TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn::CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'TeamMemberPedestal_C_ApplyHoloMaterialOverrideToPawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
