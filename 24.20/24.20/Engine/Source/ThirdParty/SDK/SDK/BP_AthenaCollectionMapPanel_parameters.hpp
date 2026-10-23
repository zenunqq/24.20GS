#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
};
static_assert(alignof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel) == 0x000008, "Wrong alignment on BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel");
static_assert(sizeof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel) == 0x000030, "Wrong size on BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel");
static_assert(offsetof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel, EntryPoint) == 0x000000, "Member 'BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000020, "Member 'BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel, CallFunc_IsInZone_ReturnValue) == 0x000028, "Member 'BP_AthenaCollectionMapPanel_C_ExecuteUbergraph_BP_AthenaCollectionMapPanel::CallFunc_IsInZone_ReturnValue' has a wrong offset!");

}
