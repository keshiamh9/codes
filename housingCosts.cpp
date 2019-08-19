//Keshia Horton
//Purpose: Housing Costs
//Date Modified: 4/18/19

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*Write a program that asks the user to
	enter their monthly costs for each of the
	following housing related expenses: rent
	or mortgage payment utilities phones cable
	The program should then display the total
	monthly cost of these expenses, and the
	total annual cost of these expenses.*/

	double rent, utilities, phone, cable,
		monthlyTotal, yearlyTotal;
	cout << "Enter your monthly rent " << endl;
	cin >> rent;
	cout << "Enter your monthly utilities " << endl;
	cin >> utilities;
	cout << "Enter your monthly phone bill " << endl;
	cin >> phone;
	cout << "Enter your monthly cable cost " << endl;
	cin >> cable;
	monthlyTotal = rent + utilities + phone + cable;
	yearlyTotal = monthlyTotal * 12;
	cout << setw(15) << "Monthly Expenses:" << setw(30) << "Yearly Expenses:" << endl;
	cout << setw(10) << monthlyTotal << setw(30) << yearlyTotal << endl;

	system("pause");
	return 0;
}
