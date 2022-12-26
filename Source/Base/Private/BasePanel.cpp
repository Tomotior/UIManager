// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePanel.h"

void UBasePanel::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("UBasePanel::Init"));
}

void UBasePanel::OnShow()
{
	UE_LOG(LogTemp, Warning, TEXT("OnShow"));
}

void UBasePanel::OnHide()
{
	UE_LOG(LogTemp, Warning, TEXT("OnHide"));
}

void UBasePanel::OnDestory()
{
	UE_LOG(LogTemp, Warning, TEXT("OnDestory"));
}