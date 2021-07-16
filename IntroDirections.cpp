//Allows me to print to screen.
#include <iostream>
//Includes header to this file.
#include "IntroDirections.h"

//Body of functions below main.
void IntroDirections::DisplayIntro()
{
	//Intro and basic game instructions.
	cout << "\t\t\t\t  WELCOME!!";
	cout << "\n\t\t\t\t     To";
	cout << "\n\t\t\t   The Day It All Changed";
	cout << "\n\nIn this game, you wake up on a Thursday morning. There is nothing special about this Thursday,";
	cout << "\nat least not yet. You will have to figure out what happened and how to fix it. When presented with";
	cout << "\na choice, simply type the word in captial letters that corresponds to the choice you wish to make.";
	cout << "\n\nEnjoy!!";
	return;
}

//Function for getting and storing players name.
string IntroDirections::GetUserName()
{
	cout << "\n\nWhat is your name? ";
	//Variable to hold player input.
	string userName;
	//Gets player input for next function.
	getline(cin, userName);
	//Returns the player name to main function for use in next function.
	return userName;
}

//Function for inserting userName into story opening.
void IntroDirections::WelcomeUser(string userName)
{
	//Story begins and sets up first story choice.
	cout << "\nWelcome " + userName;
	cout << "\nLast night when you went to bed, things seemed normal, but this morning upon waking, it's oddly quiet and ";
	cout << "\nyou realize very quickly that something is off...something is...wrong... You go outside and there's no";
	cout << "\none else around. Not a soul to be seen. It's quiet... Too quiet... What happened? Where is everyone?";
	cout << "\nYou go back in the house to the garage and go to a whiteboard on the wall to begin planning the things you";
	cout << "\nwill need to take with you since you don't know when you'll be back. This is the list you came up with.";
	cout << "\n\nBackpack";
	cout << "\nSleeping bag";
	cout << "\nClothes";
	cout << "\nFood";
	cout << "\nGun and ammo (25 rounds)\n\n";
}