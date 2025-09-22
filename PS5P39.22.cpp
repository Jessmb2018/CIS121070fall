#include <iostream>
#include <string>	

using namespace std;

int main() {
	string lastname, jobcode;
	float hours, payrate, total;

	cout << "Enter last name";
	cin >> lastname;
	cout << "Enter hours worked";
	cin >> hours;
	cout << "Enter job code";
	cin >> jobcode;
	if (jobcode == "A" || jobcode == "a") {
		payrate = 15.00;
	}
	else if (jobcode == "J" || jobcode == "j") {
		payrate = 20.00;
	}
	else if (jobcode == "E" || jobcode == "e") {
		payrate = 25.00;
	}
	else {
	cout << "error" << endl;


	return 1;
}

total = hours * payrate;
cout << " Last name: " << lastname << " Payrate $ " << payrate << " Hours: " << hours << " Your total pay is " << total << endl;

return 0;

}
