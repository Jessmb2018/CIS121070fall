#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float quantity, unitprice;
	cout << "Enter quantity: ";
	cin >> quantity;
	cout << "Enter unit price: ";
	cin >> unitprice;
	float extendedprice = quantity * unitprice;
	cout << "Extended price: " << extendedprice << endl;
	return 0;
}