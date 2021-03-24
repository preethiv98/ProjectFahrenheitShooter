// Fill out your copyright notice in the Description page of Project Settings.

//#include "../ProjectFahrenheit/Public/Components/SHealthComponent.h"

#include "SCharacter.h"
#include "InventoryComponent.h"
#include "FoodItem.h"


void UFoodItem::Use(class ASCharacter* Character)
{
	if (Character)
	{
		//SHealthComponent* health = new<SHealthComponent>();
		Character->Health += HealthToHeal;
		if (OwningInventory)
		{
			OwningInventory->RemoveItem(this);
		}
	}
}
