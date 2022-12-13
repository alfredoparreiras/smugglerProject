#include"Menu.h"



int main() {
	
	Menu newGame("Alfredo", 2000);

	Item one("Knife", 200);
	Item two("Bike", 1200);
	Item three("Tires", 200);
	Item four("Medicine", 2200);
	Item five("BandAid", 200);

	newGame.addItem(one);
	newGame.addItem(two);
	newGame.addItem(three);
	newGame.addItem(four);
	newGame.addItem(five);



	
	newGame.showMenu();
}