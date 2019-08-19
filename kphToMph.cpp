/* Programmer: Keshia Horton
Purpose: Ch 5 Homework | Challenge 5 | KPH to MPH
Date Modified: 5/5/19
Using: Visual Studios 2017*/

#include <iostream>
using namespace std;

int main()
{
	double mph;
	for (int kph = 40; kph <= 120; kph = kph + 5)
	{
		mph = kph * 0.6214;
		cout << "mph: " << mph << "\t" << "kph: " << kph << endl;

	}

	system("pause");
	return 0;
}
