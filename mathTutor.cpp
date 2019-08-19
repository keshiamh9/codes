//Keshia Horton
//Purpose: Challenge 16 math tutor
//Date Modified: 4/22/19

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	/*Math tutor*/

	srand(time(0));
	int n1 = 1 + rand() % 10;
	int n2 = 1 + rand() % 10;
	int answer, guess;
	cout << " " << n1 << endl;
	cout << "+" << n2 << endl;
	cout << "___" << endl;
	cin >> guess;
	answer = n1 + n2;

	if (answer == guess)
		cout << "You are correct!! \a\a\a\a\n";
	else if (!(answer == guess))
		cout << "You are wrong. Try again!\n";

	system("Pause");
	return 0;
}
