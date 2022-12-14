#include "City.h"

City::City()
{
}

City::City(string cityName, Item one, Item two, Item three, Item four, Item five)
{
	this->cityName = cityName;
	myItems.push_back(one);
	myItems.push_back(two);
	myItems.push_back(three);
	myItems.push_back(four);
	myItems.push_back(five);



}

string City::getCityName() const
{
	return cityName;
}

void City::displayCityName() const
{
	cout << "You're at " << getCityName() << ".\n";
}


void City::addingItem(Item item)
{
	myItems.push_back(item);
}

void City::printTemplate()
{
	cout << "--- INVENTORY --\n";
	cout << "Item 1\n";
	this->myItems[0].displayItem();
	cout << "Item 2\n";
	this->myItems[1].displayItem();
	cout << "Item 3\n";
	this->myItems[2].displayItem();
	cout << "Item 4\n";
	this->myItems[3].displayItem();
	cout << "Item 5\n";
	this->myItems[4].displayItem();

}

Item City::buyItem()
{
	int userChoice; 
	cout << "What item do you want to buy ?\n" << 
		"0) Knife\n" <<
		"1) Bike\n" << 
		"2) Gun\n" << 
		"3) Medicine\n" << 
		"4) Dog\n";
	cin >> userChoice;
	this->myItems[userChoice].setIsAvaiable(true);
	return this->myItems[userChoice];

}

Item City::sellItem()
{
	int userChoice;
	cout << "What item do you want to buy ?\n" <<
		"0) Knife\n" <<
		"1) Bike\n" <<
		"2) Gun\n" <<
		"3) Medicine\n" <<
		"4) Dog\n";
	cin >> userChoice;
	this->myItems[userChoice].setIsAvaiable(true);
	return this->myItems[userChoice];

}
