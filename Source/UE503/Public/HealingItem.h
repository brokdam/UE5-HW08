//HealingItem.h

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "HealingItem.generated.h"

UCLASS()
class UE503_API AHealingItem : public ABaseItem
{
	GENERATED_BODY()

public:
	AHealingItem();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 HealAmount;

	virtual void ActivateItem(AActor* Activator) override;
};
