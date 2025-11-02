#include <iostream>

using namespace std;

void computeCharges(float weight, int zip, float& postage, float& areaCharge, float& weightCharge)
{
 
    float rate;
    if (weight > 100)
        rate = 0.02;
    else if (weight > 50.)
        rate = 0.03;
    else
        rate = 0.05;

    weightCharge = weight * rate;

  
    if (zip == 60171)
        areaCharge = 2;
    else if (zip == 60172)
        areaCharge = 2.5;
    else if (zip == 60635)
        areaCharge = 3;
    else
        areaCharge = 5;

    postage = areaCharge + weightCharge;
}

int main()
{
    cout << "Enter weight (ounces) and zip code (press Ctrl+Z then Enter to end)":;

    float weight;
    int zip;

    float postage = 0;
    float areaCharge = 0;
    float weightCharge = 0;
    int count = 0;


    while (cin >> weight >> zip) {
        computeCharges(weight, zip, postage, areaCharge, weightCharge);

        cout << "Area charge: $" << areaCharge
            << ", Weight charge: $" << weightCharge
            << ", Postage: $" << postage << ;

        ++count;
    }

    if (count > 0) {
        cout << "Number of entries: " << count <<;
    }
    else {
        cout << "No entries were entered.";
    }

    return 0;
}