#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UShowdownDivisionDetailsInfo_C final : public UFortDivisionDetailsInfo
{
public:
	class UImage*                                 Hidden_Delete_;
	class UImage*                                 Image_66;
	class URichTextBlock*                         RichTextBlock_AboutLeagues;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownDivisionDetailsInfo_C">();
	}
	static class UShowdownDivisionDetailsInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownDivisionDetailsInfo_C>();
	}
};
static_assert(alignof(UShowdownDivisionDetailsInfo_C) == 0x000008, "Wrong alignment on UShowdownDivisionDetailsInfo_C");
static_assert(sizeof(UShowdownDivisionDetailsInfo_C) == 0x000748, "Wrong size on UShowdownDivisionDetailsInfo_C");
static_assert(offsetof(UShowdownDivisionDetailsInfo_C, Hidden_Delete_) == 0x000730, "Member 'UShowdownDivisionDetailsInfo_C::Hidden_Delete_' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionDetailsInfo_C, Image_66) == 0x000738, "Member 'UShowdownDivisionDetailsInfo_C::Image_66' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionDetailsInfo_C, RichTextBlock_AboutLeagues) == 0x000740, "Member 'UShowdownDivisionDetailsInfo_C::RichTextBlock_AboutLeagues' has a wrong offset!");

}
