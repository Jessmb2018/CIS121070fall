#include <iostream>

using namespace std;

void computeOrder(int quantity, float price, float& total, float& tax, float& totalOrder)
{
    total = quantity * price;
    tax = total * 0.07f;
    totalOrder = total + tax;
}

int main()
{
    cout << "Enter quantity and price (press Ctrl+Z to end):";

    int quantity;
    float price;

    float total, tax, totalOrder;
    float sumTotals = 0.0f;
    float sumTaxes = 0.0f;
    bool any = false;

    while (cin >> quantity >> price) {
        computeOrder(quantity, price, total, tax, totalOrder);

        cout << "Order: Total = $" << total
             << ", Tax = $" << tax
             << ", Total with Tax = $" << totalOrder << ;

        sumTotals += total;
        sumTaxes += tax;
        any = true;
    }

    if (any) {
        cout << "Summary for all orders:"
             << "Sum of totals = $" << sumTotals << 
             << "Sum of taxes  = $" << sumTaxes <<
             << "Sum of orders (totals + taxes) = $" << (sumTotals + sumTaxes) <<;
    }
    else {
        cout << "No orders were entered.\n";
    }

    return 0;
}