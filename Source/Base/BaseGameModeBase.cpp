// Copyright Epic Games, Inc. All Rights Reserved.


#include "BaseGameModeBase.h"
#include "GameFramework/HUD.h"
#include "UIPanelHUD.h"
ABaseGameModeBase::ABaseGameModeBase()
{
	
	static ConstructorHelpers::FClassFinder<AHUD> HUDClassFinder(TEXT("Class'/Script/Base.UIPanelHUD'"));
	if (HUDClassFinder.Succeeded())
	{
		this->HUDClass = HUDClassFinder.Class;
	}
	UUIManager::Get()->Initaialize();
}