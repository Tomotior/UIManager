// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "UIPanelPath.generated.h"
//UI ҳ������
UENUM(BlueprintType)
enum class UIPanelType :uint8
{
	MainPanel,//����
	TipPanel,//��ʾҳ��
	MaxValue,
};

//UI �㼶����(��ʾUI��ʾ�㼶)
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
	FString MainPanel;//��ҳ��
	FString TipPanel;//��ʾҳ��
	/// <summary>
	/// �õ�UI·��
	/// </summary>
	/// <returns></returns>
	TMap<UIPanelType, FString> GetUIPathMap()
	{
		return  UIPathMap;
	}
	/// <summary>
	/// ע��UI·��
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
