# include <iostream>
using namespace std;
int main() {
	float qty, price;

	cout << "Enter the quantity of items: ";
	cin >> qty;
	if (qty >= 1000) { price = 3.00; }
	else if (qty < 1000) { price = 5.00; }
	float extendedprice = qty * price;
	cout << "The extended price is: " << extendedprice << endl;
	return 0;

}