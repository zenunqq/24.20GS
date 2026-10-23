#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerAugmentsUI_classes.hpp"

namespace SDK
{

class UWBP_Augments_InteractionIndicatorInfo_C final : public UFortPlayerAugmentInfoEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_AugmentIcon;
	class UFortPlayerAugmentItemDefinition*       Augment_Item_Definition;

public:
	void ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo(int32 EntryPoint);
	void OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9(class UObject* Loaded);
	void SetAugmentIcon(TSoftObjectPtr<class UObject> Asset);
	void SetAugmentInfo(class UFortPlayerAugmentItemDefinition* InAugmentItemDefinition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augments_InteractionIndicatorInfo_C">();
	}
	static class UWBP_Augments_InteractionIndicatorInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augments_InteractionIndicatorInfo_C>();
	}
};
static_assert(alignof(UWBP_Augments_InteractionIndicatorInfo_C) == 0x000008, "Wrong alignment on UWBP_Augments_InteractionIndicatorInfo_C");
static_assert(sizeof(UWBP_Augments_InteractionIndicatorInfo_C) == 0x000310, "Wrong size on UWBP_Augments_InteractionIndicatorInfo_C");
static_assert(offsetof(UWBP_Augments_InteractionIndicatorInfo_C, UberGraphFrame) == 0x0002F8, "Member 'UWBP_Augments_InteractionIndicatorInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicatorInfo_C, Image_AugmentIcon) == 0x000300, "Member 'UWBP_Augments_InteractionIndicatorInfo_C::Image_AugmentIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_InteractionIndicatorInfo_C, Augment_Item_Definition) == 0x000308, "Member 'UWBP_Augments_InteractionIndicatorInfo_C::Augment_Item_Definition' has a wrong offset!");

}
