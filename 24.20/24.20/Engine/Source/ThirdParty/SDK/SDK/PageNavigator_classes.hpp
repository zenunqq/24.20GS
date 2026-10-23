#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UPageNavigator_C final : public UFortPageNavigator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class USafeZone*                              SafeZone_4;
	struct FLinearColor                           Color1;
	struct FLinearColor                           Color2;
	struct FLinearColor                           Color3;
	struct FLinearColor                           Color4;
	struct FLinearColor                           Color5;

public:
	void ExecuteUbergraph_PageNavigator(int32 EntryPoint);
	void OnPipButtonCreated(class UFortTextButton* NewPipButton);
	void Play_intro();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PageNavigator_C">();
	}
	static class UPageNavigator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPageNavigator_C>();
	}
};
static_assert(alignof(UPageNavigator_C) == 0x000008, "Wrong alignment on UPageNavigator_C");
static_assert(sizeof(UPageNavigator_C) == 0x0004A8, "Wrong size on UPageNavigator_C");
static_assert(offsetof(UPageNavigator_C, UberGraphFrame) == 0x000440, "Member 'UPageNavigator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPageNavigator_C, Intro) == 0x000448, "Member 'UPageNavigator_C::Intro' has a wrong offset!");
static_assert(offsetof(UPageNavigator_C, SafeZone_4) == 0x000450, "Member 'UPageNavigator_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(UPageNavigator_C, Color1) == 0x000458, "Member 'UPageNavigator_C::Color1' has a wrong offset!");
static_assert(offsetof(UPageNavigator_C, Color2) == 0x000468, "Member 'UPageNavigator_C::Color2' has a wrong offset!");
static_assert(offsetof(UPageNavigator_C, Color3) == 0x000478, "Member 'UPageNavigator_C::Color3' has a wrong offset!");
static_assert(offsetof(UPageNavigator_C, Color4) == 0x000488, "Member 'UPageNavigator_C::Color4' has a wrong offset!");
static_assert(offsetof(UPageNavigator_C, Color5) == 0x000498, "Member 'UPageNavigator_C::Color5' has a wrong offset!");

}
