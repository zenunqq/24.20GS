#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FXpEverywhereNotificationWidgetClass final
{
public:
	TSubclassOf<class UFortNotificationEntry>     NotificationWidgetClass;
	int32                                         InitialPoolSize;
	bool                                          bCanIncreasePoolSizeAtRunTime;
	uint8                                         Pad_D[0x3];
	TArray<class UFortNotificationEntry*>         WidgetPool;
};
static_assert(alignof(FXpEverywhereNotificationWidgetClass) == 0x000008, "Wrong alignment on FXpEverywhereNotificationWidgetClass");
static_assert(sizeof(FXpEverywhereNotificationWidgetClass) == 0x000020, "Wrong size on FXpEverywhereNotificationWidgetClass");
static_assert(offsetof(FXpEverywhereNotificationWidgetClass, NotificationWidgetClass) == 0x000000, "Member 'FXpEverywhereNotificationWidgetClass::NotificationWidgetClass' has a wrong offset!");
static_assert(offsetof(FXpEverywhereNotificationWidgetClass, InitialPoolSize) == 0x000008, "Member 'FXpEverywhereNotificationWidgetClass::InitialPoolSize' has a wrong offset!");
static_assert(offsetof(FXpEverywhereNotificationWidgetClass, bCanIncreasePoolSizeAtRunTime) == 0x00000C, "Member 'FXpEverywhereNotificationWidgetClass::bCanIncreasePoolSizeAtRunTime' has a wrong offset!");
static_assert(offsetof(FXpEverywhereNotificationWidgetClass, WidgetPool) == 0x000010, "Member 'FXpEverywhereNotificationWidgetClass::WidgetPool' has a wrong offset!");

}
