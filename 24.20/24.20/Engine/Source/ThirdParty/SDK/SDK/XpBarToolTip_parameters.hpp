#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct XpBarToolTip_C_GetBodyText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(XpBarToolTip_C_GetBodyText) == 0x000008, "Wrong alignment on XpBarToolTip_C_GetBodyText");
static_assert(sizeof(XpBarToolTip_C_GetBodyText) == 0x000018, "Wrong size on XpBarToolTip_C_GetBodyText");
static_assert(offsetof(XpBarToolTip_C_GetBodyText, ReturnValue) == 0x000000, "Member 'XpBarToolTip_C_GetBodyText::ReturnValue' has a wrong offset!");

struct XpBarToolTip_C_GetBoostXPText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(XpBarToolTip_C_GetBoostXPText) == 0x000008, "Wrong alignment on XpBarToolTip_C_GetBoostXPText");
static_assert(sizeof(XpBarToolTip_C_GetBoostXPText) == 0x000018, "Wrong size on XpBarToolTip_C_GetBoostXPText");
static_assert(offsetof(XpBarToolTip_C_GetBoostXPText, ReturnValue) == 0x000000, "Member 'XpBarToolTip_C_GetBoostXPText::ReturnValue' has a wrong offset!");

struct XpBarToolTip_C_GetCommanderXPText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(XpBarToolTip_C_GetCommanderXPText) == 0x000008, "Wrong alignment on XpBarToolTip_C_GetCommanderXPText");
static_assert(sizeof(XpBarToolTip_C_GetCommanderXPText) == 0x000018, "Wrong size on XpBarToolTip_C_GetCommanderXPText");
static_assert(offsetof(XpBarToolTip_C_GetCommanderXPText, ReturnValue) == 0x000000, "Member 'XpBarToolTip_C_GetCommanderXPText::ReturnValue' has a wrong offset!");

struct XpBarToolTip_C_GetHeaderText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(XpBarToolTip_C_GetHeaderText) == 0x000008, "Wrong alignment on XpBarToolTip_C_GetHeaderText");
static_assert(sizeof(XpBarToolTip_C_GetHeaderText) == 0x000018, "Wrong size on XpBarToolTip_C_GetHeaderText");
static_assert(offsetof(XpBarToolTip_C_GetHeaderText, ReturnValue) == 0x000000, "Member 'XpBarToolTip_C_GetHeaderText::ReturnValue' has a wrong offset!");

struct XpBarToolTip_C_GetRestedXPText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(XpBarToolTip_C_GetRestedXPText) == 0x000008, "Wrong alignment on XpBarToolTip_C_GetRestedXPText");
static_assert(sizeof(XpBarToolTip_C_GetRestedXPText) == 0x000018, "Wrong size on XpBarToolTip_C_GetRestedXPText");
static_assert(offsetof(XpBarToolTip_C_GetRestedXPText, ReturnValue) == 0x000000, "Member 'XpBarToolTip_C_GetRestedXPText::ReturnValue' has a wrong offset!");

}
