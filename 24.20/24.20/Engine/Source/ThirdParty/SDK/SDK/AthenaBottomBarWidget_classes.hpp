#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UAthenaBottomBarWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAthenaBoundActionBar*                  AthenaBoundActionBar_85;
	class UFortHUDElementWrapper_C*               FortHUDElementWrapper;
	bool                                          Display_Owner_Actions_Only;

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaBottomBarWidget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBottomBarWidget_C">();
	}
	static class UAthenaBottomBarWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBottomBarWidget_C>();
	}
};
static_assert(alignof(UAthenaBottomBarWidget_C) == 0x000008, "Wrong alignment on UAthenaBottomBarWidget_C");
static_assert(sizeof(UAthenaBottomBarWidget_C) == 0x0002B0, "Wrong size on UAthenaBottomBarWidget_C");
static_assert(offsetof(UAthenaBottomBarWidget_C, UberGraphFrame) == 0x000290, "Member 'UAthenaBottomBarWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBottomBarWidget_C, AthenaBoundActionBar_85) == 0x000298, "Member 'UAthenaBottomBarWidget_C::AthenaBoundActionBar_85' has a wrong offset!");
static_assert(offsetof(UAthenaBottomBarWidget_C, FortHUDElementWrapper) == 0x0002A0, "Member 'UAthenaBottomBarWidget_C::FortHUDElementWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaBottomBarWidget_C, Display_Owner_Actions_Only) == 0x0002A8, "Member 'UAthenaBottomBarWidget_C::Display_Owner_Actions_Only' has a wrong offset!");

}
