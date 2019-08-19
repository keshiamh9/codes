/* Programmer: Keshia Horton
Purpose: Miles per Gallon
Date Modified: 4/15/19*/
#include <iostream>
using namespace std;

int main()
{
	/*A car holds 16 gal/gas and can go
	350 miles before refueling. Calculate
	the # of miles per gallon*/

	double gallonsOfGas = 16,
		milesDriven = 350, milesPerGal;

	milesPerGal = milesDriven / gallonsOfGas;

	cout << "This car gets " << milesPerGal
		<< " miles per gallon" << endl;

	system("pause");
	return 0;
}
