#include "City.h"

void City::setCityName(string cityName)
{
	this->cityName = cityName;

}

City::City()
{
}

City::City(string cityName)
{
	this->cityName = cityName;
	
}

string City::getCityName() const
{
	return cityName;
}

double City::displayItemsPriceToBuy(Item item)
{
	srand(time(NULL)); 
	double incrementor = rand() % 100; 
	double cityPrice = item.getItemPrice() + (item.getItemPrice() * incrementor/100);

	cout << item.getItemName() << ": $" << cityPrice; 

	return cityPrice;
}

double City::displayItemsPriceToSell(Item item)
{
	srand(time(NULL));
	double incrementor = rand() % 100;
	double cityPrice = item.getItemPrice() + (item.getItemPrice() * incrementor / 100);

	cout << item.getItemName() << ": $" << cityPrice;

	return cityPrice;
}
