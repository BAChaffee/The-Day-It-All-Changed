//Allows me to print to screen.
#include <iostream>
//Includes the header to this file.
#include "Scenarios.h"
//First choice player is presented with.
int Scenarios::DriveByScenario()
{
	//Sets ammo count to zero for scenario to be changed to whatever player finds and returned to the main function.
	int ResultAmmoCount = 0;
	//Scenario Choice.
	cout << "\nIt's time to go. You grab the keys to your truck and head out the front door. You get in the truck and";
	cout << "\ngo to pull out of the driveway, and head into town. While on the way into town, you come across a house";
	cout << "\nwith strange stone figures on the porch.";
	cout << "\n\nStop and investigate stone figures? Y or N? ";
	//Variable to hold player choice.
	string localPlayerChoice;
	//Gets player choice for story options.
	getline(cin, localPlayerChoice);
	//First outcome based on player input.
	if (localPlayerChoice == "Y")
	{
		//Choice 1.
		cout << "\nYou pull into the driveway, get out, walk to the porch, and realize that the stone figures are people";
		cout << "\nBut something is wrong. The stones don't look as if they were intentionally placed here. You notice";
		cout << "\nbehind one of the figures. You reach for it to find it's a box of ammo. You gain 10 rounds.";
		cout << "\nYou go back to your truck, not sure how to take in what you just saw. You contine into town.\n\n";
		//Player found a box of ammo, this will get returned to the main function.
		ResultAmmoCount = 10;
	}
	//Second outcome based on player input.
	else if (localPlayerChoice == "N")
	{
		//Choice 2.
		cout << "\nYou decide it's best to continue heading to town to look for information.\n\n";
		ResultAmmoCount = 0;
	}
	//Third outcome based on player input.
	else
	{
		//Choice 3.
		cout << "\nYou were too busy not paying attention to the road and ran into a parked car. Now your truck doesn't work.";
		cout << "\nTime to start walking.\n\n";
		ResultAmmoCount = 0;
	}
	//Returns ammo count result of scenario to main function.
	return ResultAmmoCount;
}

//End of game cliff hanger.
int Scenarios::SurvivorScenario()
{
	//Sets health to zero for scenario. Any changes will be returned to the main function to be added or reduced from starting health.
	int ResultHealthCount = 0;
	//Scenario
	cout << "\nAs you come into town, you see someone!! You quickly head towards them only to realize that something is wrong.";
	cout << "\nThis person is obviously struggling. As you get closer you see that their legs are stuck in place and they are";
	cout << "\ntrying to escape. As you arrive, you hear them screaming IT'S COMING!!\n\n";
	cout << "\nTry to help? Y or N? ";
	//Variable to hold player choice
	string localPlayerChoice;
	//Gets player choice for story options.
	getline(cin, localPlayerChoice);
	//First outcome based on player choice.
	if (localPlayerChoice == "Y")
	{
		//Choice 1.
		cout << "\nFIND OUT WHAT HAPPENS NEXT TIME ON THE DAY IT ALL CHANGED!!\n\n";
		//Resultant health outcome variable.
		ResultHealthCount = 0;
	}
	//Second outcome based on player choice.
	else if (localPlayerChoice == "N")
	{
		//Choice 2.
		cout << "\nFIND OUT WHAT HAPPENS NEXT TIME ON THE DAY IT ALL CHANGED!!\n\n";
		//Resultant health outcome variable.
		ResultHealthCount = 0;
	}
	//Third outcome based on player choice.
	else
	{
		//Choice 3.
		cout << "\nFIND OUT WHAT HAPPENS NEXT TIME ON THE DAY IT ALL CHANGED!!\n\n";
		//Resultant health outcome variable.
		ResultHealthCount = 0;
	}
	//Scenario health outcome to be returned to main function to add or sub from starting health.
	return ResultHealthCount;
}