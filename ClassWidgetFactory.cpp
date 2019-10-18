//Keshia Horton
//10/17/19
//Purpose: Practice, self-study
//MS Visual Studio
//Prompt (from old textbook): Design a class for a widget manufacturing plant. 
//Assuming that 10 widgets may be produced each hour, the class object will 
//calculate how many days it will take to produce any number of widgets. 
//(The plant operates two 8-hour shifts per day.) Write a program that asks the 
//user for the number of widgets that have been ordered and then displays the 
//number of days it will take to produce them. Think about what values your 
//program should accept for the number of widgets ordered.

#include <iostream>
using namespace std;

class Widget
{
private: double number, days;

public:

	double calculate(double n)
	{
		number = n;
		return n / 160; // Two 8-hour shifts a day. 10 widgets made a day
	}

	void displayTotal()
	{
		cout << "It would take " << calculate(number) << " days to make " << number << " widgets." << endl;
	}
};

int main()
{
	double input;
	Widget customer;
	cout << "How many widgets do you need made? " << endl;
	cin >> input;
	customer.calculate(input);

	customer.displayTotal();


	system("pause");
	return 0;
}