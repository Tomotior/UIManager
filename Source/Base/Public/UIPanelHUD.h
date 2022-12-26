// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BasePanel.h"
#include "UIPanelPath.h"
#include "UIPanelHUD.generated.h"

/**
 * 
 */
UCLASS()
class BASE_API AUIPanelHUD : public AHUD
{
	GENERATED_BODY()
private:
	
	TMap<UIPanelType, UBasePanel*>AllPanelMap;//��������ʵ��������UIҳ��
public:
	/*static UUIManager* Instace;
	static UUIManager* Get()
	{
		if (Instace == nullptr)
		{
			Instace = NewObject<UUIManager>();
		}
		return Instace;
	}*/
	virtual void BeginPlay() override;
	
public:
	/// <summary>
	/// ��ʼ��
	/// </summary>
	void Initaialize();
	//��ʾһ��Panel,���ĸ��㼶
	void ShowPanel(UIPanelType paneltype, UILayerType layerType);
	//����Panel
	void HidePanel(UIPanelType paneltype);
	//ɾ��ҳ��ʱ
	void  DestoryPanel(UIPanelType paneltype);
};
