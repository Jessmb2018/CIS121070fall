#include <iostream>
#include <string>

using namespace std;
int main() {
	float length, width;
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter width: ";
	cin >> width;
	float area = length * width;
	cout << "Area: " << area << endl;
	float circumference = 2 * (length + width);
	cout << "Circumference: " << circumference << endl;
	return 0;

}