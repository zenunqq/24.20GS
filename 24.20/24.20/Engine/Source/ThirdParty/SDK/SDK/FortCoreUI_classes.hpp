#pragma once

#include "Basic.hpp"

#include "ModelViewViewModel_classes.hpp"

namespace SDK
{

class UFortCTAButtonViewModel final : public UMVVMViewModelBase
{
public:
	class FText                                   Text;
	class FText                                   SecondaryText;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCTAButtonViewModel">();
	}
	static class UFortCTAButtonViewModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCTAButtonViewModel>();
	}
};
static_assert(alignof(UFortCTAButtonViewModel) == 0x000008, "Wrong alignment on UFortCTAButtonViewModel");
static_assert(sizeof(UFortCTAButtonViewModel) == 0x000098, "Wrong size on UFortCTAButtonViewModel");
static_assert(offsetof(UFortCTAButtonViewModel, Text) == 0x000068, "Member 'UFortCTAButtonViewModel::Text' has a wrong offset!");
static_assert(offsetof(UFortCTAButtonViewModel, SecondaryText) == 0x000080, "Member 'UFortCTAButtonViewModel::SecondaryText' has a wrong offset!");

}
