#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image) == 0x000004, "Wrong alignment on SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image");
static_assert(sizeof(SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image) == 0x000008, "Wrong size on SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image");
static_assert(offsetof(SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image, EntryPoint) == 0x000000, "Member 'SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image, K2Node_Event_IsDesignTime) == 0x000004, "Member 'SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image::K2Node_Event_IsDesignTime' has a wrong offset!");

struct SidebarLfgState_Image_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarLfgState_Image_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarLfgState_Image_C_PreConstruct");
static_assert(sizeof(SidebarLfgState_Image_C_PreConstruct) == 0x000001, "Wrong size on SidebarLfgState_Image_C_PreConstruct");
static_assert(offsetof(SidebarLfgState_Image_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarLfgState_Image_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SidebarLfgState_Image_C_SetColor final
{
public:
	struct FLinearColor                           InColorAndOpacity;
};
static_assert(alignof(SidebarLfgState_Image_C_SetColor) == 0x000004, "Wrong alignment on SidebarLfgState_Image_C_SetColor");
static_assert(sizeof(SidebarLfgState_Image_C_SetColor) == 0x000010, "Wrong size on SidebarLfgState_Image_C_SetColor");
static_assert(offsetof(SidebarLfgState_Image_C_SetColor, InColorAndOpacity) == 0x000000, "Member 'SidebarLfgState_Image_C_SetColor::InColorAndOpacity' has a wrong offset!");

struct SidebarLfgState_Image_C_SetMaterial final
{
public:
	TSoftObjectPtr<class UMaterialInterface>      SoftMaterial;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(SidebarLfgState_Image_C_SetMaterial) == 0x000008, "Wrong alignment on SidebarLfgState_Image_C_SetMaterial");
static_assert(sizeof(SidebarLfgState_Image_C_SetMaterial) == 0x000030, "Wrong size on SidebarLfgState_Image_C_SetMaterial");
static_assert(offsetof(SidebarLfgState_Image_C_SetMaterial, SoftMaterial) == 0x000000, "Member 'SidebarLfgState_Image_C_SetMaterial::SoftMaterial' has a wrong offset!");
static_assert(offsetof(SidebarLfgState_Image_C_SetMaterial, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'SidebarLfgState_Image_C_SetMaterial::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
