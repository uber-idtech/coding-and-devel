/*--------------------------------
/
/	This include "Header.h"
/	includes iosteam, string
/	and also using namespace std
/
----------------------------------*/
#include "Header.h"

/*-----------------------------------
/
/	declare your character variables
/	This is outside of the main
/	function so that other methods
/	will be able to read these
/	variables, as well!
/
/-----------------------------------*/
string characterName;
string userResponse;
int memeType;


void runAway()
{
	cout << "You're in the run away function." << endl;
}

void hide()
{
	cout << "You're in the hide function." << endl;
}

void beginStory() 
{
	cout << "Okay, what kind of meme are we on the lookout for?" << endl;
	cout << "\t1) option1 \n\t2) option2 \n\t3) option3" << endl;
	cin >> memeType;

	switch (memeType)
	{
	case 1:
		cout << "do stuff for option 1" << endl;
		cout << "do you 1) run or 2) hide?" << endl;
		cin >> userResponse;
		if (userResponse == "run")
		{
			runAway();
		}
		else if (userResponse == "hide")
		{
			hide();
		}
		break;
	case 2:
		cout << "option 2 stuff" << endl;
		break;
	case 3:
		cout << "option 3 stuff" << endl;
		break;
	}
}

// main method
int main()
{
	cout << "Type in your name: ";
	cin >> characterName;
	cout << "Well, " << characterName << ", today is your lucky day." << endl;
	cout << "You will be working alongside the Spicy Memelord on his adventure to find the dankest of memes." << endl;
	cout << "Are you ready? ";
	cin >> userResponse;

	if (userResponse == "yes")
	{
		cout << "Ok, you ai'ight." << endl;
		beginStory();
	}
	else if (userResponse == "no")
	{
		cout << "Don't be such a fool." << endl;
		beginStory();	// start story anyways at the beginStory function
	}

} // end main method