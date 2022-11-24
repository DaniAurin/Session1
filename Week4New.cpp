// Week4New.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int playerHealth;
int enemyHealth;
bool playing = true;

void AttackChoice()
{
	int swordDamage = 300;
	int magicDamage = 650;
	int axeDamage = 450;
	int trollSword = 350;
	int trollMagic = 50;
	int trollAxe = 100;

	switch (swordDamage)
	{
	   case 1: 
	   {
		   enemyHealth - swordDamage;
		   playerHealth - trollSword;
		   cout << "You have hit the troll!" << endl;
		   cout << "Unfortunatley.. you have been hit for 350!" << endl;
		   if (playerHealth /enemyHealth < 0)
		   {
			   playerHealth = 0;
			   enemyHealth = 0;
		   }
		   cout << "Your current health is" << playerHealth << endl;
	   }

	   case 2:
	   {
		   enemyHealth - magicDamage;
		   playerHealth - trollMagic;
		   cout << "You have hit the troll!" << endl;
		   cout << "Unfortunatley.. you have been hit for 350!" << endl;
		   if (playerHealth /enemyHealth < 0)
		   {
			   playerHealth = 0;
			   enemyHealth = 0;
		   }
		   cout << "Your current health is" << playerHealth << endl;
	   }
	   case 3:
	   {
		   enemyHealth - axeDamage;
		   playerHealth - trollAxe;
		   cout << "You have hit the troll!" << endl;
		   cout << "Unfortunately you have been hit" << endl;
		   if (playerHealth / enemyHealth < 0)
		   {
			   playerHealth = 0;
			   enemyHealth = 0;
		   }
		   cout << "Your current health is" << playerHealth << endl;
	   }
	}
}void PlayState() 
{
	char playerChoice;

	if (enemyHealth <= 0)
	{
		cout << "You have killed the troll!" << endl;
		cout << "Would you like to play again? Y/N" << endl;
		cin >> playerChoice;
		if (playerChoice == 'Y') {
			enemyHealth = 2000;
			playerHealth = 1000;
			return;
		}
	}
}

int main()
{
	playerHealth = 1000;
	enemyHealth = 2000;
	
	AttackChoice();
	PlayState();
}
