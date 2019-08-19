//Keshia Horton
//Purpose: Movie Theater Profit
//Date Modified: 4/18/19

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	/*A movie theater only keeps a percentage of
	the revenue earned from ticket sales.
	The remainder goes to the distibutor.
	Write a program that calculates a theater’s
	gross (after deductions) and net box office profit for a night.
	The program should ask for the name of
	the movie, and how many adult ($6) and child ($3)
	tickets were sold. Assume the theater keeps
	20 percent of the gross box office profit.*/

	double gross, net, percentage = 0.8,
		adultTickets, childTickets, totalAdultCost,
		totalChildCost;
	float distributerCut;
	string movie;

	cout << "Enter the movie title: " << endl;
	cin >> movie;
	cout << "Enter the amount of adult tickets sold for that movie " << endl;
	cin >> adultTickets;
	cout << "Enter the amount of child tickets sold for that movie " << endl;
	cin >> childTickets;
	totalChildCost = childTickets * 3;
	totalAdultCost = adultTickets * 6;
	gross = totalChildCost + totalAdultCost;
	distributerCut = gross * percentage;
	net = gross - distributerCut;

	cout << fixed << showpoint << setprecision(1);
	cout << "Movie Title: " << right << setw(22) << movie << endl;
	cout << "Adult Tickets Sold: " << right << setw(15) << adultTickets << endl;
	cout << "Child Tickets Sold: " << right << setw(15) << childTickets << endl;
	cout << fixed << setprecision(2);
	cout << "Gross Box Office Profit: " << right << setw(5) << "$" << gross << endl;
	cout << fixed << setprecision(2) << right << setw(4);
	cout << "Amount Paid to Distributor: " << right << setw(2) << "-$" << distributerCut << endl;
	cout << fixed << setprecision(2);
	cout << "Net Box Office Profit:" << right << setw(9) << "$" << net << endl;

	system("pause");
	return 0;
}
