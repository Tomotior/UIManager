// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePanel.h"
#include "TipItem.generated.h"

/**
 * 
 */
UCLASS()
class BASE_API UTipItem : public UBasePanel
{
	GENERATED_BODY()
private:
	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* TipHorizontalBox;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TipText;
public:
	bool IsVisuality;//是否可视
private:
	void MoveTo();
	
public:
	/// <summary>
	/// 设置内容
	/// </summary>
	/// <param name="connet"></param>
	void SetItemConnet(FString connet);
	virtual void Init()override;
	virtual void OnShow() override;
	virtual void OnHide() override;
	virtual void OnDestory() override;
	
};
