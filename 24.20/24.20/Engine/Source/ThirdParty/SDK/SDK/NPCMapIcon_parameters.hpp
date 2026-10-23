#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                Temp_object_Variable;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_22[0x6];
	TSoftObjectPtr<class UObject>                 K2Node_Event_Icon;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_5C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UObject*                                Temp_object_Variable_1;
	bool                                          K2Node_Event_bUserInteraction_1;
	uint8                                         Pad_71[0x7];
	class UTexture*                               K2Node_DynamicCast_AsTexture_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          K2Node_Event_bUserInteraction;
	uint8                                         Pad_82[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	bool                                          K2Node_Event_bIsKnown;
	uint8                                         Pad_99[0x3];
	int32                                         CallFunc_SelectInt_ReturnValue;
	TSoftObjectPtr<class UObject>                 K2Node_Event_SecondaryIcon;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_CA[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_4;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_5;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_6;
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_104[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_7;
	class UObject*                                K2Node_CustomEvent_Loaded;
};
static_assert(alignof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon) == 0x000008, "Wrong alignment on NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon");
static_assert(sizeof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon) == 0x000118, "Wrong size on NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, EntryPoint) == 0x000000, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, Temp_object_Variable) == 0x000008, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_DynamicCast_AsTexture) == 0x000018, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000021, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_Event_Icon) == 0x000028, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_Event_Icon' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000060, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, Temp_object_Variable_1) == 0x000068, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_Event_bUserInteraction_1) == 0x000070, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_Event_bUserInteraction_1' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_DynamicCast_AsTexture_1) == 0x000078, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_DynamicCast_AsTexture_1' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_Event_bUserInteraction) == 0x000081, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_Event_bUserInteraction' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000088, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000090, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_Event_bIsKnown) == 0x000098, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_Event_bIsKnown' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_SelectInt_ReturnValue) == 0x00009C, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_Event_SecondaryIcon) == 0x0000A0, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_Event_SecondaryIcon' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000C8, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_Event_IsDesignTime) == 0x0000C9, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x0000D0, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue_4) == 0x0000D8, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue_5) == 0x0000E0, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue_6) == 0x0000E8, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_CustomEvent_Loaded_1) == 0x0000F0, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, CallFunc_GetDynamicMaterial_ReturnValue_7) == 0x000108, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::CallFunc_GetDynamicMaterial_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon, K2Node_CustomEvent_Loaded) == 0x000110, "Member 'NPCMapIcon_C_ExecuteUbergraph_NPCMapIcon::K2Node_CustomEvent_Loaded' has a wrong offset!");

struct NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090) == 0x000008, "Wrong alignment on NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090");
static_assert(sizeof(NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090) == 0x000008, "Wrong size on NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090");
static_assert(offsetof(NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090, Loaded) == 0x000000, "Member 'NPCMapIcon_C_OnLoaded_3AA300A94CA54A00A0761B9AB8D8A090::Loaded' has a wrong offset!");

struct NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8) == 0x000008, "Wrong alignment on NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8");
static_assert(sizeof(NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8) == 0x000008, "Wrong size on NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8");
static_assert(offsetof(NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8, Loaded) == 0x000000, "Member 'NPCMapIcon_C_OnLoaded_3DC82B584F8C476F71C4D4A3D2E7D3D8::Loaded' has a wrong offset!");

struct NPCMapIcon_C_OnSelected final
{
public:
	bool                                          bUserInteraction;
};
static_assert(alignof(NPCMapIcon_C_OnSelected) == 0x000001, "Wrong alignment on NPCMapIcon_C_OnSelected");
static_assert(sizeof(NPCMapIcon_C_OnSelected) == 0x000001, "Wrong size on NPCMapIcon_C_OnSelected");
static_assert(offsetof(NPCMapIcon_C_OnSelected, bUserInteraction) == 0x000000, "Member 'NPCMapIcon_C_OnSelected::bUserInteraction' has a wrong offset!");

struct NPCMapIcon_C_OnUnselected final
{
public:
	bool                                          bUserInteraction;
};
static_assert(alignof(NPCMapIcon_C_OnUnselected) == 0x000001, "Wrong alignment on NPCMapIcon_C_OnUnselected");
static_assert(sizeof(NPCMapIcon_C_OnUnselected) == 0x000001, "Wrong size on NPCMapIcon_C_OnUnselected");
static_assert(offsetof(NPCMapIcon_C_OnUnselected, bUserInteraction) == 0x000000, "Member 'NPCMapIcon_C_OnUnselected::bUserInteraction' has a wrong offset!");

struct NPCMapIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(NPCMapIcon_C_PreConstruct) == 0x000001, "Wrong alignment on NPCMapIcon_C_PreConstruct");
static_assert(sizeof(NPCMapIcon_C_PreConstruct) == 0x000001, "Wrong size on NPCMapIcon_C_PreConstruct");
static_assert(offsetof(NPCMapIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NPCMapIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct NPCMapIcon_C_SetIcon final
{
public:
	TSoftObjectPtr<class UObject>                 Icon;
};
static_assert(alignof(NPCMapIcon_C_SetIcon) == 0x000008, "Wrong alignment on NPCMapIcon_C_SetIcon");
static_assert(sizeof(NPCMapIcon_C_SetIcon) == 0x000028, "Wrong size on NPCMapIcon_C_SetIcon");
static_assert(offsetof(NPCMapIcon_C_SetIcon, Icon) == 0x000000, "Member 'NPCMapIcon_C_SetIcon::Icon' has a wrong offset!");

struct NPCMapIcon_C_SetIsKnown final
{
public:
	bool                                          bIsKnown;
};
static_assert(alignof(NPCMapIcon_C_SetIsKnown) == 0x000001, "Wrong alignment on NPCMapIcon_C_SetIsKnown");
static_assert(sizeof(NPCMapIcon_C_SetIsKnown) == 0x000001, "Wrong size on NPCMapIcon_C_SetIsKnown");
static_assert(offsetof(NPCMapIcon_C_SetIsKnown, bIsKnown) == 0x000000, "Member 'NPCMapIcon_C_SetIsKnown::bIsKnown' has a wrong offset!");

struct NPCMapIcon_C_SetSecondaryIcon final
{
public:
	TSoftObjectPtr<class UObject>                 SecondaryIcon;
};
static_assert(alignof(NPCMapIcon_C_SetSecondaryIcon) == 0x000008, "Wrong alignment on NPCMapIcon_C_SetSecondaryIcon");
static_assert(sizeof(NPCMapIcon_C_SetSecondaryIcon) == 0x000028, "Wrong size on NPCMapIcon_C_SetSecondaryIcon");
static_assert(offsetof(NPCMapIcon_C_SetSecondaryIcon, SecondaryIcon) == 0x000000, "Member 'NPCMapIcon_C_SetSecondaryIcon::SecondaryIcon' has a wrong offset!");

}
