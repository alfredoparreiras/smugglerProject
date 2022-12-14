#include"Menu.h"



int main() {
	
	Item knife("Knife", 250);
	Item bike("Bike", 1250);
	Item Gun("Gun", 2250);
	Item Medicine("Medicine", 250);
	Item dog("Dog", 750);

	City Montreal("Montreal", knife, bike,Gun,Medicine, dog);
	City NY("New York", knife, bike, Gun, Medicine, dog);
	City Ottawa("Ottawa", knife, bike, Gun, Medicine, dog);
	City Miami("Miami", knife, bike, Gun, Medicine, dog);
	City SaoPaulo("Sao Paulo", knife, bike, Gun, Medicine, dog);

	


	Menu newGame("Alfredo", 2000, Montreal, NY, Ottawa, Miami, SaoPaulo);
	newGame.showMenu();

	

	


	
	
}