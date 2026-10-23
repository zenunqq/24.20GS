#pragma once

#include "Basic.hpp"

#include "PictureInPictureDescriptors_structs.hpp"

namespace SDK
{

enum class EPictureInPictureAuthState : uint8
{
	Unknown                                  = 0,
	NOT_AUTHORIZED                           = 1,
	AUTHORIZED                               = 2,
	PictureInPictureAuthState_MAX            = 3,
};

enum class EPictureInPictureAuthType : uint8
{
	AUTH_NONE                                = 0,
	AUTH_USER_PASS                           = 1,
	AUTH_QR_CODE                             = 2,
	AUTH_MAX                                 = 3,
};

struct FPiPSuspendInfo final
{
public:
	struct FPiPPartnerSource                      SourceSnapshot;
	bool                                          bEnabledState;
	uint8                                         Pad_129[0x7];
};
static_assert(alignof(FPiPSuspendInfo) == 0x000008, "Wrong alignment on FPiPSuspendInfo");
static_assert(sizeof(FPiPSuspendInfo) == 0x000130, "Wrong size on FPiPSuspendInfo");
static_assert(offsetof(FPiPSuspendInfo, SourceSnapshot) == 0x000000, "Member 'FPiPSuspendInfo::SourceSnapshot' has a wrong offset!");
static_assert(offsetof(FPiPSuspendInfo, bEnabledState) == 0x000128, "Member 'FPiPSuspendInfo::bEnabledState' has a wrong offset!");

}
