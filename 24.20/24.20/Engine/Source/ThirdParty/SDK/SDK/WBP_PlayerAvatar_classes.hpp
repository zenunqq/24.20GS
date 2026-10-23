#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UWBP_PlayerAvatar_C final : public UFortPlayerAvatar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USpacer*                                Spacer_Size;
	class UMaterialInstanceDynamic*               AvatarMaterial;
	struct FVector2D                              AvatarSize;
	struct FLinearColor                           PresenceSelect_Online;
	struct FLinearColor                           PresenceSelect_Away;
	struct FLinearColor                           PresenceSelect_Offline;
	struct FLinearColor                           PresenceSelect_Blocked;
	struct FLinearColor                           PresenceColor_Online;
	struct FLinearColor                           PresenceColor_Away;
	struct FLinearColor                           PresenceColor_Offline;
	bool                                          ShowOnlinePresence;
	uint8                                         Pad_311[0x7];
	double                                        PresenceIconScale;
	struct FVector2D                              PresenceIconOffset;
	bool                                          ShowPresenceBg;

public:
	void Event_Set_Presence_Icon_Settings(double Scale, const struct FVector2D& Offset);
	void Event_Set_Size(const struct FVector2D& NewSize);
	void ExecuteUbergraph_WBP_PlayerAvatar(int32 EntryPoint);
	void OnOnlinePresenceChanged(const bool bHidePresence, const EPresenceIndicatorState PresenceState);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerAvatar_C">();
	}
	static class UWBP_PlayerAvatar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerAvatar_C>();
	}
};
static_assert(alignof(UWBP_PlayerAvatar_C) == 0x000008, "Wrong alignment on UWBP_PlayerAvatar_C");
static_assert(sizeof(UWBP_PlayerAvatar_C) == 0x000338, "Wrong size on UWBP_PlayerAvatar_C");
static_assert(offsetof(UWBP_PlayerAvatar_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PlayerAvatar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, Spacer_Size) == 0x000280, "Member 'UWBP_PlayerAvatar_C::Spacer_Size' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, AvatarMaterial) == 0x000288, "Member 'UWBP_PlayerAvatar_C::AvatarMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, AvatarSize) == 0x000290, "Member 'UWBP_PlayerAvatar_C::AvatarSize' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Online) == 0x0002A0, "Member 'UWBP_PlayerAvatar_C::PresenceSelect_Online' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Away) == 0x0002B0, "Member 'UWBP_PlayerAvatar_C::PresenceSelect_Away' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Offline) == 0x0002C0, "Member 'UWBP_PlayerAvatar_C::PresenceSelect_Offline' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Blocked) == 0x0002D0, "Member 'UWBP_PlayerAvatar_C::PresenceSelect_Blocked' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceColor_Online) == 0x0002E0, "Member 'UWBP_PlayerAvatar_C::PresenceColor_Online' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceColor_Away) == 0x0002F0, "Member 'UWBP_PlayerAvatar_C::PresenceColor_Away' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceColor_Offline) == 0x000300, "Member 'UWBP_PlayerAvatar_C::PresenceColor_Offline' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, ShowOnlinePresence) == 0x000310, "Member 'UWBP_PlayerAvatar_C::ShowOnlinePresence' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceIconScale) == 0x000318, "Member 'UWBP_PlayerAvatar_C::PresenceIconScale' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceIconOffset) == 0x000320, "Member 'UWBP_PlayerAvatar_C::PresenceIconOffset' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerAvatar_C, ShowPresenceBg) == 0x000330, "Member 'UWBP_PlayerAvatar_C::ShowPresenceBg' has a wrong offset!");

}
