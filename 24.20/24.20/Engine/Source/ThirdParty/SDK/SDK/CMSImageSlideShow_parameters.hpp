#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature final
{
public:
	class UCommonWidgetCarousel*                  CarouselWidget;
	int32                                         CurrentPageIndex;
};
static_assert(alignof(CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature) == 0x000008, "Wrong alignment on CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature");
static_assert(sizeof(CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature) == 0x000010, "Wrong size on CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature");
static_assert(offsetof(CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature, CarouselWidget) == 0x000000, "Member 'CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature::CarouselWidget' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature, CurrentPageIndex) == 0x000008, "Member 'CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature::CurrentPageIndex' has a wrong offset!");

struct CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonWidgetCarousel*                  K2Node_ComponentBoundEvent_CarouselWidget;
	int32                                         K2Node_ComponentBoundEvent_CurrentPageIndex;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UCMSImage_C*                            CallFunc_Create_ReturnValue;
	TArray<class FString>                         K2Node_CustomEvent_MediaUrls;
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;
	class FString                                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_55[0x3];
	float                                         CallFunc_BeginAutoScrolling_ScrollInterval_ImplicitCast;
};
static_assert(alignof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow) == 0x000008, "Wrong alignment on CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow");
static_assert(sizeof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow) == 0x000060, "Wrong size on CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, EntryPoint) == 0x000000, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::EntryPoint' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, K2Node_ComponentBoundEvent_CarouselWidget) == 0x000008, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::K2Node_ComponentBoundEvent_CarouselWidget' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, K2Node_ComponentBoundEvent_CurrentPageIndex) == 0x000010, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::K2Node_ComponentBoundEvent_CurrentPageIndex' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, Temp_int_Array_Index_Variable) == 0x000014, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, CallFunc_Create_ReturnValue) == 0x000020, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, K2Node_CustomEvent_MediaUrls) == 0x000028, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::K2Node_CustomEvent_MediaUrls' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, CallFunc_Array_Get_Item) == 0x000040, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow, CallFunc_BeginAutoScrolling_ScrollInterval_ImplicitCast) == 0x000058, "Member 'CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow::CallFunc_BeginAutoScrolling_ScrollInterval_ImplicitCast' has a wrong offset!");

struct CMSImageSlideShow_C_SetMediaURLs final
{
public:
	TArray<class FString>                         MediaURLs;
};
static_assert(alignof(CMSImageSlideShow_C_SetMediaURLs) == 0x000008, "Wrong alignment on CMSImageSlideShow_C_SetMediaURLs");
static_assert(sizeof(CMSImageSlideShow_C_SetMediaURLs) == 0x000010, "Wrong size on CMSImageSlideShow_C_SetMediaURLs");
static_assert(offsetof(CMSImageSlideShow_C_SetMediaURLs, MediaURLs) == 0x000000, "Member 'CMSImageSlideShow_C_SetMediaURLs::MediaURLs' has a wrong offset!");

}
