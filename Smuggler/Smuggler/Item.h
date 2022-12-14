#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Item {
private: 
	string itemName; 
	double itemPrice; 
	bool isAvaiable;
	

public: 
	//Constructors
	Item(); 
	Item(string, double);

	// Getters and Setters

	string getItemName() const; 
	double getItemPrice() const; 
	bool getItemStatus() const; 

	void setIsAvaiable(bool status);

	// Methods
	void displayItem(); 



};