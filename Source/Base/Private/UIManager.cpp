// Fill out your copyright notice in the Description page of Project Settings.


#include "UIManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "Blueprint/WidgetTree.h"
#include "Engine/World.h"
#include "Engine.h"
#include "GameFramework/PlayerController.h"


UUIManager* UUIManager::Instace = nullptr;//单例模式
//初始化
void UUIManager::Initaialize()
{
	uiPanelPath = NewObject<UUIPanelPath>();
	
	
	
}
UUIManager::UUIManager()
{
	
	
}

UUIManager::~UUIManager()
{
	Instace = nullptr;
	uiPanelPath = nullptr;
	
}
TSubclassOf<UBasePanel> UUIManager::LoadPanel(UIPanelType panelType)
{
	TSubclassOf<UBasePanel> panel = nullptr;
	//
	FString tmpStr = uiPanelPath->GetUIPathMap()[panelType];
	UE_LOG(LogTemp, Warning, TEXT("path::%s"), *tmpStr);
	TSubclassOf<UBasePanel>basePanel= LoadClass<UBasePanel>(this, *tmpStr);
	//UClass* basePanel = LoadClass<UBasePanel>(this, *tmpStr);
	
	if (basePanel)
	{
		return basePanel;
	}
	UE_LOG(LogTemp, Error, TEXT("panel is None::%d"),panel);
	
	return panel;
}

//void UUIManager::ShowPanel(UIPanelType paneltype, UILayerType layerType)
//{
//
//}
//
//void UUIManager::HidePanel(UIPanelType paneltype)
//{
//
//}
//
//void UUIManager::RemovePanel(UIPanelType paneltype)
//{
//
//}
