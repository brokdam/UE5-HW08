//MyCharacter.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

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

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
float NormalSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
float SprintSpeedMultiplier;
UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
float SprintSpeed;

virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

UFUNCTION()
void Move(const FInputActionValue& value);
UFUNCTION()
void StartJump(const FInputActionValue& value);
UFUNCTION()
void StopJump(const FInputActionValue& value);
UFUNCTION()
void Look(const FInputActionValue& value);
UFUNCTION()
void StartSprint(const FInputActionValue& value);
UFUNCTION()
void StopSprint(const FInputActionValue& value);
};
