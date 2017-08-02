/*--------------------------------
/
/	This include "Header.h"
/	includes iosteam, string
/	and also using namespace std
/
----------------------------------*/
#include "Header.h"

// main method for your text adventure
int main() {
	/*---------------------------
	/	variable declarations
	---------------------------*/
	int customers;			// holds how many customers
	int numCoke = 0;			// holds how many cokes there are in one order
	int numSprite = 0;			// holds how many sprites there are in one order
	int numLemonade = 0;		// holds how many lemonades there are in one order
	int numWater = 0;			// holds how many waters there are in one order
	string drinkChoice;

	cout << "Welcome to Uber's Eatery! How many people are dining in today?" << endl;
	cin >> customers;

	if (customers > 10) {
		cout << "Uber's Eatery can't handle that many customers at once. BYEEEE." << endl;
	} // end if statement - if there are more than 10 customers, there's too many people.
	else if (customers == 0) {
		cout << "Why are you here if you don't want to dine in?" << endl;
		return 0;	// exit the program
	} // end else if statement - if there are 0 customers, why are you here?
	else {
		cout << "Please follow me to be seated!" << endl;
		std::chrono::seconds dura(5);
		std::this_thread::sleep_for(dura);	// wait for 5 seconds
		cout << "\n" << endl;				// this just adds a new line
		cout << "What would we all like to drink today?" << endl;
		cout << "We offer coke, sprite, lemonade, and water!\n" << endl;

		for (int i = 0; (i < customers); i++) {
			cout << "You are at drink #" << (i + 1) << ": ";
			cin >> drinkChoice;

			if (drinkChoice == "coke") {
				numCoke += 1;
			}
			else if (drinkChoice == "sprite") {
				numSprite += 1;
			}
			else if (drinkChoice == "lemonade") {
				numLemonade += 1;
			}
			else {
				numWater += 1;
			}
		} // end for loop- for every customer, they have to order a drink

		cout << "\nYou ordered...\n\t" << numCoke << " coke(s)\n\t" << numSprite << " sprite(s)\n\t" << numLemonade << " lemonade(s)\n\t" << numWater << " water(s)\n Is this correct? y/n";
	} // end else statement (else there are customers)
} // end main function