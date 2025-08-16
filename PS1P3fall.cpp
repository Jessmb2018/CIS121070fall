#include <iostream>
#include <string>
using namespace std;

int main() {
	string lastname;
	float score;

	cout << "Enter your last name: ";
	cin >> lastname;
	cout << "Enter your score: ";
	cin >> score;
	cout << lastname << ", your score is " << score << endl;
	return 0;
}