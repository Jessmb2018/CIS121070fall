#include <iostream>
#include <string>
using namespace std;

int main() {
	float num1, num2, num3;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	float answer = (num1 + num2) * num3;
	cout << "The result of (" << num1 << " + " << num2 << ") * " << num3 << " is: " << answer << endl;
}