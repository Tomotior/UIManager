// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIPanelPath.h"
#include "BasePanel.h"
#include "MainPanel.h"
#include "UIPanelHUD.h"
#include "UIManager.generated.h"


/**
 * 
 */
UCLASS()
class BASE_API UUIManager : public UObject
{
	GENERATED_BODY()
private:
	static UUIManager* Instace;
	UUIPanelPath* uiPanelPath;//UI·�����ȡ
	
	

public:
	
	static UUIManager* Get()
	{
		if (Instace == nullptr)
		{
			Instace = NewObject<UUIManager>();
		}
		return Instace;
	}
public:
	/// <summary>
	/// ��ʼ��
	/// </summary>
	void Initaialize();
	/// <summary>
	/// LoadUIҳ����
	/// </summary>
	/// <param name="panelType"></param>
	/// <returns></returns>
	TSubclassOf<UBasePanel> LoadPanel(UIPanelType panelType);
	
	//////��ʾһ��Panel,���ĸ��㼶
	//void ShowPanel(UIPanelType paneltype, UILayerType layerType);
	//////����Panel
	//void HidePanel(UIPanelType paneltype);
	//////�Ƴ�Panel
	//void RemovePanel(UIPanelType paneltype);
public:
	UUIManager();
	~UUIManager();
private:
	
	
};
