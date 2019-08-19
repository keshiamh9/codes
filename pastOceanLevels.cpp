/* Programmer: Keshia Horton
Purpose: Calculating Past Ocean Levels
Date Modified: 4/13/19*/
#include <iostream>
using namespace std;

int main()
{
	/*Ocean levels rise 1.8mm per year
	over last 100 years. Write program
	that computes and displays # of
	centimeters and inches ocean levels
	rose during this time.
	1 mm = .1cm
	1cm = .03937 inches*/

	double cmAmount, inAmount, mmCentury;
	float mmAmount = 1.8;
	mmCentury = mmAmount * 100;
	cout << "Ocean levels rose a total of "
		<< mmCentury << " millimeters over the last 100 years.\n"
		<< endl;
	cmAmount = (mmAmount * .1) * 100;
	cout << "Ocean levels rose a total of " << cmAmount
		<< " centimeters over the last 100 years.\n"
		<< endl;
	inAmount = (cmAmount * .03937) * 100;
	cout << "Ocean levels rose a total of " << inAmount
		<< " inches over the last 100 years.\n"
		<< endl;

	system("pause");
	return 0;
}
