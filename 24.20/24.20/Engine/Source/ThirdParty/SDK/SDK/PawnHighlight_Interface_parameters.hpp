#pragma once

#include "Basic.hpp"

#include "PawnHighlight_structs.hpp"

namespace SDK::Params
{

struct PawnHighlight_Interface_C_AddHighlightFromSource final
{
public:
	class UObject*                                Source;
	struct FPawnHighlight                         Highlight;
	bool                                          OnlyUpdateIfCurrent;
};
static_assert(alignof(PawnHighlight_Interface_C_AddHighlightFromSource) == 0x000008, "Wrong alignment on PawnHighlight_Interface_C_AddHighlightFromSource");
static_assert(sizeof(PawnHighlight_Interface_C_AddHighlightFromSource) == 0x000040, "Wrong size on PawnHighlight_Interface_C_AddHighlightFromSource");
static_assert(offsetof(PawnHighlight_Interface_C_AddHighlightFromSource, Source) == 0x000000, "Member 'PawnHighlight_Interface_C_AddHighlightFromSource::Source' has a wrong offset!");
static_assert(offsetof(PawnHighlight_Interface_C_AddHighlightFromSource, Highlight) == 0x000008, "Member 'PawnHighlight_Interface_C_AddHighlightFromSource::Highlight' has a wrong offset!");
static_assert(offsetof(PawnHighlight_Interface_C_AddHighlightFromSource, OnlyUpdateIfCurrent) == 0x000038, "Member 'PawnHighlight_Interface_C_AddHighlightFromSource::OnlyUpdateIfCurrent' has a wrong offset!");

struct PawnHighlight_Interface_C_RemoveHighlightFromSource final
{
public:
	class UObject*                                Source;
};
static_assert(alignof(PawnHighlight_Interface_C_RemoveHighlightFromSource) == 0x000008, "Wrong alignment on PawnHighlight_Interface_C_RemoveHighlightFromSource");
static_assert(sizeof(PawnHighlight_Interface_C_RemoveHighlightFromSource) == 0x000008, "Wrong size on PawnHighlight_Interface_C_RemoveHighlightFromSource");
static_assert(offsetof(PawnHighlight_Interface_C_RemoveHighlightFromSource, Source) == 0x000000, "Member 'PawnHighlight_Interface_C_RemoveHighlightFromSource::Source' has a wrong offset!");

}
