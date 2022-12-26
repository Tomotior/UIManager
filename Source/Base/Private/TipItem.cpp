// Fill out your copyright notice in the Description page of Project Settings.


#include "TipItem.h"
#include "Kismet/KismetTextLibrary.h"
#include "Components/TextBlock.h"
#include "Components/OverlaySlot.h"
#include "Blueprint/WidgetLayoutLibrary.h"
//“∆∂Ø
void UTipItem::MoveTo()
{

}

/// <summary>
/// …Ë÷√ƒ⁄»›
/// </summary>
/// <param name="connet"></param>
void UTipItem::SetItemConnet(FString connet)
{
	UE_LOG(LogTemp, Warning, TEXT("path::%s"),*connet);
	TipText->SetText(UKismetTextLibrary::Conv_StringToText(connet));
	
}

void UTipItem::Init()
{
	Super::Init();
	IsVisuality = true;
}

void UTipItem::OnShow()
{
	Super::OnShow();
	IsVisuality = true;
}

void UTipItem::OnHide()
{
	Super::OnHide();
	IsVisuality = false;
}

void UTipItem::OnDestory()
{
	Super::OnDestory();
	TipText = nullptr;
	TipHorizontalBox = nullptr;
}
