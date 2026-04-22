//MyCharacter.cpp

#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = true;

	Cameracomp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Cameracomp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	Cameracomp->bUsePawnControlRotation = false;
}