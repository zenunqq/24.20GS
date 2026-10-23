#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct Lightbox_C_AddContent final
{
public:
	class UCommonUserWidget*                      Content_0;
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;
};
static_assert(alignof(Lightbox_C_AddContent) == 0x000008, "Wrong alignment on Lightbox_C_AddContent");
static_assert(sizeof(Lightbox_C_AddContent) == 0x000010, "Wrong size on Lightbox_C_AddContent");
static_assert(offsetof(Lightbox_C_AddContent, Content_0) == 0x000000, "Member 'Lightbox_C_AddContent::Content_0' has a wrong offset!");
static_assert(offsetof(Lightbox_C_AddContent, CallFunc_AddChild_ReturnValue) == 0x000008, "Member 'Lightbox_C_AddContent::CallFunc_AddChild_ReturnValue' has a wrong offset!");

struct Lightbox_C_ExecuteUbergraph_Lightbox final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_9[0x3];
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;
	float                                         CallFunc_MakeColor_A_ImplicitCast;
};
static_assert(alignof(Lightbox_C_ExecuteUbergraph_Lightbox) == 0x000004, "Wrong alignment on Lightbox_C_ExecuteUbergraph_Lightbox");
static_assert(sizeof(Lightbox_C_ExecuteUbergraph_Lightbox) == 0x000020, "Wrong size on Lightbox_C_ExecuteUbergraph_Lightbox");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, EntryPoint) == 0x000000, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, Temp_byte_Variable) == 0x000004, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, Temp_byte_Variable_1) == 0x000005, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, K2Node_Event_IsDesignTime) == 0x000006, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, Temp_bool_Variable) == 0x000007, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, K2Node_Select_Default) == 0x000008, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, CallFunc_MakeColor_ReturnValue) == 0x00000C, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lightbox_C_ExecuteUbergraph_Lightbox, CallFunc_MakeColor_A_ImplicitCast) == 0x00001C, "Member 'Lightbox_C_ExecuteUbergraph_Lightbox::CallFunc_MakeColor_A_ImplicitCast' has a wrong offset!");

struct Lightbox_C_Intro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(Lightbox_C_Intro) == 0x000008, "Wrong alignment on Lightbox_C_Intro");
static_assert(sizeof(Lightbox_C_Intro) == 0x000008, "Wrong size on Lightbox_C_Intro");
static_assert(offsetof(Lightbox_C_Intro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Lightbox_C_Intro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct Lightbox_C_Outro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(Lightbox_C_Outro) == 0x000008, "Wrong alignment on Lightbox_C_Outro");
static_assert(sizeof(Lightbox_C_Outro) == 0x000008, "Wrong size on Lightbox_C_Outro");
static_assert(offsetof(Lightbox_C_Outro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Lightbox_C_Outro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct Lightbox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(Lightbox_C_PreConstruct) == 0x000001, "Wrong alignment on Lightbox_C_PreConstruct");
static_assert(sizeof(Lightbox_C_PreConstruct) == 0x000001, "Wrong size on Lightbox_C_PreConstruct");
static_assert(offsetof(Lightbox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Lightbox_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct Lightbox_C_RemoveContent final
{
public:
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
};
static_assert(alignof(Lightbox_C_RemoveContent) == 0x000001, "Wrong alignment on Lightbox_C_RemoveContent");
static_assert(sizeof(Lightbox_C_RemoveContent) == 0x000001, "Wrong size on Lightbox_C_RemoveContent");
static_assert(offsetof(Lightbox_C_RemoveContent, CallFunc_HasAnyChildren_ReturnValue) == 0x000000, "Member 'Lightbox_C_RemoveContent::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");

}
