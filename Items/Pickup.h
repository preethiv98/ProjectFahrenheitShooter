// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

class UItem;

UCLASS()
class PROJECTFAHRENHEIT_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TSubclassOf<UItem> Item;


	UItem* item1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		FRotator RotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		UStaticMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		float Speed;

	UPROPERTY(EditAnywhere)
		UBoxComponent* BoxCollider;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		class UItem* GetItem();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;



public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
