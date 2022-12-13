#pragma once
#include<iostream>
using namespace std;

class Item {
private: 
	string itemName; 
    double itemPrice; 
	bool isAvaiable;

public: 

	//Constructor
	Item();
	Item(string, double);

	// Getters and Setters
	void setItemName(string);
	void setItemPrice(double);
	void setItemStatus(bool); 
	string getItemName() const; 
	double getItemPrice() const;
	bool getItemStatus() const;


	//Methods


};