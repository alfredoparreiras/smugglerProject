#include "Item.h"

Item::Item()
{
}

Item::Item(string itemName, double itemPrice) : itemName{itemName}, itemPrice{itemPrice}
{
	this->isAvaiable = true; 
}

void Item::setItemName(string itemName)
{
	this->itemName = itemName;
}

void Item::setItemPrice(double itemPrice)
{
	this->itemPrice = itemPrice; 
}

void Item::setItemStatus(bool status)
{
	this->isAvaiable = status;
}

string Item::getItemName() const
{
	return itemName;
}



double Item::getItemPrice() const
{
	return itemPrice;
}

bool Item::getItemStatus() const
{
	return isAvaiable;
}
