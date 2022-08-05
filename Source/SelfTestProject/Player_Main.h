// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"

#include "Player_Main.generated.h"

UCLASS()
class SELFTESTPROJECT_API APlayer_Main : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayer_Main();
	void Movement(float delDist);
	//UStaticMeshComponent* mesh;
	


	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	UBoxComponent* collider;
	USceneComponent* root;

	UPROPERTY(EditAnywhere,Category="Player Properties")
	float moveSpeed = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
