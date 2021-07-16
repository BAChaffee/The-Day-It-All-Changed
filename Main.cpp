//This allows me to do input and output
#include <iostream>
//Includes header to Player Info cpp file.
#include "Player Info.h"
//Includes header to Scenarios cpp file.
#include "Scenarios.h"
//Includes header to Intro cpp file.
#include "IntroDirections.h"
//So I don't have to type std:: on every line.
using namespace std;
//Sets players starting ammo count.
int ammoCount = 25;
//Sets players starting health count.
int playerHealth = 100;
//Main program function
int main()
{
	//Object created to use Intro class
	IntroDirections objectIntroDirections; 
	//Object created to use Scenarios class
	Scenarios objectScenarios;
	//Object created to use Player Info class
	PlayerInfo objectPlayerInfo;
	//Calling the function to display intro
	
	objectIntroDirections.DisplayIntro();
	//Game
	bool playAgain = false;
	//Start of game loop
	do {
		//Create local variable to hold user name
		string userName;
		//Assigns userName to GetUserName.
		userName = objectIntroDirections.GetUserName();
		//Welcome player and set up first choice.
		objectIntroDirections.WelcomeUser(userName);
		//Pause for players to read screen.
		cout << "\nWhen you are finished ";
		system("pause");
		//Displays players health for start of game.
		objectPlayerInfo.DisplayPlayerHealth();
		//Displays players ammo for start of game.
		objectPlayerInfo.DisplayPlayerAmmo();
		//Start Drive by scenario.
		int localResultAmmoCount = objectScenarios.DriveByScenario();
		//Adds or subtracts the resultant outcome from beginning ammo count.
		ammoCount = localResultAmmoCount + ammoCount;
		//Displays health count after first scenario.
		objectPlayerInfo.DisplayPlayerHealth();
		//Displays ammo count after first scenario. 
		objectPlayerInfo.DisplayPlayerAmmo();
		//System pause for player to take everything in.
		cout << "\nWhen you are finished ";
		system("pause");
		//Adds or subtracts resultant outcome from beginning life total.
		int localResultHealthCount = objectScenarios.SurvivorScenario();
		playerHealth = localResultHealthCount + playerHealth;
		//System pause for player to take everything in.
		cout << "\nWhen you are finished ";
		system("pause");
		//Asking if player would like to play again.
		cout << "\n\nThat was a blast right? How about another go 'round? ";
		//String for player response.
		string playerChoice;
		//Get player answer.
		getline(cin, playerChoice);
		if (playerChoice == "Y" or playerChoice == "y" or playerChoice == "Yes" or playerChoice == "yes")
		{
			playAgain = true;
		}
		else
		{
			playAgain = false;
		}
	} while (playAgain == true);

	//Ends program.
	return 0;
}