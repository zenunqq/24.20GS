#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FArtifactSettings final
{
public:
	class FString                                 ArtifactName;
	class FString                                 ClientId;
	class FString                                 ClientSecret;
	class FString                                 ProductId;
	class FString                                 SandboxId;
	class FString                                 DeploymentId;
	class FString                                 EncryptionKey;
};
static_assert(alignof(FArtifactSettings) == 0x000008, "Wrong alignment on FArtifactSettings");
static_assert(sizeof(FArtifactSettings) == 0x000070, "Wrong size on FArtifactSettings");
static_assert(offsetof(FArtifactSettings, ArtifactName) == 0x000000, "Member 'FArtifactSettings::ArtifactName' has a wrong offset!");
static_assert(offsetof(FArtifactSettings, ClientId) == 0x000010, "Member 'FArtifactSettings::ClientId' has a wrong offset!");
static_assert(offsetof(FArtifactSettings, ClientSecret) == 0x000020, "Member 'FArtifactSettings::ClientSecret' has a wrong offset!");
static_assert(offsetof(FArtifactSettings, ProductId) == 0x000030, "Member 'FArtifactSettings::ProductId' has a wrong offset!");
static_assert(offsetof(FArtifactSettings, SandboxId) == 0x000040, "Member 'FArtifactSettings::SandboxId' has a wrong offset!");
static_assert(offsetof(FArtifactSettings, DeploymentId) == 0x000050, "Member 'FArtifactSettings::DeploymentId' has a wrong offset!");
static_assert(offsetof(FArtifactSettings, EncryptionKey) == 0x000060, "Member 'FArtifactSettings::EncryptionKey' has a wrong offset!");

}
