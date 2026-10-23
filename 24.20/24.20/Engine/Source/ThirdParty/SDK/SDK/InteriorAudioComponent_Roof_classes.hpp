#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InteriorAudioComponent_classes.hpp"

namespace SDK
{

class UInteriorAudioComponent_Roof_C final : public UInteriorAudioComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_InteriorAudioComponent_Roof_C;
	double                                        Param;
	double                                        IsIndoorsInterp;
	bool                                          bIsIndoors;
	uint8                                         Pad_C9[0x7];
	double                                        IndoorsStateChangedTime;
	double                                        IndoorsInterpTime;

public:
	void ExecuteUbergraph_InteriorAudioComponent_Roof(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void Update(struct FInteriorAudioScanResults& ScanResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteriorAudioComponent_Roof_C">();
	}
	static class UInteriorAudioComponent_Roof_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteriorAudioComponent_Roof_C>();
	}
};
static_assert(alignof(UInteriorAudioComponent_Roof_C) == 0x000008, "Wrong alignment on UInteriorAudioComponent_Roof_C");
static_assert(sizeof(UInteriorAudioComponent_Roof_C) == 0x0000E0, "Wrong size on UInteriorAudioComponent_Roof_C");
static_assert(offsetof(UInteriorAudioComponent_Roof_C, UberGraphFrame_InteriorAudioComponent_Roof_C) == 0x0000B0, "Member 'UInteriorAudioComponent_Roof_C::UberGraphFrame_InteriorAudioComponent_Roof_C' has a wrong offset!");
static_assert(offsetof(UInteriorAudioComponent_Roof_C, Param) == 0x0000B8, "Member 'UInteriorAudioComponent_Roof_C::Param' has a wrong offset!");
static_assert(offsetof(UInteriorAudioComponent_Roof_C, IsIndoorsInterp) == 0x0000C0, "Member 'UInteriorAudioComponent_Roof_C::IsIndoorsInterp' has a wrong offset!");
static_assert(offsetof(UInteriorAudioComponent_Roof_C, bIsIndoors) == 0x0000C8, "Member 'UInteriorAudioComponent_Roof_C::bIsIndoors' has a wrong offset!");
static_assert(offsetof(UInteriorAudioComponent_Roof_C, IndoorsStateChangedTime) == 0x0000D0, "Member 'UInteriorAudioComponent_Roof_C::IndoorsStateChangedTime' has a wrong offset!");
static_assert(offsetof(UInteriorAudioComponent_Roof_C, IndoorsInterpTime) == 0x0000D8, "Member 'UInteriorAudioComponent_Roof_C::IndoorsInterpTime' has a wrong offset!");

}
