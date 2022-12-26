// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BasePanel.generated.h"

/**
 * 
 */
UCLASS()
class BASE_API UBasePanel : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		virtual void Init();//��ʼ��
	UFUNCTION(BlueprintCallable)
		virtual void OnShow();//��ʾʱ����
	UFUNCTION(BlueprintCallable)
		virtual void OnHide();//��������ʱ����
	UFUNCTION(BlueprintCallable)
		virtual void OnDestory();//����ɾ��ʱ����
};
