#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UFortniteUserInterfaceSettings final : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                     WidthScaleCurve;
	struct FRuntimeFloatCurve                     HeightScaleCurve;
	struct FRuntimeFloatCurve                     WidthScaleCurve_iOS_InGame;
	struct FRuntimeFloatCurve                     HeightScaleCurve_iOS_InGame;
	struct FRuntimeFloatCurve                     WidthScaleCurve_iOS_FrontEnd;
	struct FRuntimeFloatCurve                     HeightScaleCurve_iOS_FrontEnd;
	struct FRuntimeFloatCurve                     WidthScaleCurve_Android_InGame;
	struct FRuntimeFloatCurve                     HeightScaleCurve_Android_InGame;
	struct FRuntimeFloatCurve                     WidthScaleCurve_Android_FrontEnd;
	struct FRuntimeFloatCurve                     HeightScaleCurve_Android_FrontEnd;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortniteUserInterfaceSettings">();
	}
	static class UFortniteUserInterfaceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortniteUserInterfaceSettings>();
	}
};
static_assert(alignof(UFortniteUserInterfaceSettings) == 0x000008, "Wrong alignment on UFortniteUserInterfaceSettings");
static_assert(sizeof(UFortniteUserInterfaceSettings) == 0x000580, "Wrong size on UFortniteUserInterfaceSettings");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve) == 0x000030, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve) == 0x0000B8, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_iOS_InGame) == 0x000140, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_iOS_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_iOS_InGame) == 0x0001C8, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_iOS_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_iOS_FrontEnd) == 0x000250, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_iOS_FrontEnd' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_iOS_FrontEnd) == 0x0002D8, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_iOS_FrontEnd' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_Android_InGame) == 0x000360, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_Android_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_Android_InGame) == 0x0003E8, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_Android_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_Android_FrontEnd) == 0x000470, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_Android_FrontEnd' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_Android_FrontEnd) == 0x0004F8, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_Android_FrontEnd' has a wrong offset!");

}
