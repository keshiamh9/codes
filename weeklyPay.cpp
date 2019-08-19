//Programmer: Keshia Horton
//Purpose: Calculate weekly pay
//Date Modified: 4/3/19
//Compiler: MS VC++ Community

#include <iostream>
using namespace std;

int main()
{
	double hoursWorked, wage, pay;
	cout << "How many hours did you work? ";
	cin >> hoursWorked;
	cout << "What is your hourly wage?  ";
	cin >> wage;
	pay = hoursWorked * wage;
	cout << "Your weekly pay is $" << pay << endl;


	system("pause");
	return 0;

}
