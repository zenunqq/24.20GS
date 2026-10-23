#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ModalDialogVariant_ShouldUseModalDialogTemplateWidgets final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ModalDialogVariant_ShouldUseModalDialogTemplateWidgets) == 0x000001, "Wrong alignment on ModalDialogVariant_ShouldUseModalDialogTemplateWidgets");
static_assert(sizeof(ModalDialogVariant_ShouldUseModalDialogTemplateWidgets) == 0x000001, "Wrong size on ModalDialogVariant_ShouldUseModalDialogTemplateWidgets");
static_assert(offsetof(ModalDialogVariant_ShouldUseModalDialogTemplateWidgets, ReturnValue) == 0x000000, "Member 'ModalDialogVariant_ShouldUseModalDialogTemplateWidgets::ReturnValue' has a wrong offset!");

struct ModalDialogVariant_HasResponseAnimation final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ModalDialogVariant_HasResponseAnimation) == 0x000001, "Wrong alignment on ModalDialogVariant_HasResponseAnimation");
static_assert(sizeof(ModalDialogVariant_HasResponseAnimation) == 0x000001, "Wrong size on ModalDialogVariant_HasResponseAnimation");
static_assert(offsetof(ModalDialogVariant_HasResponseAnimation, ReturnValue) == 0x000000, "Member 'ModalDialogVariant_HasResponseAnimation::ReturnValue' has a wrong offset!");

}
