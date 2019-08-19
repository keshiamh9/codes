//Keshia Horton
//Ch 8 Homework: Arrays
//6/4/19
//MS Visual Studio

#include <iostream>
#include <string>
using namespace std;
int const NUM_TYPES = 5;

void input(string[], int[]);
void display(string[], int[]);
void sumSales(string[], int[]);
void findHighSales(int[]);
void findLowSales(int[]);


int main()
{
	int highest, lowest;
	double total;
	string name[NUM_TYPES] = { "mild", "medium", "sweet", "hot", "zesty" };
	int sales[NUM_TYPES];

	//for (int i = 0; i < NUM_TYPES; i++)
	//{
	//	cout << "Enter the sales total for " << name[i] << " salsa: ";
	//	cin >> sales[i];
	//}

	input(name, sales);
	display(name, sales);
	sumSales(name, sales);
	findHighSales(sales);
	findLowSales(sales);

	system("pause");
	return 0;
}

void input(string a[], int b[])
{
	/*name[] = a;*/

	for (int i = 0; i < NUM_TYPES; i++)
	{
		cout << "Enter the amount of jars sold for " << a[i] << " salsa: ";
		cin >> b[i];
	}
}

void display(string a[], int b[])
{
	for (int i = 0; i < NUM_TYPES; i++)
	{
		cout << a[i] << "  " << b[i] << endl;
	}
}

void sumSales(string a[], int b[])
{
	double total = 0.0;
	for (int i = 0; i < NUM_TYPES; i++)
	{
		total += b[i];
	}
	cout << total << " is the total sales." << endl;
}

void findHighSales(int b[])
{
	int highest = b[0];
	for (int i = 0; i < NUM_TYPES; i++)
	{
		if (b[i] > highest)
		{
			highest = b[i];
		}
	}
	cout << highest << " is the highest amount sold." << endl;
}
void findLowSales(int b[])
{
	int lowest = b[0];
	for (int i = 0; i < NUM_TYPES; i++)
	{
		if (b[i] > lowest)
		{
			lowest = b[i];
		}
	}
	cout << lowest << " is the lowest amount sold." << endl;
}
