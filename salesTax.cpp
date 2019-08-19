/* Programmer: Keshia Horton
Purpose: Calculating Sales Tax
Date Modified: 4/15/19*/
#include <iostream>
using namespace std;

int main()
{
	/*Compute total sales tax on a $52.00 purchase.
	State tax is 4% and county is 2%.
	Display purchase price, state,
	county, and total tax amounts.*/

	double purchase0 = 52.00, salesTax = .04,
		countyTax = .02, tax1, tax2, purchase1,
		purchase2, purchase3;


	cout << "The purchase before tax totals $"
		<< purchase0 << endl;

	tax1 = purchase0 * salesTax;
	purchase1 = tax1 + purchase0;

	cout << "The purchase with sales tax totals $"
		<< purchase1 << endl;

	tax2 = purchase0 * countyTax;
	purchase2 = tax2 + purchase0;

	cout << "The purchase with county tax totals $"
		<< purchase2 << endl;

	purchase3 = purchase0 + tax1 + tax2;

	cout << "The purchase with both tax totals $"
		<< purchase3 << endl;

	system("pause");
	return 0;
}
