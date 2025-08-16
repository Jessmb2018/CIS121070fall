#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstname, lastname;
	cout << "Enter your first name: ";
	cin >> firstname;
	cout << "Enter your last name: ";
	cin >> lastname;

	cout << "Hello " << lastname << endl;
	return 0;
}