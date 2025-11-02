#include <iostream>
#include <math.h>

using namespace std;

void computeAmounts(float amount, float rate5, float rate10, float& amount5, float& amount10)
{
    amount5 = amount * powf(1 + rate5, 5);
    amount10 = amount * powf(1 + rate10, 10;
}

int main()
{
    cout << "Enter investment amount, 5-year rate and 10-year rate (decimal form)."
        << " Press Ctrl+Z then Enter to end:";

    float amount;
    float rate5;
    float rate10;
    float amount5 = 0;
    float amount10 = 0;

 

    while (cin >> amount >> rate5 >> rate10) {
        computeAmounts(amount, rate5, rate10, amount5, amount10);

        cout << "Investment: $" << amount
            << "  5-year amount: $" << amount5
            << "  10-year amount: $" << amount10 << ;
    }

    return 0;
}