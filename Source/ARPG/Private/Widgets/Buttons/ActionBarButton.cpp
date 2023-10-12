// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Buttons/ActionBarButton.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"

void UActionBarButton::NativePreConstruct()
{
	Super::NativePreConstruct();

	Img->SetBrushResourceObject(Icon);
	Text->SetText(KeybindText);
}