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
	
	Inventory(itemNumber, )
	{
		itemNumber = n, quantity = i,
	}
	void setItemNumber(int n)
	{
		itemNumber= n;
	}
	void setQuantity(int i)
	{
		quantity = i;
	}
	void setCost(double c)
	{
		cost = c;
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
	cout << "Enter the item number. ";
	cin >> list.setItemNumber;
	cout << "Enter the quantity. ";
	cin >> list.setQuantity;
	cout << "Enter the cost. ";
	cin >> list.setCost;

	cout << "The total is $" << 
		system("pause");
	return 0;
	
}
