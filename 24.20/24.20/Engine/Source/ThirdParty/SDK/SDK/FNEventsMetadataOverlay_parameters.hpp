#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UPictureInPictureSubsystem*             CallFunc_GetEngineSubsystem_ReturnValue;
	class UPictureInPicturePartnerControls*       CallFunc_GetPartnerControls_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_25[0x3];
	class UPictureInPictureFNEventsController*    K2Node_DynamicCast_AsPicture_in_Picture_FNEvents_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	class UPictureInPictureSubsystem*             CallFunc_GetEngineSubsystem_ReturnValue_1;
};
static_assert(alignof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay) == 0x000008, "Wrong alignment on FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay");
static_assert(sizeof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay) == 0x000040, "Wrong size on FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, EntryPoint) == 0x000000, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000008, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, CallFunc_GetPartnerControls_ReturnValue) == 0x000010, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::CallFunc_GetPartnerControls_ReturnValue' has a wrong offset!");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, K2Node_DynamicCast_AsPicture_in_Picture_FNEvents_Controller) == 0x000028, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::K2Node_DynamicCast_AsPicture_in_Picture_FNEvents_Controller' has a wrong offset!");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay, CallFunc_GetEngineSubsystem_ReturnValue_1) == 0x000038, "Member 'FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay::CallFunc_GetEngineSubsystem_ReturnValue_1' has a wrong offset!");

}
