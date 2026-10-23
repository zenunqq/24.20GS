#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged final
{
public:
	class FText                                   InputLinkCode;
};
static_assert(alignof(DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged) == 0x000008, "Wrong alignment on DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged");
static_assert(sizeof(DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged) == 0x000018, "Wrong size on DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged");
static_assert(offsetof(DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged, InputLinkCode) == 0x000000, "Member 'DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged::InputLinkCode' has a wrong offset!");

struct DownloadOnDemandAddProjectModal_UpdateLightningViolator final
{
public:
	ESlateVisibility                              InVisibility;
	uint8                                         Pad_1[0x7];
	class FText                                   InText;
};
static_assert(alignof(DownloadOnDemandAddProjectModal_UpdateLightningViolator) == 0x000008, "Wrong alignment on DownloadOnDemandAddProjectModal_UpdateLightningViolator");
static_assert(sizeof(DownloadOnDemandAddProjectModal_UpdateLightningViolator) == 0x000020, "Wrong size on DownloadOnDemandAddProjectModal_UpdateLightningViolator");
static_assert(offsetof(DownloadOnDemandAddProjectModal_UpdateLightningViolator, InVisibility) == 0x000000, "Member 'DownloadOnDemandAddProjectModal_UpdateLightningViolator::InVisibility' has a wrong offset!");
static_assert(offsetof(DownloadOnDemandAddProjectModal_UpdateLightningViolator, InText) == 0x000008, "Member 'DownloadOnDemandAddProjectModal_UpdateLightningViolator::InText' has a wrong offset!");

struct DownloadOnDemandProjectTile_UpdateLabel final
{
public:
	bool                                          bShowLabel;
};
static_assert(alignof(DownloadOnDemandProjectTile_UpdateLabel) == 0x000001, "Wrong alignment on DownloadOnDemandProjectTile_UpdateLabel");
static_assert(sizeof(DownloadOnDemandProjectTile_UpdateLabel) == 0x000001, "Wrong size on DownloadOnDemandProjectTile_UpdateLabel");
static_assert(offsetof(DownloadOnDemandProjectTile_UpdateLabel, bShowLabel) == 0x000000, "Member 'DownloadOnDemandProjectTile_UpdateLabel::bShowLabel' has a wrong offset!");

}
