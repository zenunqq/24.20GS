#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          K2Node_Event_bInAttachableCosmeticAvailable;
	bool                                          K2Node_Event_bInActive;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutActive;
	uint8                                         Pad_32[0x6];
	TSoftObjectPtr<class UTexture2D>              K2Node_Event_Image;
	float                                         K2Node_Event_Width;
	uint8                                         Pad_64[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_3;
	bool                                          K2Node_Event_bShouldWarn;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_74[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_bArchived;
	uint8                                         Pad_81[0x7];
	struct FVector2D                              K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_99[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	bool                                          K2Node_Event_bIsModified;
	uint8                                         Pad_AD[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_HasItemToRepresent_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_C2[0x6];
	double                                        CallFunc_HandleWidthChanged_Width_ImplicitCast;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton");
static_assert(sizeof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton) == 0x0000D0, "Wrong size on AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, EntryPoint) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_byte_Variable) == 0x000004, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_bool_Variable) == 0x000005, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_struct_Variable) == 0x000008, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_struct_Variable_1) == 0x000018, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_bool_Variable_1) == 0x000028, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_byte_Variable_1) == 0x000029, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_byte_Variable_2) == 0x00002A, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_bool_Variable_2) == 0x00002B, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_byte_Variable_3) == 0x00002C, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_byte_Variable_4) == 0x00002D, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_bInAttachableCosmeticAvailable) == 0x00002E, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_bInAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_bInActive) == 0x00002F, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_bInActive' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable) == 0x000030, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_GetCustomizationSlotActiveState_bOutActive) == 0x000031, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_GetCustomizationSlotActiveState_bOutActive' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_Image) == 0x000038, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_Image' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_Width) == 0x000060, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_Width' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_byte_Variable_5) == 0x000070, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, Temp_bool_Variable_3) == 0x000071, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_bShouldWarn) == 0x000072, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_bShouldWarn' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Select_Default) == 0x000073, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_bArchived) == 0x000080, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_bArchived' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Select_Default_1) == 0x000088, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Select_Default_2) == 0x000098, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_SelectColor_ReturnValue) == 0x00009C, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_bIsModified) == 0x0000AC, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_bIsModified' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B0, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000B8, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_HasItemToRepresent_ReturnValue) == 0x0000C0, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_HasItemToRepresent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Select_Default_3) == 0x0000C1, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, CallFunc_HandleWidthChanged_Width_ImplicitCast) == 0x0000C8, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::CallFunc_HandleWidthChanged_Width_ImplicitCast' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_GetSlotDebugName final
{
public:
	class FString                                 ReturnValue;
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_GetSlotDebugName) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButton_C_GetSlotDebugName");
static_assert(sizeof(AthenaCustomizationSlotButton_C_GetSlotDebugName) == 0x000050, "Wrong size on AthenaCustomizationSlotButton_C_GetSlotDebugName");
static_assert(offsetof(AthenaCustomizationSlotButton_C_GetSlotDebugName, ReturnValue) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_GetSlotDebugName::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_GetSlotDebugName, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'AthenaCustomizationSlotButton_C_GetSlotDebugName::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_GetSlotDebugName, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000020, "Member 'AthenaCustomizationSlotButton_C_GetSlotDebugName::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_GetSlotDebugName, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'AthenaCustomizationSlotButton_C_GetSlotDebugName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_GetSlotDebugName, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'AthenaCustomizationSlotButton_C_GetSlotDebugName::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_HandleActiveStateChanged final
{
public:
	bool                                          CosmeticAvailable;
	bool                                          Active;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsSlotFilled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButton_C_HandleActiveStateChanged");
static_assert(sizeof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged) == 0x000008, "Wrong size on AthenaCustomizationSlotButton_C_HandleActiveStateChanged");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, CosmeticAvailable) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::CosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, Active) == 0x000001, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::Active' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, Temp_byte_Variable) == 0x000002, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, Temp_byte_Variable_1) == 0x000003, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, Temp_bool_Variable) == 0x000004, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, CallFunc_IsSlotFilled_ReturnValue) == 0x000005, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::CallFunc_IsSlotFilled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleActiveStateChanged, K2Node_Select_Default) == 0x000007, "Member 'AthenaCustomizationSlotButton_C_HandleActiveStateChanged::K2Node_Select_Default' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_HandleWidthChanged final
{
public:
	double                                        Width;
	bool                                          bWidthExceedsThreshold;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_A[0x2];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	uint8                                         Pad_14[0x4];
	double                                        CallFunc_SelectFloat_ReturnValue;
	int32                                         K2Node_Select_Default;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_25[0x3];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_HandleWidthChanged) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButton_C_HandleWidthChanged");
static_assert(sizeof(AthenaCustomizationSlotButton_C_HandleWidthChanged) == 0x000088, "Wrong size on AthenaCustomizationSlotButton_C_HandleWidthChanged");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, Width) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::Width' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, bWidthExceedsThreshold) == 0x000008, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::bWidthExceedsThreshold' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, Temp_bool_Variable) == 0x000009, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, Temp_int_Variable) == 0x00000C, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, Temp_int_Variable_1) == 0x000010, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, K2Node_Select_Default) == 0x000020, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000024, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, K2Node_MakeStruct_SlateFontInfo) == 0x000028, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_HandleWidthChanged, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000080, "Member 'AthenaCustomizationSlotButton_C_HandleWidthChanged::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated final
{
public:
	bool                                          bArchived;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated");
static_assert(sizeof(AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated) == 0x000001, "Wrong size on AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated");
static_assert(offsetof(AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated, bArchived) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated::bArchived' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged final
{
public:
	TSoftObjectPtr<class UTexture2D>              Image;
	float                                         Width;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged");
static_assert(sizeof(AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged) == 0x000030, "Wrong size on AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged");
static_assert(offsetof(AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged, Image) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged::Image' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged, Width) == 0x000028, "Member 'AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged::Width' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged final
{
public:
	bool                                          bInAttachableCosmeticAvailable;
	bool                                          bInActive;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged");
static_assert(sizeof(AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged) == 0x000002, "Wrong size on AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged");
static_assert(offsetof(AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged, bInAttachableCosmeticAvailable) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged::bInAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged, bInActive) == 0x000001, "Member 'AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged::bInActive' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated final
{
public:
	bool                                          bIsModified;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated");
static_assert(sizeof(AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated) == 0x000001, "Wrong size on AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated");
static_assert(offsetof(AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated, bIsModified) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated::bIsModified' has a wrong offset!");

struct AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning final
{
public:
	bool                                          bShouldWarn;
};
static_assert(alignof(AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning");
static_assert(sizeof(AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning) == 0x000001, "Wrong size on AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning");
static_assert(offsetof(AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning, bShouldWarn) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning::bShouldWarn' has a wrong offset!");

}
