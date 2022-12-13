#pragma once
#include<iostream>
#include"City.h"
#include"Item.h"
#include<vector>
using namespace std; 

class Menu : public City, public Item {
private: 
	string userName; 
	double money; 
	vector<City> myCities;
	

public: 
	//Constructors
	Menu(string, double);

	//Getters and Setters
	string getUserName() const; 
	double getMoney() const; 
	void getItems() const; 

	//Methods 
	void showMenu(); 
	void displayCityName(); 
	void sellingItems(Item); 
	void buyingItems(); 
	void displayMoney(); 
	City createCity(string,string);

};