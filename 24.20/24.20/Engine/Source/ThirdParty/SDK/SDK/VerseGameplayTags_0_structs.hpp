#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ETags_tag_search_sort_type : uint8
{
	Unsorted                                 = 0,
	Sorted                                   = 1,
	Tags_tag_search_sort_MAX                 = 2,
};

struct VerseGameplayTags_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseGameplayTags_0::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseGameplayTags_0::Ftuple_L_R");
static_assert(sizeof(VerseGameplayTags_0::Ftuple_L_R) == 0x000001, "Wrong size on VerseGameplayTags_0::Ftuple_L_R");
static_assert(offsetof(VerseGameplayTags_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseGameplayTags_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct Ftuple_Ltag__container_Mtag__container_R final
{
public:
	class UTags_tag_container*                    __verse_0x18E3F084_Elem0;
	class UTags_tag_container*                    __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltag__container_Mtag__container_R) == 0x000008, "Wrong alignment on Ftuple_Ltag__container_Mtag__container_R");
static_assert(sizeof(Ftuple_Ltag__container_Mtag__container_R) == 0x000010, "Wrong size on Ftuple_Ltag__container_Mtag__container_R");
static_assert(offsetof(Ftuple_Ltag__container_Mtag__container_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltag__container_Mtag__container_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltag__container_Mtag__container_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Ltag__container_Mtag__container_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Ltag_Mtag_R final
{
public:
	class UTags_tag*                              __verse_0x18E3F084_Elem0;
	class UTags_tag*                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltag_Mtag_R) == 0x000008, "Wrong alignment on Ftuple_Ltag_Mtag_R");
static_assert(sizeof(Ftuple_Ltag_Mtag_R) == 0x000010, "Wrong size on Ftuple_Ltag_Mtag_R");
static_assert(offsetof(Ftuple_Ltag_Mtag_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltag_Mtag_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltag_Mtag_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Ltag_Mtag_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
