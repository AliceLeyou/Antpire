#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"


UCLASS()
class ANTPIRE_API AMenuHUD : public AHUD
{
	GENERATED_BODY()

public:

protected:
	UPROPERTY(EditAnywhere, Category = "Widget Classes")
		TSubclassOf<class UMenuWidget> MenuWidgetClass;

	virtual void BeginPlay() override;

private:

};
