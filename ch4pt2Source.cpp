/* Programmer: Keshia Horton
Purpose: Chapter 4 Homework
Date: 4/24/19
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int num = 0;

	do

	{
		cout << " Enter a valid/positive number. \n";

		cin >> num;

	} while (num <= 1 || num > 100);
	system("pause");
	return 0;
}