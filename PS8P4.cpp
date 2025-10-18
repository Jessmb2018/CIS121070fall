#include <iostream>

using namespace std;

// function to determine unit price baserd on product code
float unitprice(char productcode) {
	switch (productcode) {
		case 'A': return 2.00;
		case 'B': return 3.00;
		case 'C': return 4.00;
		case 'D': return 5.00;
		default: return 0.0; // Invalid product code
	}
}
// function to compute shipping based on product code
float shippingcost(char productcode) {
	switch (productcode) {
		case 'A': return 1.00;
		case 'B': return 1.50;
		case 'C': return 2.00;
		case 'D': return 2.50;
		default: return 0.0; // Invalid product code
	}
	int main() {
		char productcode;
		int quantity;
		float price, shipping, totalprice, sumoftotal = 0;
		int entriesmade = 0;
		cout << "Enter product code (A, B, C, D) or Ctrl+Z to end: ";
		while (cin >> productcode) {
			cout << "Enter quantity for product " << productcode << ": ";
			cin >> quantity;
			price = unitprice(productcode) * quantity;
			shipping = shippingcost(productcode) * quantity;
			totalprice = price + shipping;
			cout << "Product: " << productcode << ", Quantity: " << quantity
				 << ", Price: $" << price << ", Shipping: $" << shipping
				 << ", Total Price: $" << totalprice << endl;
			sumoftotal += totalprice;
			entriesmade++;
			cout << "Enter product code (A, B, C, D) or Ctrl+Z to end: ";
		}
		if (entriesmade > 0) {
			cout << "\nTotal price for all products: $" << sumoftotal << endl;
			cout << "Number of entries made: " << entriesmade << endl;
			cout << "Average total price: $" << (sumoftotal / entriesmade) << endl;
		} else {
			cout << "No entries were made." << endl;
		}
		return 0;
	}
}