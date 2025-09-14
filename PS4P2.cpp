#include <iostream>
using namespace std;
int main() {
	float qty, price, extendedprice;
	char item;
	cout << "Enter item A or B: ";
	cin >> item;
	if (item == 'A') {
		price = 10.00;
	}
	else if (item == 'B') {
		price = 20.00;
	}
	else {
	cout << "Invalid item" << endl;
		return 1;
		}
	cout << "Enter the quantity of items: ";
	cin >> qty;
	extendedprice = qty * price;
	cout << "The extended price is: " << extendedprice << endl;
	cout << "Item: " << item << endl;
	cout << "Quantity: " << qty << endl;
	return 0;
}