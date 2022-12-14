#pragma once
#include<iostream>
#include"Item.h"
using namespace std; 


class City : public Item{
private: 
	string cityName; 
	vector<Item> myItems;
	
public: 
	City(); 
	City(string, Item, Item, Item, Item, Item);

	//Getters and Setters
	string getCityName() const; 

	//Method
	void displayCityName() const; 
	void addingItem(Item);
	void printTemplate(); 
	Item buyItem();
	Item sellItem();

};