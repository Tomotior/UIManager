// Fill out your copyright notice in the Description page of Project Settings.


#include "UIPanelPath.h"



UUIPanelPath::UUIPanelPath()
{
	UIPathMap = TMap<UIPanelType, FString>();
	MainPanel = "WidgetBlueprint'/Game/Blueprints/Program/UI/MainPanel/MainPanel.MainPanel_C'";
	SetUIPathMap(UIPanelType::MainPanel, MainPanel);//����MainPanel����·��
	TipPanel = "WidgetBlueprint'/Game/Blueprints/Program/UI/TipPanel/TipPanel.TipPanel_C'";
	SetUIPathMap(UIPanelType::TipPanel, TipPanel);//����TipPanel����·��
	
	

}

UUIPanelPath::~UUIPanelPath()
{

}