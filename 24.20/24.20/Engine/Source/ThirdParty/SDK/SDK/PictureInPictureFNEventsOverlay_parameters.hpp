#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PictureInPictureDescriptors_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	struct FPiPPartnerSource                      CallFunc_GetCurrentSource_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_132[0x6];
	struct FPiPPartnerSource                      CallFunc_GetCurrentSource_ReturnValue_1;
	class FName                                   Temp_name_Variable;
	uint8                                         Pad_264[0x4];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;
	class AFortGameModeFrontEnd*                  K2Node_DynamicCast_AsFort_Game_Mode_Front_End;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_281[0x7];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          CallFunc_IsActivated_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_3FC[0x4];
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;
	class FName                                   Temp_name_Variable_1;
	class FName                                   Temp_name_Variable_2;
	int32                                         K2Node_CustomEvent_ErrorNumber;
	uint8                                         Pad_414[0x4];
	class FString                                 K2Node_CustomEvent_ErrorMessage;
	TDelegate<void(int32 ErrorType, const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_434[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_49A[0x2];
	class FName                                   Temp_name_Variable_3;
	TDelegate<void(int32 ErrorType, const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate_1;
	class FName                                   Temp_name_Variable_4;
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_4B9[0x3];
	class FName                                   Temp_name_Variable_5;
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_4C2[0x6];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay) == 0x000008, "Wrong alignment on PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay");
static_assert(sizeof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay) == 0x000540, "Wrong size on PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, EntryPoint) == 0x000000, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_2) == 0x000006, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_3) == 0x000007, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_GetCurrentSource_ReturnValue) == 0x000008, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_GetCurrentSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_4) == 0x000130, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_5) == 0x000131, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_GetCurrentSource_ReturnValue_1) == 0x000138, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_GetCurrentSource_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, Temp_name_Variable) == 0x000260, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000268, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_GetGameMode_ReturnValue) == 0x000270, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_DynamicCast_AsFort_Game_Mode_Front_End) == 0x000278, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_DynamicCast_AsFort_Game_Mode_Front_End' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_DynamicCast_bSuccess) == 0x000280, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_Event_MyGeometry) == 0x000288, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_Event_MouseEvent_1) == 0x0002C8, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_Event_MouseEvent) == 0x000360, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsActivated_ReturnValue) == 0x0003F8, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_Not_PreBool_ReturnValue) == 0x0003F9, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_6) == 0x0003FA, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_7) == 0x0003FB, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_GetContext_ReturnValue) == 0x000400, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, Temp_name_Variable_1) == 0x000408, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, Temp_name_Variable_2) == 0x00040C, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_CustomEvent_ErrorNumber) == 0x000410, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_CustomEvent_ErrorNumber' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_CustomEvent_ErrorMessage) == 0x000418, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_CustomEvent_ErrorMessage' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_CreateDelegate_OutputDelegate) == 0x000428, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000438, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_MakeStruct_FormatArgumentData) == 0x000440, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_GetContext_ReturnValue_1) == 0x000490, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_8) == 0x000498, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_9) == 0x000499, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, Temp_name_Variable_3) == 0x00049C, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_CreateDelegate_OutputDelegate_1) == 0x0004A0, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, Temp_name_Variable_4) == 0x0004AC, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_GetContext_ReturnValue_2) == 0x0004B0, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_IsValid_ReturnValue_10) == 0x0004B8, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, Temp_name_Variable_5) == 0x0004BC, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x0004C0, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_Not_PreBool_ReturnValue_1) == 0x0004C1, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_MakeStruct_FormatArgumentData_1) == 0x0004C8, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, K2Node_MakeArray_Array) == 0x000518, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay, CallFunc_Format_ReturnValue) == 0x000528, "Member 'PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay::CallFunc_Format_ReturnValue' has a wrong offset!");

struct PictureInPictureFNEventsOverlay_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(PictureInPictureFNEventsOverlay_C_OnMouseEnter) == 0x000008, "Wrong alignment on PictureInPictureFNEventsOverlay_C_OnMouseEnter");
static_assert(sizeof(PictureInPictureFNEventsOverlay_C_OnMouseEnter) == 0x0000D8, "Wrong size on PictureInPictureFNEventsOverlay_C_OnMouseEnter");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'PictureInPictureFNEventsOverlay_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'PictureInPictureFNEventsOverlay_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct PictureInPictureFNEventsOverlay_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(PictureInPictureFNEventsOverlay_C_OnMouseLeave) == 0x000008, "Wrong alignment on PictureInPictureFNEventsOverlay_C_OnMouseLeave");
static_assert(sizeof(PictureInPictureFNEventsOverlay_C_OnMouseLeave) == 0x000098, "Wrong size on PictureInPictureFNEventsOverlay_C_OnMouseLeave");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'PictureInPictureFNEventsOverlay_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct PictureInPictureFNEventsOverlay_C_ShowError final
{
public:
	int32                                         ErrorNumber;
	uint8                                         Pad_4[0x4];
	class FString                                 ErrorMessage_0;
};
static_assert(alignof(PictureInPictureFNEventsOverlay_C_ShowError) == 0x000008, "Wrong alignment on PictureInPictureFNEventsOverlay_C_ShowError");
static_assert(sizeof(PictureInPictureFNEventsOverlay_C_ShowError) == 0x000018, "Wrong size on PictureInPictureFNEventsOverlay_C_ShowError");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ShowError, ErrorNumber) == 0x000000, "Member 'PictureInPictureFNEventsOverlay_C_ShowError::ErrorNumber' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsOverlay_C_ShowError, ErrorMessage_0) == 0x000008, "Member 'PictureInPictureFNEventsOverlay_C_ShowError::ErrorMessage_0' has a wrong offset!");

}
