#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
	float price, discount, discountedamount, discountedprice;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter discount percentage: ";
	cin >> discount;
	discountedamount = price * (discount / 100);
	discountedprice = price - discountedamount;
	cout << fixed << setprecision(2);
	cout << "Discounted price: $" << discountedprice << endl;
	return 0;
}