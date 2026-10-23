#pragma once

#include "Basic.hpp"

#include "LiveLinkInterface_structs.hpp"

namespace SDK::Params
{

struct LiveLinkComponentController_SetSubjectRepresentation final
{
public:
	struct FLiveLinkSubjectRepresentation         InSubjectRepresentation;
};
static_assert(alignof(LiveLinkComponentController_SetSubjectRepresentation) == 0x000008, "Wrong alignment on LiveLinkComponentController_SetSubjectRepresentation");
static_assert(sizeof(LiveLinkComponentController_SetSubjectRepresentation) == 0x000010, "Wrong size on LiveLinkComponentController_SetSubjectRepresentation");
static_assert(offsetof(LiveLinkComponentController_SetSubjectRepresentation, InSubjectRepresentation) == 0x000000, "Member 'LiveLinkComponentController_SetSubjectRepresentation::InSubjectRepresentation' has a wrong offset!");

struct LiveLinkComponentController_GetSubjectRepresentation final
{
public:
	struct FLiveLinkSubjectRepresentation         ReturnValue;
};
static_assert(alignof(LiveLinkComponentController_GetSubjectRepresentation) == 0x000008, "Wrong alignment on LiveLinkComponentController_GetSubjectRepresentation");
static_assert(sizeof(LiveLinkComponentController_GetSubjectRepresentation) == 0x000010, "Wrong size on LiveLinkComponentController_GetSubjectRepresentation");
static_assert(offsetof(LiveLinkComponentController_GetSubjectRepresentation, ReturnValue) == 0x000000, "Member 'LiveLinkComponentController_GetSubjectRepresentation::ReturnValue' has a wrong offset!");

}
