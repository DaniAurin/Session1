// Program17_LocalVariableAndCopies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int newC;

void SmallestNumber(int a, int b)
{
	if (a < b) 
	{
		cout << a << " Is smaller then " << b << endl;
	}
	else
	{
		cout << b << " Is smaller then " << a << endl;
	}
}

void MultiplyByTen(int c)
{
	float cMultiply;
	cMultiply = (c * 10);

}

void DivideByThree(float cMultiply)
{
	MultiplyByTen(cMultiply);
	newC = (cMultiply / 3);
	cout << "The answer is! " << newC << endl;
}

int main()
{
	int i = 0;
	int a, b, c;

		for (i - 0; i < 3; i++)
		{
			cout << "Enter number 1!" << endl;
			cin >> a;

			cout << "Enter number 2!" << endl;
			cin >> b;
			SmallestNumber(a, b);

		}
		for (i - 0; i < 3; i++)
		{
			cout << "Enter a number to be multipled by 10!" << endl;
			cin >> c;
			DivideByThree(newC);
		}

}



