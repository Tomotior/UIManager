// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePanel.h"
#include "TipItem.h"
#include "Components/Overlay.h"
#include "Components/NamedSlot.h"
#include "Containers/Queue.h"
#include "TipPanel.generated.h"

/**
 *
 */
UCLASS()
class BASE_API UTipPanel : public UBasePanel
{
	GENERATED_BODY()
private:
		UPROPERTY(meta=(BindWidget))
			class UOverlay* TipOverlay;
		UPROPERTY(meta = (BindWidget))
			class UNamedSlot* TipSlot;//Slot
	TSubclassOf<UTipItem> TipItemRes;//提示子物体类
	TArray<UTipItem*> TipItemArr;//管理所有提示物品
	TQueue<UTipItem*>TipItemQueue;//当前正在使用的物品
	void CreateItem(FString tipItem);
	UTipItem* GetHideItem();//获取隐藏的Item

	
public:
	virtual void Init()override;
	virtual void OnShow() override;
	virtual void OnHide() override;
	virtual void OnDestory() override;
};
