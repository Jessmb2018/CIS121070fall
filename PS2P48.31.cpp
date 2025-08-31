#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
	string lastname;
	float creditstaken;
	float labfee = 100.0;
	float totaltuition;
	cout << "Enter last name: ";
	cin >> lastname;
	cout << "Enter credits taken: ";
	cin >> creditstaken;
	totaltuition = creditstaken * 250.0 + labfee;
	cout << fixed << setprecision(2);
	cout << "Total tuition for " << lastname << ": $" << totaltuition << endl;
	return 0;

}