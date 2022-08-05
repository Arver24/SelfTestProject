// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Main.h"

// Sets default values
APlayer_Main::APlayer_Main()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerBoxCollision"));
	//mesh=FindComponentByClass<UStaticMeshComponent>();
	SetRootComponent(root);
	//collider->SetupAttachment(root);
	collider->SetRelativeScale3D(FVector(0.25));
}

// Called when the game starts or when spawned
void APlayer_Main::BeginPlay()
{
	Super::BeginPlay();
	
	
}
void APlayer_Main::Movement(float delDist) {
	FVector currPos = GetActorLocation();
	currPos.X += delDist*moveSpeed;
	SetActorLocation(currPos);
}

// Called every frame
void APlayer_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Main::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//const FName fwd = "MoveFwd";
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveFwd"),this,&APlayer_Main::Movement);

}

