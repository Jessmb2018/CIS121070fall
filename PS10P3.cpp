#include <iostream>
#include <string>

using namespace std;

void computeTuition(int creditHours, float financialAid, float& tuition, float& tuitionOwed)
{
    tuition = creditHours * 250;
    tuitionOwed = tuition - financialAid;
}

int main()
{
    cout << "Enter last name, credit hours and financial aid (press Ctrl+Z then Enter to end):";

    string lastName;
    int creditHours;
    float financialAid;

    float tuition = 0;
    float tuitionOwed = 0;
    float sumTuitionOwed = 0;
    int count = 0;


    while (cin >> lastName >> creditHours >> financialAid) {
        computeTuition(creditHours, financialAid, tuition, tuitionOwed);

        cout << lastName
            << " | Tuition = $" << tuition
            << " | Tuition Owed = $" << tuitionOwed <<;

        sumTuitionOwed += tuitionOwed;
        ++count;
    }

    if (count > 0) {
        cout << "Number of entries: " << count << 
            << "Total 