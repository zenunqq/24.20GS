#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaChatWidgetModalWrapper_C final : public UFortChatModalWrapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_AthenaChatWidgetModalWrapper(int32 EntryPoint);
	void FocusChat();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChatWidgetModalWrapper_C">();
	}
	static class UAthenaChatWidgetModalWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChatWidgetModalWrapper_C>();
	}
};
static_assert(alignof(UAthenaChatWidgetModalWrapper_C) == 0x000008, "Wrong alignment on UAthenaChatWidgetModalWrapper_C");
static_assert(sizeof(UAthenaChatWidgetModalWrapper_C) == 0x0003C8, "Wrong size on UAthenaChatWidgetModalWrapper_C");
static_assert(offsetof(UAthenaChatWidgetModalWrapper_C, UberGraphFrame) == 0x0003C0, "Member 'UAthenaChatWidgetModalWrapper_C::UberGraphFrame' has a wrong offset!");

}
