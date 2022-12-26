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
	UUIPanelPath* uiPanelPath;//UI路径表获取
	
	

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
	/// 初始化
	/// </summary>
	void Initaialize();
	/// <summary>
	/// LoadUI页面类
	/// </summary>
	/// <param name="panelType"></param>
	/// <returns></returns>
	TSubclassOf<UBasePanel> LoadPanel(UIPanelType panelType);
	
	//////显示一个Panel,到哪个层级
	//void ShowPanel(UIPanelType paneltype, UILayerType layerType);
	//////隐藏Panel
	//void HidePanel(UIPanelType paneltype);
	//////移除Panel
	//void RemovePanel(UIPanelType paneltype);
public:
	UUIManager();
	~UUIManager();
private:
	
	
};
