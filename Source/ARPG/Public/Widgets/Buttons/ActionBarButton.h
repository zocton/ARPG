// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActionBarButton.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UActionBarButton : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Action Bar", meta = (BindWidget))
	class UImage* Img;

	UPROPERTY(BlueprintReadOnly, Category = "Action Bar", meta = (BindWidget))
	class UTextBlock* Text;

	UPROPERTY(EditAnywhere, Category = "Action Bar")
	class UTexture2D* Icon;

	UPROPERTY(EditAnywhere, Category = "Action Bar")
	FText KeybindText;
public:
	virtual void NativePreConstruct() override;
};
