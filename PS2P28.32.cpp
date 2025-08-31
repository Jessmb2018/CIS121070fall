#include <iostream>
#include <string>

using namespace std;
int main()
{
string lastname;
float hours, rate;
cout << "Enter last name: ";
cin >> lastname;
cout << "Enter hours worked: ";
cin >> hours;
cout << "Enter hourly rate: ";
cin >> rate;
float grosspay = hours * rate;
cout << "Gross pay for " << lastname << ": " << grosspay << endl;
return 0;
}
