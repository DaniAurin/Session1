// Week6P1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int MAX_Charas = 30;
	char intialString[MAX_Charas];
	int i;


	cout << "Please enter your first name and middle name initial and then your surname (D K Ellis)" << endl;
	for (i = 0; i < 30; ++i)
	{
		cin >> intialString;
		cout << intialString << endl;
	}
}
