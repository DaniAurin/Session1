// Week3Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

	
int main()

{
	int playerLife;
	int damageDealt;
	int i = 0;
	int NewplayerLife;

	playerLife = 100;
	cout << "You have a starting amount of " << playerLife << " player health!" << endl;


	for (int i = 0; i < 10; i++)
	{
		    if (playerLife >= 0)
			{
			  std::cout << "Question " << i << ": How much damage shall I deal?\n";
			  cin >> damageDealt;

			  NewplayerLife = playerLife - damageDealt;
			  playerLife = NewplayerLife;
			  cout << "There is " << NewplayerLife << " health left" << endl;
		    }

			      if(playerLife <= 0)
				  {
					  cout << "The player has died early :(" << endl;
					  return 1;
				  }
	}

	cout << "All questions asked. Congrats you survived! :)" << endl;
}


