#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EInteractionRange : uint8
{
	Preview                                  = 0,
	Interaction                              = 1,
	EInteractionRange_MAX                    = 2,
};

struct FFortConversationEnterEvent final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FFortConversationEnterEvent) == 0x000001, "Wrong alignment on FFortConversationEnterEvent");
static_assert(sizeof(FFortConversationEnterEvent) == 0x000001, "Wrong size on FFortConversationEnterEvent");

struct FFortConversation_Spectator_EnterConversation final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FFortConversation_Spectator_EnterConversation) == 0x000001, "Wrong alignment on FFortConversation_Spectator_EnterConversation");
static_assert(sizeof(FFortConversation_Spectator_EnterConversation) == 0x000001, "Wrong size on FFortConversation_Spectator_EnterConversation");

struct FFortConversation_Spectator_LeaveConversation final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FFortConversation_Spectator_LeaveConversation) == 0x000001, "Wrong alignment on FFortConversation_Spectator_LeaveConversation");
static_assert(sizeof(FFortConversation_Spectator_LeaveConversation) == 0x000001, "Wrong size on FFortConversation_Spectator_LeaveConversation");

struct FFortConversation_SetDialogMarkerClassEvent final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FFortConversation_SetDialogMarkerClassEvent) == 0x000001, "Wrong alignment on FFortConversation_SetDialogMarkerClassEvent");
static_assert(sizeof(FFortConversation_SetDialogMarkerClassEvent) == 0x000001, "Wrong size on FFortConversation_SetDialogMarkerClassEvent");

struct FNPCConversationIndicatorMessage
{
public:
	class UFortNonPlayerConversationParticipantComponent* NPCConversationComponent;
};
static_assert(alignof(FNPCConversationIndicatorMessage) == 0x000008, "Wrong alignment on FNPCConversationIndicatorMessage");
static_assert(sizeof(FNPCConversationIndicatorMessage) == 0x000008, "Wrong size on FNPCConversationIndicatorMessage");
static_assert(offsetof(FNPCConversationIndicatorMessage, NPCConversationComponent) == 0x000000, "Member 'FNPCConversationIndicatorMessage::NPCConversationComponent' has a wrong offset!");

struct FFortConversation_NPC_AddIndicator final : public FNPCConversationIndicatorMessage
{
};
static_assert(alignof(FFortConversation_NPC_AddIndicator) == 0x000008, "Wrong alignment on FFortConversation_NPC_AddIndicator");
static_assert(sizeof(FFortConversation_NPC_AddIndicator) == 0x000008, "Wrong size on FFortConversation_NPC_AddIndicator");

struct FFortConversation_NPC_RemoveIndicator final : public FNPCConversationIndicatorMessage
{
};
static_assert(alignof(FFortConversation_NPC_RemoveIndicator) == 0x000008, "Wrong alignment on FFortConversation_NPC_RemoveIndicator");
static_assert(sizeof(FFortConversation_NPC_RemoveIndicator) == 0x000008, "Wrong size on FFortConversation_NPC_RemoveIndicator");

struct FConversationSettingDialogMarkerData final
{
public:
	TSoftClassPtr<class UClass>                   DialogMarkerSoftClass;
};
static_assert(alignof(FConversationSettingDialogMarkerData) == 0x000008, "Wrong alignment on FConversationSettingDialogMarkerData");
static_assert(sizeof(FConversationSettingDialogMarkerData) == 0x000028, "Wrong size on FConversationSettingDialogMarkerData");
static_assert(offsetof(FConversationSettingDialogMarkerData, DialogMarkerSoftClass) == 0x000000, "Member 'FConversationSettingDialogMarkerData::DialogMarkerSoftClass' has a wrong offset!");

struct FFortConversationConditionalMessage final
{
public:
	class UFortConversationContextCondition*      Condition;
	class FText                                   message;
};
static_assert(alignof(FFortConversationConditionalMessage) == 0x000008, "Wrong alignment on FFortConversationConditionalMessage");
static_assert(sizeof(FFortConversationConditionalMessage) == 0x000020, "Wrong size on FFortConversationConditionalMessage");
static_assert(offsetof(FFortConversationConditionalMessage, Condition) == 0x000000, "Member 'FFortConversationConditionalMessage::Condition' has a wrong offset!");
static_assert(offsetof(FFortConversationConditionalMessage, message) == 0x000008, "Member 'FFortConversationConditionalMessage::message' has a wrong offset!");

struct FFortConversationNodeConditionalMessages final
{
public:
	TArray<struct FFortConversationConditionalMessage> Messages;
};
static_assert(alignof(FFortConversationNodeConditionalMessages) == 0x000008, "Wrong alignment on FFortConversationNodeConditionalMessages");
static_assert(sizeof(FFortConversationNodeConditionalMessages) == 0x000010, "Wrong size on FFortConversationNodeConditionalMessages");
static_assert(offsetof(FFortConversationNodeConditionalMessages, Messages) == 0x000000, "Member 'FFortConversationNodeConditionalMessages::Messages' has a wrong offset!");

}
