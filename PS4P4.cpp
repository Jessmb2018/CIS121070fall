#include <iostream>
using namespace std;
int main() {
	string name;
	float cost, warranty;
	cout << "Enter the name of the item: ";
	cin >> name;
	cout << "Enter the cost of the item: ";
	cin >> cost;

	if (cost > 1000) {
		warranty = cost * .10;
	}
	else{
		warranty = cost * .05;
	}
	cout << "Item: " << name << endl;
	cout << "Cost: " << cost << endl;
	cout << "The warranty cost is: " << warranty << endl;
	cout << "The total cost is: " << cost + warranty << endl;

	return 0;
}