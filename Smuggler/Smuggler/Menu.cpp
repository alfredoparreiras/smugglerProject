#include"Menu.h"
#include<iomanip>



Menu::Menu(string userName, double userMoney, City one, City two, City three, City four, City five)
{
	this->userName = userName; 
	this->userMoney = userMoney; 
	
	cityIndex = 0;
	inventoryIndex = 0; 
	myCities.push_back(one);
	myCities.push_back(two);
	myCities.push_back(three);
	myCities.push_back(four);
	myCities.push_back(five);

}




int Menu::getCityIndex() const
{
	return cityIndex;
}

double Menu::getUserMoney() const
{
	return userMoney;
}

void Menu::showMenu()
{
	int selection;
	do {
		cout << "\n--- SMUGGLER GAME ---\n";
		cout << endl << endl;
		cout << "1) See the current City\n";
		cout << "2) Travel to a City\n";
		cout << "3) Display Money\n";
		cout << "4) Show Inventory\n";
		cout << "5) Buy Item\n";
		cout << "6) Sell Item\n";
		cout << ") Exit\n";

		cout << "Select an Option : ";
		cin >> selection;

		switch (selection)
		{
		case 1:
		{
			myCities[cityIndex].displayCityName();
			break;
		}
		case 2:
			cout << "\nWhat City do you want to travel to? ";
			cout << "\n0) Montreal" << "\n1) New Work" << "\n2) Ottawa" << "\n3) Miami" << "\n4) Sao Paulo\n";
			cin >> cityIndex;
			cout << "You sucessufully traveled to " << myCities[cityIndex].getCityName() << "." << endl;
			break;
		case 3:
			displayUserMoney();
			break;
		case 4:
			displayInventory();
			system("pause");
			break;
		case 5:
			userInventory[inventoryIndex] = myCities[cityIndex].buyItem();
			userMoney -= userInventory[inventoryIndex].getItemPrice();
			inventoryIndex++;
			break;
		case 6:
			checkInventory();

		default:
			break;
		}

	} while (selection != 7);

}

void Menu::displayUserMoney()
{
	cout << "\nYour current balance is $" << fixed << setprecision(2) <<getUserMoney() << endl; 
}

void Menu::displayInventory()
{
		cout << "--- INVENTORY --\n";
		cout << "Item 1\n";
		userInventory[0].displayItem();
		cout << "Item 2\n";
		userInventory[1].displayItem();
		cout << "Item 3\n";
		userInventory[2].displayItem();
		cout << "Item 4\n";
		userInventory[3].displayItem();
		cout << "Item 5\n";
		userInventory[4].displayItem();
}

void Menu::checkInventory()
{
	bool flag{ false };
	Item temp = myCities[cityIndex].sellItem();
	for (int i{ 0 }; i < 5; i++) {
		if (userInventory[i].getItemName() == temp.getItemName()) {
			userInventory[i].setIsAvaiable(false);
			userMoney += userInventory[i].getItemPrice();
			flag = true;
			
		}
	}
	if (!flag) {
		cout << "You can't sell this item.";
	}

}
