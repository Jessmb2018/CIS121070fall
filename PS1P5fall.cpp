#include <iostream>
#include <string>
using namespace std;
int main() {
	float num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	float sum = num1 + num2;
	cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
	float product = num1 * num2;
	cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
	float difference = num1 - num2;
	cout << "The difference of " << num1 << " and " << num2 << " is: " << difference << endl;

	return 0;

}