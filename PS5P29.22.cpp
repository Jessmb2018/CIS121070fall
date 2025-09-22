#include <iostream>
using namespace std;
int main(){
	float lbs, totalprice, priceperpound;

	cout << "Enter the quantity of the item in pounds: ";
	cin >> lbs;
	
	if (lbs > 100) {
		priceperpound = .10;
	} else if (lbs >= 50) {
		priceperpound = .25;
	} else {
		priceperpound = .50;
	}

	totalprice = lbs * priceperpound;
	cout << "The total price is: $" << totalprice << endl;
	return 0;
}