//Keshia Horton
//Purpose: Extra Credit
//Date: 6/1/19
//MS Visual Studio

#include <iostream>
#include<string>
#include <fstream>
using namespace std;

class Inventory
{
private:
	int itemNumber, quantity;
	double cost, totalcost;

public:
	Inventory() : itemNumber(0), quantity(0), cost(0), totalcost(0) {};

	Inventory(int n, int i, int c)
	{
		itemNumber = n;
		quantity = i;
		setCost(c);
		//cost = c;
		//totalcost = cost * quantity;
	}
	void setItemNumber(int n)
	{
		itemNumber = n;
	}
	void setQuantity(int i)
	{
		quantity = i;
	}
	void setCost(double c)
	{
		cost = c;
		totalcost = cost * quantity;
	}
	int getItemNumber()
	{
		return itemNumber;
	}
	int getQuantity()
	{
		return quantity;
	}
	double getCost()
	{
		return cost;
	}
	double getTotalCost()
	{
		return totalcost;
	}
};

int main()

{
	Inventory list;
	int item, quantity;
	double cost;
	cout << "Enter the item number. ";
	cin >> item;
	list.setItemNumber(item);
	cout << "Enter the quantity. ";
	cin >> quantity;
	list.setQuantity(quantity);
	cout << "Enter the cost. ";
	cin >> cost;
	list.setCost(cost);
	cout << "The total is $" << list.getTotalCost() << endl;
	system("pause");
	return 0;

}
