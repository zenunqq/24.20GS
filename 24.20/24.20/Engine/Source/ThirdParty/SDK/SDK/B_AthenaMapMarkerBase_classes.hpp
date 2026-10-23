#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_AthenaMapMarkerBase_C : public AFortPlayerMarkerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   PingMarkerProto;
	class UStaticMeshComponent*                   SM_Target;
	float                                         OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E;
	float                                         OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E;
	float                                         OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E;
	ETimelineDirection                            OnProtoMarkerPlaced__Direction_83EEC58A4783B077FB03728C433B4B7E;
	uint8                                         Pad_525[0x3];
	class UTimelineComponent*                     OnProtoMarkerPlaced;
	bool                                          bUseProtoMarker;
	uint8                                         Pad_531[0x7];
	class UMaterialInstanceDynamic*               MIDProtoMarker;
	struct FFortWorldMarkerData                   MarkerData;

public:
	void ExecuteUbergraph_B_AthenaMapMarkerBase(int32 EntryPoint);
	void OnMarkerColorChanged(const struct FLinearColor& InColor);
	void OnMarkerPlaced();
	void OnProtoMarkerPlaced__FinishedFunc();
	void OnProtoMarkerPlaced__UpdateFunc();
	void OnSetupMarker(const struct FFortWorldMarkerData& MarkerData_0);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AthenaMapMarkerBase_C">();
	}
	static class AB_AthenaMapMarkerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AthenaMapMarkerBase_C>();
	}
};
static_assert(alignof(AB_AthenaMapMarkerBase_C) == 0x000008, "Wrong alignment on AB_AthenaMapMarkerBase_C");
static_assert(sizeof(AB_AthenaMapMarkerBase_C) == 0x0006C0, "Wrong size on AB_AthenaMapMarkerBase_C");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, UberGraphFrame) == 0x000500, "Member 'AB_AthenaMapMarkerBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, PingMarkerProto) == 0x000508, "Member 'AB_AthenaMapMarkerBase_C::PingMarkerProto' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, SM_Target) == 0x000510, "Member 'AB_AthenaMapMarkerBase_C::SM_Target' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E) == 0x000518, "Member 'AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E) == 0x00051C, "Member 'AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E) == 0x000520, "Member 'AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced__Direction_83EEC58A4783B077FB03728C433B4B7E) == 0x000524, "Member 'AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced__Direction_83EEC58A4783B077FB03728C433B4B7E' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced) == 0x000528, "Member 'AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, bUseProtoMarker) == 0x000530, "Member 'AB_AthenaMapMarkerBase_C::bUseProtoMarker' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, MIDProtoMarker) == 0x000538, "Member 'AB_AthenaMapMarkerBase_C::MIDProtoMarker' has a wrong offset!");
static_assert(offsetof(AB_AthenaMapMarkerBase_C, MarkerData) == 0x000540, "Member 'AB_AthenaMapMarkerBase_C::MarkerData' has a wrong offset!");

}
