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
	double time1, time2, time3;
	string name1, name2, name3;
	double min_time = 0;
	
	cout << "Enter the name of 3 runners.\n";
	cin >> name1, name2, name3;
	cout << "Enter the time of the 3 runners respectively.\n";
	cin >> time1, time2, time3;

	if (time1 <= 0 && time2 <= 0 && time3 <= 0)
	{
		cout << "Time ran has to be mroe than 0" << endl;
	}
	else if (time1 > time2 && time2 > time3)
	{
		cout << "1. " << name1 << endl;
		cout << "2. " << name2 << endl;
		cout << "3. " << name3 << endl;
	}
	else if (time1 > time3 && time3 > time2)
	{
		cout << "1. " << name1 << endl;
		cout << "2. " << name3 << endl;
		cout << "3. " << name2 << endl;
	}
	else if (time2 > time3 && time3 > time1)
	{
		cout << "1. " << name2 << endl;
		cout << "2. " << name3 << endl;
		cout << "3. " << name1 << endl;
	}
	else if (time2 > time1 && time1 > time3)
	{
		cout << "1. " << name2 << endl;
		cout << "2. " << name1 << endl;
		cout << "3. " << name3 << endl;
	}
	else if (time3 > time2 && time2 > time1)
	{
		cout << "1. " << name3 << endl;
		cout << "2. " << name2 << endl;
		cout << "3. " << name1 << endl;
	}
	else if (time3 > time1 && time1 > time2)
	{
		cout << "1. " << name3 << endl;
		cout << "2. " << name1 << endl;
		cout << "3. " << name2 << endl;
	}
	system("pause");
	return 0;
}