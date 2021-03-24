// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/BoxComponent.h"
#include "Pickup.h"


class UItem;
// Sets default values
APickup::APickup()
{

	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->SetupAttachment(RootComponent);



	RotationRate = FRotator(0.0f, 180.0f, 0.0f);

	Speed = 1.0f;


	BoxCollider->SetGenerateOverlapEvents(true);
	BoxCollider->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnOverlapBegin);
	BoxCollider->SetupAttachment(RootComponent);




}

//// Called when the game starts or when spawned
//void APickup::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}

void APickup::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		Destroy();
	}*/
}


class UItem* APickup::GetItem()
{
	if (Item)
	{
		item1 = NewObject<UItem>(this, Item);
	}
	return item1;
}

//// Called every frame
//void APickup::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
