// Fill out your copyright notice in the Description page of Project Settings.

#include "UIManager.h"
#include "UIPanelHUD.h"
#include "BasePanel.h"
#include "MainPanel.h"
//UUIManager* Instace = nullptr;
//UI��ʼ���
void AUIPanelHUD::BeginPlay()
{
	Initaialize();
}

//��ʼ��
void AUIPanelHUD::Initaialize()
{
	AllPanelMap = TMap<UIPanelType, UBasePanel*>();

	/// <summary>
	/// ����
	/// </summary>
	ShowPanel(UIPanelType::TipPanel, UILayerType::Top);
}

//��ʾҳ��
void AUIPanelHUD::ShowPanel(UIPanelType paneltype, UILayerType layerType)
{
	UBasePanel* tmpPanel = nullptr;
	if (AllPanelMap.Contains(paneltype))
	{
		tmpPanel = AllPanelMap[paneltype];
		tmpPanel->OnShow();
	}
	else
	{
		TSubclassOf<UBasePanel> basePanel = UUIManager::Get()->LoadPanel(paneltype);
	    tmpPanel = CreateWidget<UBasePanel>(GetWorld(), basePanel);
		int32 uiLayer = (int32)layerType;
		tmpPanel->AddToViewport(uiLayer);
		tmpPanel->Init();
	}
	    
}
//����ҳ��
void AUIPanelHUD::HidePanel(UIPanelType paneltype)
{
	UBasePanel* tmpPanel = nullptr;
	 if (AllPanelMap.Contains(paneltype))
	 {
		 tmpPanel= AllPanelMap[paneltype];
		 tmpPanel->OnHide();
		 return;
	 }
	 UE_LOG(LogTemp, Error, TEXT("%d is none"), paneltype);
}
//ɾ��ҳ��ʱ����
void AUIPanelHUD::DestoryPanel(UIPanelType paneltype)
{
	UBasePanel* tmpPanel = nullptr;
	if (AllPanelMap.Contains(paneltype))
	{
		tmpPanel = AllPanelMap[paneltype];
		tmpPanel->OnDestory();
		AllPanelMap.Remove(paneltype);
		tmpPanel->RemoveFromParent();
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("%d is none"), paneltype);
}


