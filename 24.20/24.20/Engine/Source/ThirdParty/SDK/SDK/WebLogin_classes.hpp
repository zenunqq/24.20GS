#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWebLogin_C final : public UFortWebLoginWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCircularThrobber*                      Throbber;
	class UBorder*                                WebContent;

public:
	void ExecuteUbergraph_WebLogin(int32 EntryPoint);
	void DisplayWidget(class UWidget* WebWidget);
	void DismissWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WebLogin_C">();
	}
	static class UWebLogin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebLogin_C>();
	}
};
static_assert(alignof(UWebLogin_C) == 0x000008, "Wrong alignment on UWebLogin_C");
static_assert(sizeof(UWebLogin_C) == 0x000500, "Wrong size on UWebLogin_C");
static_assert(offsetof(UWebLogin_C, UberGraphFrame) == 0x0004E8, "Member 'UWebLogin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWebLogin_C, Throbber) == 0x0004F0, "Member 'UWebLogin_C::Throbber' has a wrong offset!");
static_assert(offsetof(UWebLogin_C, WebContent) == 0x0004F8, "Member 'UWebLogin_C::WebContent' has a wrong offset!");

}
