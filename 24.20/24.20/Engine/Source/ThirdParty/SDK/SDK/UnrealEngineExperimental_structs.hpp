#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EScriptDiagnosticMessageType : uint8
{
	Debug                                    = 0,
	Verbose                                  = 1,
	Normal                                   = 2,
	Warning                                  = 3,
	Error                                    = 4,
	EScriptDiagnosticMessageType_MAX         = 5,
};

struct FScriptDiagnosticSourceLocation final
{
public:
	class FString                                 FilePath;
	struct FIntPoint                              RowSpan;
	struct FIntPoint                              ColSpan;
};
static_assert(alignof(FScriptDiagnosticSourceLocation) == 0x000008, "Wrong alignment on FScriptDiagnosticSourceLocation");
static_assert(sizeof(FScriptDiagnosticSourceLocation) == 0x000020, "Wrong size on FScriptDiagnosticSourceLocation");
static_assert(offsetof(FScriptDiagnosticSourceLocation, FilePath) == 0x000000, "Member 'FScriptDiagnosticSourceLocation::FilePath' has a wrong offset!");
static_assert(offsetof(FScriptDiagnosticSourceLocation, RowSpan) == 0x000010, "Member 'FScriptDiagnosticSourceLocation::RowSpan' has a wrong offset!");
static_assert(offsetof(FScriptDiagnosticSourceLocation, ColSpan) == 0x000018, "Member 'FScriptDiagnosticSourceLocation::ColSpan' has a wrong offset!");

struct FScriptDiagnosticMessage
{
public:
	EScriptDiagnosticMessageType                  MessageType;
	uint8                                         Pad_1[0x7];
	struct FDateTime                              Timestamp;
	class FString                                 Channel;
	class FText                                   MessageStr;
	struct FScriptDiagnosticSourceLocation        SourceLocation;
};
static_assert(alignof(FScriptDiagnosticMessage) == 0x000008, "Wrong alignment on FScriptDiagnosticMessage");
static_assert(sizeof(FScriptDiagnosticMessage) == 0x000058, "Wrong size on FScriptDiagnosticMessage");
static_assert(offsetof(FScriptDiagnosticMessage, MessageType) == 0x000000, "Member 'FScriptDiagnosticMessage::MessageType' has a wrong offset!");
static_assert(offsetof(FScriptDiagnosticMessage, Timestamp) == 0x000008, "Member 'FScriptDiagnosticMessage::Timestamp' has a wrong offset!");
static_assert(offsetof(FScriptDiagnosticMessage, Channel) == 0x000010, "Member 'FScriptDiagnosticMessage::Channel' has a wrong offset!");
static_assert(offsetof(FScriptDiagnosticMessage, MessageStr) == 0x000020, "Member 'FScriptDiagnosticMessage::MessageStr' has a wrong offset!");
static_assert(offsetof(FScriptDiagnosticMessage, SourceLocation) == 0x000038, "Member 'FScriptDiagnosticMessage::SourceLocation' has a wrong offset!");

struct FScriptScreenLogMessage final : public FScriptDiagnosticMessage
{
public:
	struct FColor                                 ScreenColor;
	float                                         DisplayDuration;
};
static_assert(alignof(FScriptScreenLogMessage) == 0x000008, "Wrong alignment on FScriptScreenLogMessage");
static_assert(sizeof(FScriptScreenLogMessage) == 0x000060, "Wrong size on FScriptScreenLogMessage");
static_assert(offsetof(FScriptScreenLogMessage, ScreenColor) == 0x000058, "Member 'FScriptScreenLogMessage::ScreenColor' has a wrong offset!");
static_assert(offsetof(FScriptScreenLogMessage, DisplayDuration) == 0x00005C, "Member 'FScriptScreenLogMessage::DisplayDuration' has a wrong offset!");

}
