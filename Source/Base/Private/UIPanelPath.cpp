// Fill out your copyright notice in the Description page of Project Settings.


#include "UIPanelPath.h"



UUIPanelPath::UUIPanelPath()
{
	UIPathMap = TMap<UIPanelType, FString>();
	MainPanel = "WidgetBlueprint'/Game/Blueprints/Program/UI/MainPanel/MainPanel.MainPanel_C'";
	SetUIPathMap(UIPanelType::MainPanel, MainPanel);//设置MainPanel加载路径
	TipPanel = "WidgetBlueprint'/Game/Blueprints/Program/UI/TipPanel/TipPanel.TipPanel_C'";
	SetUIPathMap(UIPanelType::TipPanel, TipPanel);//设置TipPanel加载路径
	
	

}

UUIPanelPath::~UUIPanelPath()
{

}