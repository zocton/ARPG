// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActionBar.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UActionBar : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Action Bar", meta = (BindWidget))
	class UActionBarButton* QButton;

	UPROPERTY(BlueprintReadOnly, Category = "Action Bar", meta = (BindWidget))
	class UActionBarButton* WButton;

	UPROPERTY(BlueprintReadOnly, Category = "Action Bar", meta = (BindWidget))
	class UActionBarButton* EButton;

	UPROPERTY(BlueprintReadOnly, Category = "Action Bar", meta = (BindWidget))
	class UActionBarButton* RButton;
};
