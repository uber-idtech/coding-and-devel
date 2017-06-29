#include "main.h"
using namespace std;

int main()
{
	cout << "This is a tale is filled with mystery and deciet. Be observant, and make wise choices!" << endl;
	
	string name = "xx";
	string possesivePronoun = "him/her";
	string objectPronoun = "she/he";
	
	cout << "Your Name:";
	cin >> name;
	
	cout << "Your possesive pronoun (his/her):";
	cin >> possesivePronoun;
	
	cout << "Your object pronoun (she/he):";
	cin >> objectPronoun;
	
	// Part 1
	cout << "'Hello, " << name << ".'" << endl;
	cout << "'My name is Jeffrey Malum. I will be your servant during your stay at Le Pavillon de la Reine', said a young bellboy dressed in a crisp navy suit." << endl;
	cout << "Despite his amiable manner and collected appearance, Jeffrey's grey eyes were flat and bored." << endl;
	cout << "'Thank you' said " << name << ", trying to keep " <<possesivePronoun<< " voice aloof and haughty." << endl;
	system("pause");
	cout <<"Jeffrey led " << possesivePronoun << " up a flight of winding marble stairs to a long corridor decorated in dainty shades of lilac and rose." << endl;
	cout << "A large crystal chandelier sparkled from the golden, sloped ceiling. It was hard for " << name << " to keep " << possesivePronoun << "self from gawking at the splendor and blowing " << possesivePronoun << " cover." << endl;
	cout <<name<< " was a detective, working under false aliases, piecing together unreliable clues, and perpetually lying." << endl;
	cout << name << " was here to investigate the potential robbery of the Mona Lisa from the Louvre." << endl;
	cout << "It was suspected that the famous thief, known as Vale, was plotting to nab the painting tomorrow night." << endl;
	cout << "No one knew the true identity of Vale, but his work always carried some overly dramatic, glamorous flair." << endl;
	cout << "Vale tended to stray towards robbing extravagant goods, things like luxurious jewelry stores and historical artifacts." << endl;
	cout << "Although this was Vale's biggest scheme yet, it wasn't completely out of character. It was well known that Vale loved to cause a stir." << endl;
	cout << "The department had dumped the job of staking out the hotel to " << name << ", and since " <<objectPronoun<< " was new to the scene, " <<objectPronoun<< " knew this was a trial to see if " << objectPronoun << " could mantain her cover for the weekend." << endl;
	cout << "The police had narrowed down the locations where the theif could be staying. "<< name << " knew that this location was just one of many possibilities, making it unlikely that the thief would actually be here." << endl;
	cout << "However, " << objectPronoun << " couldn't shake off the feeling of uneasiness that weighted down her stomach."<< endl;
	system("pause");
	cout <<"Jeffrey led " << name << " into a luxurious hotel suite with velvet cushions, a plush carpet, and a golden chandelier hanging from an elaborate sloped ceiling." << endl;
	cout << "The granduer of the room took " << possesivePronoun << " aback for a moment. " << name << " struggled to keep her admiration bottled, and finally collected " << possesivePronoun << "self enough to say 'Thank you, Jeffrey' with as much haughtiness as " << objectPronoun << " could muster." << endl;
	cout <<name<< " felt like Jeffrey could see right through her act with his steel eyes. However, if he suspected anything, he kept his thoughts well hidden. Bowing, he retreated from the room." << endl;
	cout <<"As " << name << " slumped into the velvet sofa, exhausted from mantaining the persona of a pompous, rich royal, " << objectPronoun << " noticed that oddly enough, Jeffrey's footprints had left damp spots on the plush carpet." << endl;
	cout << "Suddenly, a loud cry for help sounded from the room next door, violently shaking the paintings on the wall above " << possesivePronoun << " bed." << endl;
	system("pause");
	cout << "Do you follow Jeffrey, or investigate the noise? Type 1 for Jeffrey, and 2 for the noise:" << endl;
	
	int userInput;
	cin >> userInput;
	
	// Part 2
	if (userInput == 1) {
	cout << name << " slid into the hallway, thankful for the thick carpeting that muffled " <<possesivePronoun<< " footsteps." << endl;
	cout << "The damp footprints led all the way down the hallway and took a sharp turn around the corner." << endl;
	cout << "Abruptly, " << name << " crashed into something metalllic. Looking up, " << objectPronoun << " saw that " << objectPronoun << " had walked right into the elevator." << endl;
	cout << name << " buried " << possesivePronoun << " head in " << possesivePronoun << " hands, trying to ignore the heavy throbbing of " << possesivePronoun << " skull." << endl;
	cout << "The footprints clearly showed that Jeffrey had entered the elevator." << endl;
	cout << "There was no way that " << name << " could know what floor he had gone to, and investigating the carpet on every floor of the hotel would be sure to provoke suspicion." << endl;
	cout << "However, this was the only real lead that " << objectPronoun << " had." << endl;
	cout << "If " << objectPronoun << " went back to the hotel room, it would be unlikely that " << objectPronoun << " would find any other information." << endl;
	int userInput2;
	system("pause");
	cout << "Enter 1 to go back to your room, or 2 to investigate the elevator to try to find Jeffrey." << endl;
	cin >> userInput2;
	
	// Part 3
	if (userInput2 == 1) {
		cout << "As " << name << " sulked back to " << possesivePronoun << " room, " << objectPronoun << " passed by a group of young girls, dressed in jeweled dresses and overly dramatic jewelry." << endl;
		cout << "The young girls fluttered and squawked like a muster of peacocks." << endl;
		cout << "'New money,' thought " << name << " disdainfully. The girls were all overly flashy and arrogant, clearly lacking experience, much less sophistication." << endl;
		cout << "As " << name << " passed by them, " << objectPronoun << " picked up on pieces of their conversation." << endl;
		cout << "'I'm simply ecstatic to attend the party tonight!' squealed one, wringing her gloved hands." << endl;
		cout << name << " had to work very hard to prevent " << possesivePronoun << "self from rolling " << possesivePronoun << " eyes." << endl;
		cout << "'I heard that all the richest men will be there,' swooned another." << endl;
		cout << "This caught " << name << "'s attention. The thief " << objectPronoun << " was looking for, Vale, was known for loving glamour, luxury, and parties." << endl;
		cout << "Surely if he was in this hotel, he would attend the party these girls were head over heels about." << endl;
		cout << "Absorbed in thought, " << name << " barely noticed the girls waltz away." << endl;
		cout << "When " << objectPronoun << " looked up, the group where chattering far ahead." << endl;
		cout << name << " sighed, wishing to be that carefree, and made to go back to the room when a sudden sharp flash of gold caught " << possesivePronoun << " eye." << endl;
		cout << "A thick, cream invitation embossed in gold lettering was lying on the carpet where the herd of girls had been gossiping moments before." << endl;
		cout << name << " picked up the invitiation and started to jog to over to girls when suddenly an idea popped into " << possesivePronoun << " head." << endl;
		cout << "If " << name << " had an invitation to the party, finding Vale had would become a whole lot easier." << endl;
		cout << "Maybe it was better not to return the invitation. Perhaps a small theft would be excusable if it could be used to prevent a huge one." << endl;
		cout << "It was all for the greater good...right?" << endl;
		system("pause");
		
		int userInput4;
		
		cout << "To return the invitation, enter 1. To keep the invation, enter 2." << endl;
		cin >> userInput4;
		
		if (userInput4 == 1) {
			cout << "hi" << endl;
		} else {
			cout << "bye" << endl;
		}
	} else {
		cout << "bye" << endl;
	}
	} else {
	cout << "bye" << endl;
	}
	} else{                                                                               
	cout <<name<< " raced into the hall as fast as " <<objectPronoun<< " could, running to the room next door and nimbly picking the lock with " <<possesivePronoun<< " silver lockpicking tools." << endl;
	cout << "Bursting into the room, " << name << " was confronted with a man dressed in a white rumpled tunic and khakis." << endl;
	cout <<name<< " noted that his simple attire was a huge contrast with the splendor of the hotel room." << endl;
	cout <<"The man had a sharp, inquisitive face, and narrow brown eyes." << endl;
	cout << "'Good to know that there is another detective in this dump', said the man.'My name is Howard. Nice to meet you.'" << endl;
	int userInput3;
	cout << "Enter 1 to deny that you are a detective in order to keep your cover, and 2 to admit that your indeed are a detective and request help." << endl;
		cin >> userInput3;
		if (userInput3 == 1) {
	cout << "'I don't know what you're talking about.' said " <<name<< " smoothly." " 'I only came because I heard a cry for help and wanted to be of assistance.'" << endl;
	cout << "'And would an ordinary civilian conveniently have lockpicking tools up " << possesivePronoun << " sleeve and the skills to open a bolted door in seconds?' said Howard, his eyes narrowing and his face growing smug." << endl;
	cout << "'Also, when hearing someone in danger, wouldn't most people call the police instead of knocking down the door to investigate for themselves?' continued Howard." << endl;
	cout << "'Let me guess...you're part of the police departement, aren't you?" << endl;
	cout << name << " was at loss for words, and at the very least slightly offended and embarassed." << endl;
	cout << "Howard looked smug, like a child that had just gotten a new toy." << endl;
	cout << "He took " << possesivePronoun << "'s silence as an invitation to continue. 'I knew that you weren't royalty as soon as I saw you, of course." << endl;
	cout << "You seemed so dazed by all the finery that there was no way you were who you claimed to be.'" << endl;
	cout << "'Then, when I saw you enter the room next to me, I couldn't believe my luck,' he continued. 'I set up this little trap to see if you were what I suspected you were.'"<< endl;
	cout << "'My name is " << name << ",' " << objectPronoun << " interrupted, if only to get Howard to stop rambling." << endl;
	cout << "'And since you already know who I am, I guess we have no choice but to work together.'" << endl;
	}
		else {
			cout << "'How did you know?' asked " << name << " sharply, feeling humiliated at having been discovered." << endl;
		cout << "'For starters, an ordinary civilian wouldn not conveniently have lockpicking tools up " << possesivePronoun << " sleeve and the skills to open a bolted door in seconds.' said Howard." << endl;
		cout << "'Also, when hearing a distress call, wouldn't most people call the police instead of knocking down the door to investigate for themselves?' he continued." << endl;
		cout << "'Let me guess...you're part of the police departement, aren't you?" << endl;
		cout << name << " was at loss for words, and at the very least slightly offended and embarassed." << endl; 
		cout << "Howard looked smug, like a child that had just gotten a new toy." << endl;
		cout << "He took " << possesivePronoun << " as an invitation to continue. 'I knew that you weren't royalty as soon as I saw you, of course." << endl;
		cout << "You seemed so dazed by all the finery that there was no way you were who you claimed to be.'" << endl;
		cout << name << " couldn't believe " << objectPronoun << " hadn't noticed Howard tailing" << possesivePronoun << endl;
		cout << "'Then, when I saw you enter the room next to me, I couldn't believe my luck,' he continued." << endl;
		cout << "'I set up this little trap to see if you were what I suspected you were, and you walked right into -" << endl;
		cout << "'My name is " << name << ",' " << objectPronoun << " interrupted, if only to get Howard to stop rambling." << endl;
		cout << "'And since you already know who I am, I guess we have no choice but to work together.'" << endl;
		}
		}
}
