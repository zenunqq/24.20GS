#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                Temp_object_Variable;
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess;
	EPingCommandType                              Temp_byte_Variable;
	uint8                                         Pad_1A[0x6];
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;
	bool                                          K2Node_CustomEvent_bShowBackground;
	uint8                                         Pad_C1[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_D1[0x7];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerStateAthena*                 K2Node_CustomEvent_PSA;
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_F1[0x7];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSocialAvatarBrush_ReturnValue;
	struct FLinearColor                           CallFunc_GetPinColor_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UObject*                                Temp_object_Variable_1;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14C[0x4];
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	EPingCommandType                              K2Node_CustomEvent_PingCommand;
	uint8                                         Pad_15A[0x2];
	struct FLinearColor                           K2Node_CustomEvent_Color_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_16D[0x3];
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;
	struct FLinearColor                           K2Node_CustomEvent_Color;
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
};
static_assert(alignof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo) == 0x000008, "Wrong alignment on ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo");
static_assert(sizeof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo) == 0x0001C0, "Wrong size on ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, EntryPoint) == 0x000000, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, Temp_object_Variable) == 0x000008, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, Temp_byte_Variable) == 0x000019, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, Temp_softobject_Variable) == 0x000020, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, Temp_softobject_Variable_1) == 0x000048, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, Temp_softobject_Variable_2) == 0x000070, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, Temp_softobject_Variable_3) == 0x000098, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CustomEvent_bShowBackground) == 0x0000C0, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CustomEvent_bShowBackground' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CustomEvent_Loaded) == 0x0000C8, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_Event_IsDesignTime) == 0x0000D0, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000D8, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CustomEvent_PSA) == 0x0000E0, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CustomEvent_PSA' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x0000E8, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, CallFunc_GetSocialAvatarBrush_ReturnValue) == 0x0000F8, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::CallFunc_GetSocialAvatarBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, CallFunc_GetPinColor_ReturnValue) == 0x000120, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::CallFunc_GetPinColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000130, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, Temp_object_Variable_1) == 0x000138, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_DynamicCast_AsTexture_2D_1) == 0x000150, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_DynamicCast_bSuccess_2) == 0x000158, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CustomEvent_PingCommand) == 0x000159, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CustomEvent_PingCommand' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CustomEvent_Color_1) == 0x00015C, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CustomEvent_Color_1' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_SwitchEnum_CmpSuccess) == 0x00016C, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_Select_Default) == 0x000170, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CustomEvent_Color) == 0x000198, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CustomEvent_Color' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CustomEvent_Loaded_1) == 0x0001A8, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B0, "Member 'ConvertedMarkerInfo_C_ExecuteUbergraph_ConvertedMarkerInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

struct ConvertedMarkerInfo_C_InitNPCCommandIcon final
{
public:
	struct FLinearColor                           Color;
};
static_assert(alignof(ConvertedMarkerInfo_C_InitNPCCommandIcon) == 0x000004, "Wrong alignment on ConvertedMarkerInfo_C_InitNPCCommandIcon");
static_assert(sizeof(ConvertedMarkerInfo_C_InitNPCCommandIcon) == 0x000010, "Wrong size on ConvertedMarkerInfo_C_InitNPCCommandIcon");
static_assert(offsetof(ConvertedMarkerInfo_C_InitNPCCommandIcon, Color) == 0x000000, "Member 'ConvertedMarkerInfo_C_InitNPCCommandIcon::Color' has a wrong offset!");

struct ConvertedMarkerInfo_C_InitPlayerIconState final
{
public:
	class AFortPlayerStateAthena*                 PSA;
};
static_assert(alignof(ConvertedMarkerInfo_C_InitPlayerIconState) == 0x000008, "Wrong alignment on ConvertedMarkerInfo_C_InitPlayerIconState");
static_assert(sizeof(ConvertedMarkerInfo_C_InitPlayerIconState) == 0x000008, "Wrong size on ConvertedMarkerInfo_C_InitPlayerIconState");
static_assert(offsetof(ConvertedMarkerInfo_C_InitPlayerIconState, PSA) == 0x000000, "Member 'ConvertedMarkerInfo_C_InitPlayerIconState::PSA' has a wrong offset!");

struct ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3) == 0x000008, "Wrong alignment on ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3");
static_assert(sizeof(ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3) == 0x000008, "Wrong size on ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3");
static_assert(offsetof(ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3, Loaded) == 0x000000, "Member 'ConvertedMarkerInfo_C_OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3::Loaded' has a wrong offset!");

struct ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0) == 0x000008, "Wrong alignment on ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0");
static_assert(sizeof(ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0) == 0x000008, "Wrong size on ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0");
static_assert(offsetof(ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0, Loaded) == 0x000000, "Member 'ConvertedMarkerInfo_C_OnLoaded_68559753464A154900ECA9BC6BB940C0::Loaded' has a wrong offset!");

struct ConvertedMarkerInfo_C_OverrideShowBackground final
{
public:
	bool                                          bShowBackground;
};
static_assert(alignof(ConvertedMarkerInfo_C_OverrideShowBackground) == 0x000001, "Wrong alignment on ConvertedMarkerInfo_C_OverrideShowBackground");
static_assert(sizeof(ConvertedMarkerInfo_C_OverrideShowBackground) == 0x000001, "Wrong size on ConvertedMarkerInfo_C_OverrideShowBackground");
static_assert(offsetof(ConvertedMarkerInfo_C_OverrideShowBackground, bShowBackground) == 0x000000, "Member 'ConvertedMarkerInfo_C_OverrideShowBackground::bShowBackground' has a wrong offset!");

struct ConvertedMarkerInfo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ConvertedMarkerInfo_C_PreConstruct) == 0x000001, "Wrong alignment on ConvertedMarkerInfo_C_PreConstruct");
static_assert(sizeof(ConvertedMarkerInfo_C_PreConstruct) == 0x000001, "Wrong size on ConvertedMarkerInfo_C_PreConstruct");
static_assert(offsetof(ConvertedMarkerInfo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ConvertedMarkerInfo_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ConvertedMarkerInfo_C_SetBackgroundVisibility final
{
public:
	bool                                          bOverride;
	bool                                          bBackgroundVisible;
	bool                                          bLocal_BackgroundVisible;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
};
static_assert(alignof(ConvertedMarkerInfo_C_SetBackgroundVisibility) == 0x000001, "Wrong alignment on ConvertedMarkerInfo_C_SetBackgroundVisibility");
static_assert(sizeof(ConvertedMarkerInfo_C_SetBackgroundVisibility) == 0x00000A, "Wrong size on ConvertedMarkerInfo_C_SetBackgroundVisibility");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, bOverride) == 0x000000, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::bOverride' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, bBackgroundVisible) == 0x000001, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::bBackgroundVisible' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, bLocal_BackgroundVisible) == 0x000002, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::bLocal_BackgroundVisible' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, Temp_byte_Variable) == 0x000003, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, Temp_byte_Variable_1) == 0x000004, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, Temp_bool_Variable) == 0x000005, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000006, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, K2Node_Select_Default) == 0x000007, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000008, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_SetBackgroundVisibility, CallFunc_BooleanOR_ReturnValue_1) == 0x000009, "Member 'ConvertedMarkerInfo_C_SetBackgroundVisibility::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

struct ConvertedMarkerInfo_C_UpdateCommandIcon final
{
public:
	EPingCommandType                              PingCommand;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           Color;
};
static_assert(alignof(ConvertedMarkerInfo_C_UpdateCommandIcon) == 0x000004, "Wrong alignment on ConvertedMarkerInfo_C_UpdateCommandIcon");
static_assert(sizeof(ConvertedMarkerInfo_C_UpdateCommandIcon) == 0x000014, "Wrong size on ConvertedMarkerInfo_C_UpdateCommandIcon");
static_assert(offsetof(ConvertedMarkerInfo_C_UpdateCommandIcon, PingCommand) == 0x000000, "Member 'ConvertedMarkerInfo_C_UpdateCommandIcon::PingCommand' has a wrong offset!");
static_assert(offsetof(ConvertedMarkerInfo_C_UpdateCommandIcon, Color) == 0x000004, "Member 'ConvertedMarkerInfo_C_UpdateCommandIcon::Color' has a wrong offset!");

}
