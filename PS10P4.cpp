#include <iostream>

using namespace std;

void computeOrder(int widgets, float& costPerWidget, float& extendedPrice, float& salesTax, float& totalOrder)
{
    if (widgets >= 10000) costPerWidget = 4;
    else if (widgets >= 5000) costPerWidget = 5;
    else costPerWidget = 10;

    extendedPrice = widgets * costPerWidget;
    salesTax = extendedPrice * 0.07;
    totalOrder = extendedPrice + salesTax;
}

int main()
{
    cout << "Enter number of widgets (press Ctrl+Z then Enter to end):";

    int widgets;
    float costPerWidget = 0;
    float extendedPrice = 0;
    float salesTax = 0;
    float totalOrder = 0;
    float sumTotalOrders = 0;
    bool any = false;


    while (cin >> widgets) {
        computeOrder(widgets, costPerWidget, extendedPrice, salesTax, totalOrder);

        cout << "Widgets: " << widgets
            << "  Cost: $" << costPerWidget
            << "  Extended: $" << extendedPrice
            << "  Tax: $" << salesTax
            << "  Total: $" << totalOrder << ;

        sumTotalOrders += totalOrder;
        any = true;
    }

    if (any) {
        cout << "Sum of all total orders : $" << sumTotalOrders << ;
    }
    else {
        cout << "No data was entered.";
    }

    return 0;
}