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
		virtual void Init();//初始化
	UFUNCTION(BlueprintCallable)
		virtual void OnShow();//显示时调用
	UFUNCTION(BlueprintCallable)
		virtual void OnHide();//界面隐藏时调用
	UFUNCTION(BlueprintCallable)
		virtual void OnDestory();//界面删除时调用
};
