// Fill out your copyright notice in the Description page of Project Settings.


#include "TipPanel.h"
#include "UIManager.h"
#include "Blueprint/UserWidget.h"
#include "Components/OverlaySlot.h"
#include "Blueprint/WidgetLayoutLibrary.h"




void UTipPanel::Init()//��һ��ʵ��ʱ����
{
	Super::Init();
	TipItemRes= LoadClass<UTipItem>(this, TEXT("WidgetBlueprint'/Game/Blueprints/Program/UI/TipPanel/TipItem.TipItem_C'"));
	UE_LOG(LogTemp, Warning, TEXT("TipItemRes::%d"), TipItemRes);
	TipItemArr = TArray<UTipItem*>();
	/// <summary>
	/// ������ʾ
	/// </summary>
	FString tipItem = FString(TEXT("This is my test FString."));
	FString tipItem1 = FString(TEXT("This is my tesww weewweewwe."));
	CreateItem(tipItem);
	CreateItem(tipItem1);
}
/// <summary>
/// ����Item
/// </summary>
void UTipPanel::CreateItem(FString tipItem)
{
	UTipItem* tmpItem = nullptr;
	tmpItem = GetHideItem();
	if (tmpItem == nullptr)////û�д���
	{
		tmpItem = CreateWidget<UTipItem>(GetWorld(), TipItemRes);
		TipItemArr.Add(tmpItem);
	}
	tmpItem->Init();
	TipSlot->AddChild(tmpItem);
	UOverlaySlot* slot = UWidgetLayoutLibrary::SlotAsOverlaySlot(TipSlot);
	slot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);//���ò���
	tmpItem->SetItemConnet(tipItem);
	
}
//��ȡû��ʹ�õ�Item
UTipItem* UTipPanel::GetHideItem()
{
	for (int i=0;i<TipItemArr.Num();i++)
	{
		if (TipItemArr[i]!=nullptr&&!TipItemArr[i]->IsVisuality)
		{
			return TipItemArr[i];
		}
	}

	return nullptr;
}


void UTipPanel::OnShow()//ʵ�������ٴδ򿪵���
{
	Super::OnShow();
}

void UTipPanel::OnHide()
{
	Super::OnHide();
}

void UTipPanel::OnDestory()
{
	Super::OnDestory();
}
