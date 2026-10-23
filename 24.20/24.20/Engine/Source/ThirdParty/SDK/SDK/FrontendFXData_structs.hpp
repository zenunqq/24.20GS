#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FFrontendFXData final
{
public:
	struct FTransform                             Location_9_AA325C52426E915ABCD8DCA54BBB349F;
	TSoftObjectPtr<class UNiagaraSystem>          NiagaraFX_8_127474054B0E4855A2B61394B5701C74;
};
static_assert(alignof(FFrontendFXData) == 0x000010, "Wrong alignment on FFrontendFXData");
static_assert(sizeof(FFrontendFXData) == 0x000090, "Wrong size on FFrontendFXData");
static_assert(offsetof(FFrontendFXData, Location_9_AA325C52426E915ABCD8DCA54BBB349F) == 0x000000, "Member 'FFrontendFXData::Location_9_AA325C52426E915ABCD8DCA54BBB349F' has a wrong offset!");
static_assert(offsetof(FFrontendFXData, NiagaraFX_8_127474054B0E4855A2B61394B5701C74) == 0x000060, "Member 'FFrontendFXData::NiagaraFX_8_127474054B0E4855A2B61394B5701C74' has a wrong offset!");

}
