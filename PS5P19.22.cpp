#include <iostream>
#include <string>

using namespace std;

int main() {
float score;
string lastname;

cout << "Enter your last name: ";
cin >> lastname;
cout << "Enter your score: ";
cin >> score;
if (score >= 90) {
	cout << lastname << ", your grade is A." << endl;
} else if (score >= 80) {
	cout << lastname << ", your grade is B." << endl;
} else if (score >= 70) {
	cout << lastname << ", your grade is C." << endl;
} else if (score >= 60) {
	cout << lastname << ", your grade is D." << endl;
}
else {
	cout << lastname << ", your grade is F." << endl;
}
return 0;
}