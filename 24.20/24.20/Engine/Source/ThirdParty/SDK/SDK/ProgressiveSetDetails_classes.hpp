#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UProgressiveSetDetails_C final : public UFortProgressiveSetDetailsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UProgressiveTagsBase_C*                 Tag_ItemSetState;
	class UCommonTextBlock*                       Text_HeaderSetName;
	class UCommonTextBlock*                       Text_NoTimeLimit;
	class FText                                   Text;
	struct FLinearColor                           Completed_BG;
	struct FLinearColor                           Default_BG;
	struct FSlateColor                            Completed_FG;
	struct FSlateColor                            Default_FG;

public:
	void Update_Tag(const class FText& Expiring_Text, const bool Completed);
	void ExecuteUbergraph_ProgressiveSetDetails(int32 EntryPoint);
	void BP_OnUpdateSetDetails(const class FText& SetName, const class FText& ExpiringText, const bool bCompleted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveSetDetails_C">();
	}
	static class UProgressiveSetDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveSetDetails_C>();
	}
};
static_assert(alignof(UProgressiveSetDetails_C) == 0x000008, "Wrong alignment on UProgressiveSetDetails_C");
static_assert(sizeof(UProgressiveSetDetails_C) == 0x000318, "Wrong size on UProgressiveSetDetails_C");
static_assert(offsetof(UProgressiveSetDetails_C, UberGraphFrame) == 0x000298, "Member 'UProgressiveSetDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Tag_ItemSetState) == 0x0002A0, "Member 'UProgressiveSetDetails_C::Tag_ItemSetState' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Text_HeaderSetName) == 0x0002A8, "Member 'UProgressiveSetDetails_C::Text_HeaderSetName' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Text_NoTimeLimit) == 0x0002B0, "Member 'UProgressiveSetDetails_C::Text_NoTimeLimit' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Text) == 0x0002B8, "Member 'UProgressiveSetDetails_C::Text' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Completed_BG) == 0x0002D0, "Member 'UProgressiveSetDetails_C::Completed_BG' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Default_BG) == 0x0002E0, "Member 'UProgressiveSetDetails_C::Default_BG' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Completed_FG) == 0x0002F0, "Member 'UProgressiveSetDetails_C::Completed_FG' has a wrong offset!");
static_assert(offsetof(UProgressiveSetDetails_C, Default_FG) == 0x000304, "Member 'UProgressiveSetDetails_C::Default_FG' has a wrong offset!");

}
