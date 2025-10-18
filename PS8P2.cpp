#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Pass by value function to calculate pay, including overtime
float calculatePay(string jobcode, float hoursworked) {
    float rate = 0.0;
    if (jobcode == "L") rate = 25.0;
    else if (jobcode == "A") rate = 30.0;
    else if (jobcode == "J") rate = 50.0;
    else return 0.0; // Invalid job code

    if (hoursworked > 40)
        return 40 * rate + (hoursworked - 40) * rate * 1.5f;
    else
        return hoursworked * rate;
}

int main() {
    string lastname, jobcode;
    float hoursworked, pay, sumofpay = 0;
    int entriesmade = 0;

    cout << "Enter last name (or Ctrl+Z to end): ";
    while (cin >> lastname) {
        cout << "Enter job code for " << lastname << " (L, A, or J): ";
        cin >> jobcode;
        cout << "Enter hours worked for " << lastname << ": ";
        cin >> hoursworked;

        pay = calculatePay(jobcode, hoursworked);
        cout << "Employee: " << lastname << ", Pay: $" << pay << endl;

        sumofpay += pay;
        entriesmade++;

        cout << "Enter last name (or Ctrl+Z to end): ";
    }

    if (entriesmade > 0) {
        cout << "\nTotal pay for all employees: $" << sumofpay << endl;
        cout << "Number of entries made: " << entriesmade << endl;
        cout << "Average pay: $" << (sumofpay / entriesmade) << endl;
    } else {
        cout << "No entries were made." << endl;
    }
}