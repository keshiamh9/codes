//Programmer: Keshia Horton
//Date: 6/14/19
//Purpose: Convert decimal to binary.
//Using: MS Visual Studios

#include <iostream>
#include <string>
using namespace std;

int choice, binary, decimal;

void decimalToBinary(int num);


int main()
{
	
	cout << "This program converts decimal numbers to binary numbers." << endl;
	cout << "To convert decimal to binary enter 1." << endl;
	
	
	cin >> choice;

	if (choice == 1)
		decimalToBinary(choice);
	else if (choice < 1 && choice < 1)
		cout << " Please enter 1.";
		cin >> choice;
	
	system("pause");
	return 0;
}

void decimalToBinary(int num)
{
	cout << "You chose decimal to binary." << endl;
	cout << "Enter a number." << endl;
	cin >> decimal;

	while (decimal > 0)
	{
	binary = decimal % 2;
	cout << "The number entered converts to " << binary;
	decimal /= 2;
	}
}

