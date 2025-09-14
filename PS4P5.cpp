#include <iostream>
using namespace std;
int main() {
	string lastname;
	float grossincome, adjustedgrossincome, incometax, taxrate;
	int dependents;
	cout << "Enter your last name: ";
	cin >> lastname;
	cout << "Enter the number of dependents: ";
	cin >> dependents;
	cout << "Enter your gross income: ";
	cin >> grossincome;
	adjustedgrossincome = grossincome - (dependents * 12000);
	if (adjustedgrossincome >= 50000) {
		taxrate = .20;
	}
	else {
		taxrate = .10;
	}
	incometax = adjustedgrossincome * taxrate;
	cout << "Last Name: " << lastname << endl;
	cout << "Number of Dependents: " << dependents << endl;
	cout << "Gross Income: " << grossincome << endl;
	cout << "Adjusted Gross Income: " << adjustedgrossincome << endl;
	cout << "Income Tax: " << incometax << endl;
	return 0;
}