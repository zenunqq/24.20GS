#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class USidebarLfgState_Image_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 LFG_Icon;
	TSoftObjectPtr<class UMaterialInterface>      LFG_Material;
	struct FLinearColor                           LFG_Color;
	class UMaterialInstanceDynamic*               LFG_DynamicMaterial;

public:
	void ExecuteUbergraph_SidebarLfgState_Image(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetColor(const struct FLinearColor& InColorAndOpacity);
	void SetMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLfgState_Image_C">();
	}
	static class USidebarLfgState_Image_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLfgState_Image_C>();
	}
};
static_assert(alignof(USidebarLfgState_Image_C) == 0x000008, "Wrong alignment on USidebarLfgState_Image_C");
static_assert(sizeof(USidebarLfgState_Image_C) == 0x0002B8, "Wrong size on USidebarLfgState_Image_C");
static_assert(offsetof(USidebarLfgState_Image_C, UberGraphFrame) == 0x000268, "Member 'USidebarLfgState_Image_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLfgState_Image_C, LFG_Icon) == 0x000270, "Member 'USidebarLfgState_Image_C::LFG_Icon' has a wrong offset!");
static_assert(offsetof(USidebarLfgState_Image_C, LFG_Material) == 0x000278, "Member 'USidebarLfgState_Image_C::LFG_Material' has a wrong offset!");
static_assert(offsetof(USidebarLfgState_Image_C, LFG_Color) == 0x0002A0, "Member 'USidebarLfgState_Image_C::LFG_Color' has a wrong offset!");
static_assert(offsetof(USidebarLfgState_Image_C, LFG_DynamicMaterial) == 0x0002B0, "Member 'USidebarLfgState_Image_C::LFG_DynamicMaterial' has a wrong offset!");

}
