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
	TSubclassOf<UTipItem> TipItemRes;//��ʾ��������
	TArray<UTipItem*> TipItemArr;//����������ʾ��Ʒ
	TQueue<UTipItem*>TipItemQueue;//��ǰ����ʹ�õ���Ʒ
	void CreateItem(FString tipItem);
	UTipItem* GetHideItem();//��ȡ���ص�Item

	
public:
	virtual void Init()override;
	virtual void OnShow() override;
	virtual void OnHide() override;
	virtual void OnDestory() override;
};
