#pragma once
#include<iostream>
#include"Item.h"
using namespace std; 


class City : public Item{

private: 
	string cityName; 
	int incrementorOfPrices;

public: 
	
	//Constructor
	City(); 
	City(string);


	//Getters and Setters
	void setCityName(string);
	string getCityName() const; 

	// Methods
	double displayItemsPriceToBuy(Item);
	double displayItemsPriceToSell(Item);

};