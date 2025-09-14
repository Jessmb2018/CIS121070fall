#include <iostream>
using namespace std;
int main() {
	float qty, priceperbook, ordertotal, shipping;
	cout << "Enter the quantity of books: ";
	cin >> qty;
	cout << "Enter the price per book: ";
	cin >> priceperbook;
	ordertotal = qty * priceperbook;
	if (qty <= 50) {
		shipping = 25;
	}
	else {
		shipping = 0;
}
cout << "The order total is: " << ordertotal << endl;
cout << "The shipping cost is: " << shipping << endl;
return 0;
}