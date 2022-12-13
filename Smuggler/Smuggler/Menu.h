#pragma once
#include"City.h"
#include"Item.h"
#include<iostream>
#include<vector>
using namespace std; 

class Menu : public City, public Item {
public: 
	string userName; 
	double money; 
	vector<City> myCities;
	vector<Item> myItems;
	

public: 
	//Constructors
	Menu(string, double);

	//Getters and Setters
	string getUserName() const; 
	double getMoney() const; 
	void getItems(Item&) const; 

	//Methods 
	void showMenu(); 
	void displayCityName(); 
	void sellingItems(Item); 
	void buyingItems(); 
	void displayMoney(); 
	City createCity(string,string);
	void addItem(Item);
	void printItem();

};