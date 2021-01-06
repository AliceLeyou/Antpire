#include "MenuHUD.h"
#include "Antpire.h"
#include "MenuWidget.h"


void AMenuHUD::BeginPlay()
{
	if (MenuWidgetClass != nullptr)
	{
		UMenuWidget* MenuWidget = CreateWidget<UMenuWidget>(GetWorld(), MenuWidgetClass);
	}
}