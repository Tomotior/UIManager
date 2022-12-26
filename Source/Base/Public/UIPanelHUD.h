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
	
	TMap<UIPanelType, UBasePanel*>AllPanelMap;//保存所有实例出来的UI页面
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
	/// 初始化
	/// </summary>
	void Initaialize();
	//显示一个Panel,到哪个层级
	void ShowPanel(UIPanelType paneltype, UILayerType layerType);
	//隐藏Panel
	void HidePanel(UIPanelType paneltype);
	//删除页面时
	void  DestoryPanel(UIPanelType paneltype);
};
