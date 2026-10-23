#pragma once

#include "Basic.hpp"

#include "FortniteAI_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UNPCConvertedIndicatorMarker_C final : public UAthenaMarkedActorIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 IrwinIndicator;
	class UConvertedMarkerInfo_C*                 RidingMarkerInfo;
	struct FLinearColor                           CachedColor;

public:
	void ExecuteUbergraph_NPCConvertedIndicatorMarker(int32 EntryPoint);
	void OnPingCommandEvent(EPingCommandType CommandType);
	void OnSetMarkerData(const struct FFortWorldMarkerData& FortWorldMarkerData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCConvertedIndicatorMarker_C">();
	}
	static class UNPCConvertedIndicatorMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPCConvertedIndicatorMarker_C>();
	}
};
static_assert(alignof(UNPCConvertedIndicatorMarker_C) == 0x000008, "Wrong alignment on UNPCConvertedIndicatorMarker_C");
static_assert(sizeof(UNPCConvertedIndicatorMarker_C) == 0x000630, "Wrong size on UNPCConvertedIndicatorMarker_C");
static_assert(offsetof(UNPCConvertedIndicatorMarker_C, UberGraphFrame) == 0x000608, "Member 'UNPCConvertedIndicatorMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPCConvertedIndicatorMarker_C, IrwinIndicator) == 0x000610, "Member 'UNPCConvertedIndicatorMarker_C::IrwinIndicator' has a wrong offset!");
static_assert(offsetof(UNPCConvertedIndicatorMarker_C, RidingMarkerInfo) == 0x000618, "Member 'UNPCConvertedIndicatorMarker_C::RidingMarkerInfo' has a wrong offset!");
static_assert(offsetof(UNPCConvertedIndicatorMarker_C, CachedColor) == 0x000620, "Member 'UNPCConvertedIndicatorMarker_C::CachedColor' has a wrong offset!");

}
