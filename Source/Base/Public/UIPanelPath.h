// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "UIPanelPath.generated.h"
//UI 页面类型
UENUM(BlueprintType)
enum class UIPanelType :uint8
{
	MainPanel,//主面
	TipPanel,//提示页面
	MaxValue,
};

//UI 层级类型(表示UI显示层级)
UENUM(BlueprintType)
enum class UILayerType :uint8
{
	Top,
	One,
	Two,
	Three,
	Four,
	Bottom,
};

/**
 * 
 */
UCLASS(BlueprintType)
class BASE_API UUIPanelPath : public UObject
{
	GENERATED_BODY()
private:
	UPROPERTY()
		TMap<UIPanelType, FString> UIPathMap;
	

public:
	FString MainPanel;//主页面
	FString TipPanel;//提示页面
	/// <summary>
	/// 得到UI路径
	/// </summary>
	/// <returns></returns>
	TMap<UIPanelType, FString> GetUIPathMap()
	{
		return  UIPathMap;
	}
	/// <summary>
	/// 注册UI路径
	/// </summary>
	/// <param name="Key"></param>
	/// <param name="Value"></param>
	void SetUIPathMap(UIPanelType Key, FString Value)
	{
		UIPathMap.Add(Key, Value);
	}
public:
	
	UUIPanelPath();
	
	~UUIPanelPath();

};
