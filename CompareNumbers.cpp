//Keshia Horton
//8/16/19
//Ch 4 compare numbers
//MS Visual Studios

#include <iostream>;
using namespace std;

int one, a, b;

void methodOne(int choice);

int main()
{

	cout << "Press 1 to start" << endl;
	cin >> one;

	methodOne(one);

	system("pause");
	return 0;
}

void methodOne(int choice)
{
	cout << "Enter two whole numbers. ";
	cin >> a;
	cin >> b;

	if (a > b)
		cout << a << " is greater than " << b << endl;
	else if (a < b)
		cout << b << " is greater than " << a << endl;
	else if (a == b)
		cout << a << " is equal to " << b << endl;
}
