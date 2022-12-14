#include "Item.h"

Item::Item()
{
}

Item::Item(string itemName, double itemPrice)
{
	this->itemName = itemName; 
	this->itemPrice = itemPrice;
	this->isAvaiable = true;
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

void Item::setIsAvaiable(bool status)
{
	this->isAvaiable = status;
}

void Item::displayItem()
{
	cout << "\nItem Name: " << getItemName() <<
		"\nItem Price: $" << getItemPrice() <<
		"\nAvaiable : " << boolalpha << getItemStatus() << endl;

}


