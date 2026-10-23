#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGameFeatureStatus_C final : public UAthenaGameFeatureStatus
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Downloading_Error;
	class UWidgetAnimation*                       Downloading;
	class UImage*                                 Image_ErrorIcon;
	class UImage*                                 Image_Pause;
	class UWidgetSwitcher*                        Switcher_ProgressOrError;
	struct FLinearColor                           Progress;
	struct FLinearColor                           Error;
	struct FLinearColor                           paused;

public:
	void ExecuteUbergraph_GameFeatureStatus(int32 EntryPoint);
	void HandleStatusChanged(EAthenaGameFeatureStatus CurrentStatus);
	void OnStatusChanged(EAthenaGameFeatureStatus NewStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameFeatureStatus_C">();
	}
	static class UGameFeatureStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureStatus_C>();
	}
};
static_assert(alignof(UGameFeatureStatus_C) == 0x000008, "Wrong alignment on UGameFeatureStatus_C");
static_assert(sizeof(UGameFeatureStatus_C) == 0x0003B0, "Wrong size on UGameFeatureStatus_C");
static_assert(offsetof(UGameFeatureStatus_C, UberGraphFrame) == 0x000350, "Member 'UGameFeatureStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Downloading_Error) == 0x000358, "Member 'UGameFeatureStatus_C::Downloading_Error' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Downloading) == 0x000360, "Member 'UGameFeatureStatus_C::Downloading' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Image_ErrorIcon) == 0x000368, "Member 'UGameFeatureStatus_C::Image_ErrorIcon' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Image_Pause) == 0x000370, "Member 'UGameFeatureStatus_C::Image_Pause' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Switcher_ProgressOrError) == 0x000378, "Member 'UGameFeatureStatus_C::Switcher_ProgressOrError' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Progress) == 0x000380, "Member 'UGameFeatureStatus_C::Progress' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Error) == 0x000390, "Member 'UGameFeatureStatus_C::Error' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, paused) == 0x0003A0, "Member 'UGameFeatureStatus_C::paused' has a wrong offset!");

}
