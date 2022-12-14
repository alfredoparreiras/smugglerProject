#pragma once
#include"City.h"
#include"Item.h"
#include<iostream>
#include<vector>
using namespace std; 

class Menu : public City, public Item {
private: 
	string userName; 
	double userMoney; 
	vector<City> myCities; 
	int cityIndex; 
	Item userInventory[5];
	int inventoryIndex; 

public: 
	
	// Constructors
	Menu(string, double,City, City, City, City, City);

	// Getters and Setters
	int getCityIndex() const;
	double getUserMoney() const; 
	
	// Methods
	void showMenu();
	void displayUserMoney();
	void displayInventory();
	void checkInventory();
};