#include "Menu.h"
#include<iomanip>



Menu::Menu(string name, double money )
{
	userName = name; 
	this->money = money; 

}

string Menu::getUserName() const
{
	return string();
}

double Menu::getMoney() const
{
	return money;
}


void Menu::showMenu()
{
	int selection;
	do {
		cout << "--- SMUGGLER GAME ---\n";
		cout << endl << endl; 
		cout << "1) Create City\n";
		cout << "2) Travel to a City\n";
		cout << "3) Display Money\n";
		cout << "4) Display City Name\n";
		cout << "5) Sell Item\n";
		cout << "6) Buy Item\n";
		cout << "7) Buy Item\n";
		cout << "8) Exit\n";

		cout << "Select an Option : "; 
		cin >> selection; 
		
		switch (selection)
		{
		case 1:
		{
			cout << "Create a City Name.\n";
			string cityName;
			myCities.push_back(createCity(cityName, cityName)); 
			break;
		}
		case 2:
			cout << "Case 2\n";
			break;
		case 3:
			cout << "Case 3\n";
			break;
		case 4:
			displayCityName();
			break;
		case 5:
			cout << "Case 5\n";
			break;
		case 6:
			cout << "Case 6\n";
			break;
		case 7:
			
			break;
		default:
			break;
		}

	} while (selection != 8);

}



void Menu::displayCityName()
{
	
	cout << "Congratulations " << userName << "." << "\nActually you are at " << this->getCityName() << endl;
}

void Menu::displayMoney()
{
	cout << "Your balance is $ " << fixed << setprecision(2) << this->getMoney() << ".\n";
}

City Menu::createCity(string objectName,string city )
{
	City objectName(city); 


	return objectName;
}

//void Menu::sellingItems(Item item)
//{
//	
//	for (auto item : myitens) {
//		if (myitens->getItemName() == item.getItemName()) {
//			myitens->setItemStatus(false);
//			money += myitens->getItemPrice();
//		}
//	}
//
//}
//
//void Menu::buyingItems()
//{
//	for (auto item : myitens) {
//		if (myitens->getItemName() == item.getItemName()) {
//			myitens->setItemStatus(true);
//			money -= myitens->getItemPrice();
//		}
//	}
//}
