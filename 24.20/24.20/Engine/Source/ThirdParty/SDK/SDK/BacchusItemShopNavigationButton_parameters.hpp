#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x7];
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UMaterialInterface*                     Temp_object_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_39[0x7];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_62[0x6];
	struct FVector2D                              Temp_struct_Variable_2;
	struct FVector2D                              Temp_struct_Variable_3;
	bool                                          Temp_bool_Variable_4;
	EVerticalAlignment                            Temp_byte_Variable;
	EVerticalAlignment                            Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_8C[0x4];
	class UMaterialInterface*                     K2Node_Select_Default;
	struct FVector2D                              K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_A9[0x7];
	class UMaterialInterface*                     K2Node_Select_Default_2;
	class UWidgetAnimation*                       K2Node_Select_Default_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	struct FVector2D                              K2Node_Select_Default_4;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	EVerticalAlignment                            K2Node_Select_Default_5;
};
static_assert(alignof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton) == 0x000008, "Wrong alignment on BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton");
static_assert(sizeof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton) == 0x000100, "Wrong size on BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, EntryPoint) == 0x000000, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_object_Variable) == 0x000010, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_object_Variable_1) == 0x000018, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_bool_Variable) == 0x000020, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_object_Variable_2) == 0x000028, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_object_Variable_3) == 0x000030, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_bool_Variable_1) == 0x000038, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_struct_Variable) == 0x000040, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_struct_Variable_1) == 0x000050, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_bool_Variable_2) == 0x000060, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_bool_Variable_3) == 0x000061, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_struct_Variable_2) == 0x000068, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_struct_Variable_3) == 0x000078, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_bool_Variable_4) == 0x000088, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_byte_Variable) == 0x000089, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_byte_Variable_1) == 0x00008A, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, K2Node_Event_IsDesignTime) == 0x00008B, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, K2Node_Select_Default) == 0x000090, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, K2Node_Select_Default_1) == 0x000098, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, Temp_bool_Variable_5) == 0x0000A8, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, K2Node_Select_Default_2) == 0x0000B0, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, K2Node_Select_Default_3) == 0x0000B8, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000C0, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, K2Node_Select_Default_4) == 0x0000C8, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000D8, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0000E0, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000E8, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, CallFunc_PlayAnimation_ReturnValue) == 0x0000F0, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton, K2Node_Select_Default_5) == 0x0000F8, "Member 'BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton::K2Node_Select_Default_5' has a wrong offset!");

struct BacchusItemShopNavigationButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BacchusItemShopNavigationButton_C_PreConstruct) == 0x000001, "Wrong alignment on BacchusItemShopNavigationButton_C_PreConstruct");
static_assert(sizeof(BacchusItemShopNavigationButton_C_PreConstruct) == 0x000001, "Wrong size on BacchusItemShopNavigationButton_C_PreConstruct");
static_assert(offsetof(BacchusItemShopNavigationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BacchusItemShopNavigationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
