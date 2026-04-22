//MyCharacter.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class UE503_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();

protected:
UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
USpringArmComponent* SpringArmComp;

UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
UCameraComponent* Cameracomp;
};
