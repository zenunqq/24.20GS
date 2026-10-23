#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct NormalBangWrapper_C_Adjust_Bang_Image_Translation final
{
public:
	struct FVector2D                              Translation;
};
static_assert(alignof(NormalBangWrapper_C_Adjust_Bang_Image_Translation) == 0x000008, "Wrong alignment on NormalBangWrapper_C_Adjust_Bang_Image_Translation");
static_assert(sizeof(NormalBangWrapper_C_Adjust_Bang_Image_Translation) == 0x000010, "Wrong size on NormalBangWrapper_C_Adjust_Bang_Image_Translation");
static_assert(offsetof(NormalBangWrapper_C_Adjust_Bang_Image_Translation, Translation) == 0x000000, "Member 'NormalBangWrapper_C_Adjust_Bang_Image_Translation::Translation' has a wrong offset!");

struct NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bEnabled;
	uint8                                         Pad_5[0x3];
	int32                                         K2Node_Event_Count;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	class FName                                   K2Node_Event_TutorialObjectiveName;
	ETutorialType                                 K2Node_Event_TutorialType;
	uint8                                         Pad_15[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_21[0x7];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
};
static_assert(alignof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper) == 0x000008, "Wrong alignment on NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper");
static_assert(sizeof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper) == 0x000040, "Wrong size on NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, EntryPoint) == 0x000000, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, K2Node_Event_bEnabled) == 0x000004, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::K2Node_Event_bEnabled' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, K2Node_Event_Count) == 0x000008, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::K2Node_Event_Count' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, Temp_bool_Variable) == 0x00000C, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, Temp_byte_Variable) == 0x00000D, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, Temp_byte_Variable_1) == 0x00000E, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, K2Node_Select_Default) == 0x00000F, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, K2Node_Event_TutorialObjectiveName) == 0x000010, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::K2Node_Event_TutorialObjectiveName' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, K2Node_Event_TutorialType) == 0x000014, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::K2Node_Event_TutorialType' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, K2Node_Event_IsDesignTime) == 0x000020, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'NormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

struct NormalBangWrapper_C_InitialReset final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(NormalBangWrapper_C_InitialReset) == 0x000008, "Wrong alignment on NormalBangWrapper_C_InitialReset");
static_assert(sizeof(NormalBangWrapper_C_InitialReset) == 0x000018, "Wrong size on NormalBangWrapper_C_InitialReset");
static_assert(offsetof(NormalBangWrapper_C_InitialReset, CallFunc_GetEndTime_ReturnValue) == 0x000000, "Member 'NormalBangWrapper_C_InitialReset::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_InitialReset, CallFunc_GetEndTime_ReturnValue_1) == 0x000004, "Member 'NormalBangWrapper_C_InitialReset::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_InitialReset, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'NormalBangWrapper_C_InitialReset::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_InitialReset, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'NormalBangWrapper_C_InitialReset::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct NormalBangWrapper_C_OnBangStateChanged final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x3];
	int32                                         Count_0;
};
static_assert(alignof(NormalBangWrapper_C_OnBangStateChanged) == 0x000004, "Wrong alignment on NormalBangWrapper_C_OnBangStateChanged");
static_assert(sizeof(NormalBangWrapper_C_OnBangStateChanged) == 0x000008, "Wrong size on NormalBangWrapper_C_OnBangStateChanged");
static_assert(offsetof(NormalBangWrapper_C_OnBangStateChanged, bEnabled) == 0x000000, "Member 'NormalBangWrapper_C_OnBangStateChanged::bEnabled' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_OnBangStateChanged, Count_0) == 0x000004, "Member 'NormalBangWrapper_C_OnBangStateChanged::Count_0' has a wrong offset!");

struct NormalBangWrapper_C_OnStartCallout final
{
public:
	class FName                                   TutorialObjectiveName;
	ETutorialType                                 TutorialType;
};
static_assert(alignof(NormalBangWrapper_C_OnStartCallout) == 0x000004, "Wrong alignment on NormalBangWrapper_C_OnStartCallout");
static_assert(sizeof(NormalBangWrapper_C_OnStartCallout) == 0x000008, "Wrong size on NormalBangWrapper_C_OnStartCallout");
static_assert(offsetof(NormalBangWrapper_C_OnStartCallout, TutorialObjectiveName) == 0x000000, "Member 'NormalBangWrapper_C_OnStartCallout::TutorialObjectiveName' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_OnStartCallout, TutorialType) == 0x000004, "Member 'NormalBangWrapper_C_OnStartCallout::TutorialType' has a wrong offset!");

struct NormalBangWrapper_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(NormalBangWrapper_C_PreConstruct) == 0x000001, "Wrong alignment on NormalBangWrapper_C_PreConstruct");
static_assert(sizeof(NormalBangWrapper_C_PreConstruct) == 0x000001, "Wrong size on NormalBangWrapper_C_PreConstruct");
static_assert(offsetof(NormalBangWrapper_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NormalBangWrapper_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct NormalBangWrapper_C_SetShouldSuppressBang final
{
public:
	bool                                          ShouldSuppressBang_0;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(NormalBangWrapper_C_SetShouldSuppressBang) == 0x000001, "Wrong alignment on NormalBangWrapper_C_SetShouldSuppressBang");
static_assert(sizeof(NormalBangWrapper_C_SetShouldSuppressBang) == 0x000005, "Wrong size on NormalBangWrapper_C_SetShouldSuppressBang");
static_assert(offsetof(NormalBangWrapper_C_SetShouldSuppressBang, ShouldSuppressBang_0) == 0x000000, "Member 'NormalBangWrapper_C_SetShouldSuppressBang::ShouldSuppressBang_0' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_SetShouldSuppressBang, Temp_bool_Variable) == 0x000001, "Member 'NormalBangWrapper_C_SetShouldSuppressBang::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_SetShouldSuppressBang, Temp_byte_Variable) == 0x000002, "Member 'NormalBangWrapper_C_SetShouldSuppressBang::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_SetShouldSuppressBang, Temp_byte_Variable_1) == 0x000003, "Member 'NormalBangWrapper_C_SetShouldSuppressBang::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_SetShouldSuppressBang, K2Node_Select_Default) == 0x000004, "Member 'NormalBangWrapper_C_SetShouldSuppressBang::K2Node_Select_Default' has a wrong offset!");

struct NormalBangWrapper_C_SetTutorialBorderStyle final
{
public:
	class UClass*                                 BorderStyle;
};
static_assert(alignof(NormalBangWrapper_C_SetTutorialBorderStyle) == 0x000008, "Wrong alignment on NormalBangWrapper_C_SetTutorialBorderStyle");
static_assert(sizeof(NormalBangWrapper_C_SetTutorialBorderStyle) == 0x000008, "Wrong size on NormalBangWrapper_C_SetTutorialBorderStyle");
static_assert(offsetof(NormalBangWrapper_C_SetTutorialBorderStyle, BorderStyle) == 0x000000, "Member 'NormalBangWrapper_C_SetTutorialBorderStyle::BorderStyle' has a wrong offset!");

struct NormalBangWrapper_C_TriggerIntro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(NormalBangWrapper_C_TriggerIntro) == 0x000008, "Wrong alignment on NormalBangWrapper_C_TriggerIntro");
static_assert(sizeof(NormalBangWrapper_C_TriggerIntro) == 0x000010, "Wrong size on NormalBangWrapper_C_TriggerIntro");
static_assert(offsetof(NormalBangWrapper_C_TriggerIntro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'NormalBangWrapper_C_TriggerIntro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_TriggerIntro, CallFunc_PlayAnimation_ReturnValue_1) == 0x000008, "Member 'NormalBangWrapper_C_TriggerIntro::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct NormalBangWrapper_C_Update_Bang_Icon_Version final
{
public:
	int32                                         InCount;
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_D[0x3];
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_1B[0x1];
	int32                                         K2Node_Select_Default;
	int32                                         K2Node_Select_Default_1;
};
static_assert(alignof(NormalBangWrapper_C_Update_Bang_Icon_Version) == 0x000004, "Wrong alignment on NormalBangWrapper_C_Update_Bang_Icon_Version");
static_assert(sizeof(NormalBangWrapper_C_Update_Bang_Icon_Version) == 0x000024, "Wrong size on NormalBangWrapper_C_Update_Bang_Icon_Version");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, InCount) == 0x000000, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::InCount' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, Temp_int_Variable) == 0x000004, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, Temp_int_Variable_1) == 0x000008, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, Temp_bool_Variable) == 0x00000C, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, Temp_int_Variable_2) == 0x000010, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, Temp_int_Variable_3) == 0x000014, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, Temp_bool_Variable_1) == 0x000018, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000019, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001A, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, K2Node_Select_Default) == 0x00001C, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NormalBangWrapper_C_Update_Bang_Icon_Version, K2Node_Select_Default_1) == 0x000020, "Member 'NormalBangWrapper_C_Update_Bang_Icon_Version::K2Node_Select_Default_1' has a wrong offset!");

}
