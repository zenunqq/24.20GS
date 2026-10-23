#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19[0x7];
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UMaterialInterface*                     Temp_object_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_31[0x7];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_5A[0x6];
	struct FVector2D                              Temp_struct_Variable_2;
	struct FVector2D                              Temp_struct_Variable_3;
	bool                                          Temp_bool_Variable_4;
	EVerticalAlignment                            Temp_byte_Variable;
	EVerticalAlignment                            Temp_byte_Variable_1;
	EVerticalAlignment                            K2Node_Select_Default;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_85[0x3];
	class UMaterialInterface*                     K2Node_Select_Default_1;
	struct FVector2D                              K2Node_Select_Default_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_B1[0x7];
	class UMaterialInterface*                     K2Node_Select_Default_3;
	class UWidgetAnimation*                       K2Node_Select_Default_4;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	struct FVector2D                              K2Node_Select_Default_5;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
};
static_assert(alignof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton) == 0x000008, "Wrong alignment on ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton");
static_assert(sizeof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton) == 0x0000F8, "Wrong size on ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, EntryPoint) == 0x000000, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_object_Variable) == 0x000008, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_object_Variable_1) == 0x000010, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_bool_Variable) == 0x000018, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_object_Variable_2) == 0x000020, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_object_Variable_3) == 0x000028, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_bool_Variable_1) == 0x000030, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_struct_Variable) == 0x000038, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_struct_Variable_1) == 0x000048, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_bool_Variable_2) == 0x000058, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_bool_Variable_3) == 0x000059, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_struct_Variable_2) == 0x000060, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_struct_Variable_3) == 0x000070, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_bool_Variable_4) == 0x000080, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_byte_Variable) == 0x000081, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_byte_Variable_1) == 0x000082, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, K2Node_Select_Default) == 0x000083, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, K2Node_Event_IsDesignTime) == 0x000084, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, K2Node_Select_Default_1) == 0x000088, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, K2Node_Select_Default_2) == 0x000090, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000A0, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000A8, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, Temp_bool_Variable_5) == 0x0000B0, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, K2Node_Select_Default_3) == 0x0000B8, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, K2Node_Select_Default_4) == 0x0000C0, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0000C8, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, K2Node_Select_Default_5) == 0x0000D0, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000E0, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x0000E8, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x0000F0, "Member 'ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");

struct ItemShopNavigationButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ItemShopNavigationButton_C_PreConstruct) == 0x000001, "Wrong alignment on ItemShopNavigationButton_C_PreConstruct");
static_assert(sizeof(ItemShopNavigationButton_C_PreConstruct) == 0x000001, "Wrong size on ItemShopNavigationButton_C_PreConstruct");
static_assert(offsetof(ItemShopNavigationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ItemShopNavigationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
