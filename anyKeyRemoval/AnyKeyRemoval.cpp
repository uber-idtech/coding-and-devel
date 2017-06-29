#include "main.h"

// this stands for "Console Input Output Header File"
// it manages input and output on a console based application.
// the getch() function uses this header file
#include <conio.h> 

using namespace std;

int main()
{
	cout << "This is the beginning of the story." << endl;
	
	// will prompt user to press any key to continue
	system("pause");

	cout << "more fun story time stuff" << endl;
	
	// press any key without prompting the user
	getch();	
	cout << "and again" << endl;
	getch();
	cout << "and for good measure, another line without having 'Please press any key to continue. . .'" << endl;
}