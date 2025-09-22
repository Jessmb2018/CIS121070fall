#include <iostream>

using namespace std;

int main() {
	float salary, taxrate, taxowed;

	cout << "Enter annual salary ";
	cin >> salary;
	if (salary >= 100000.00) {
		taxrate = .40;
	}
	else if (salary >= 50000) {
		taxrate = .35;
	}
	else {
		taxrate = .25;}


	taxowed = salary * taxrate;
	cout << " Salary is $ " << salary << " Tax rate is " << taxrate << " Tax amount owed is $ " << taxowed << endl;
	return 0;
}