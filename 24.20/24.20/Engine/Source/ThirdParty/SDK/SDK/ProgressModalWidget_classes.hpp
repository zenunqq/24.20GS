#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UProgressModalWidget_C final : public UFortProgressModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class ULightbox_C*                            Lightbox;

public:
	void OnBeginOutro();
	void OnBeginIntro();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void HandleOutroEnded();
	void HandleIntroEnded();
	void ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint);
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressModalWidget_C">();
	}
	static class UProgressModalWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressModalWidget_C>();
	}
};
static_assert(alignof(UProgressModalWidget_C) == 0x000010, "Wrong alignment on UProgressModalWidget_C");
static_assert(sizeof(UProgressModalWidget_C) == 0x000630, "Wrong size on UProgressModalWidget_C");
static_assert(offsetof(UProgressModalWidget_C, UberGraphFrame) == 0x000620, "Member 'UProgressModalWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressModalWidget_C, Lightbox) == 0x000628, "Member 'UProgressModalWidget_C::Lightbox' has a wrong offset!");

}
