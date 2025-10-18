#include <iostream>
#include <string>
using namespace std;

float totaltuition(float credit_hours) {
	const float cost_per_credit = 250.0;
	if (credit_hours >= 12) {
		return credit_hours * cost_per_credit;
	}

	int main() {
		string lastname;
		float credit_hours, tuition, sumoftuition = 0;
		int entriesmade = 0;
		cout << "Enter last name (or Ctrl+Z to end): ";
		while (cin >> lastname) {
			cout << "Enter credit hours for " << lastname << ": ";
			cin >> credit_hours;
			tuition = totaltuition(credit_hours);
			cout << "Student: " << lastname << ", Tuition: $" << tuition << endl;
			sumoftuition += tuition;
			entriesmade++;
			cout << "Enter last name (or Ctrl+Z to end): ";
		}
		if (entriesmade > 0) {
			cout << "\nTotal tuition for all students: $" << sumoftuition << endl;
			cout << "Number of entries made: " << entriesmade << endl;
			cout << "Average tuition: $" << (sumoftuition / entriesmade) << endl;
		} else {
			cout << "No entries were made." << endl;
		}
		return 0;

	}
}