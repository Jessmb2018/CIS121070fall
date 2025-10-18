#include <iostream>
#include <string>

using namespace std;


float calculateMPG(float miles, float gallons) {
    return miles / gallons;
}

int main() {
    string Destinationcity;
    float milestraveled, gallons, numberoftrips = 0, totalmpg = 0, mpg, totalmiles = 0, totalgallons = 0;

    cout << "Enter the destination city (or Ctrl+Z to finish): ";
    while (cin >> Destinationcity) {
        cout << "Enter the miles traveled to " << Destinationcity << ": ";
        cin >> milestraveled;
        cout << "Enter the gallons used to get to " << Destinationcity << ": ";
        cin >> gallons;
        mpg = calculateMPG(milestraveled, gallons); // Use the extra function
        cout << "Miles per gallon for this trip: " << mpg << endl;
        totalmpg += mpg;
        totalmiles += milestraveled;
        totalgallons += gallons;
        numberoftrips++;
        cout << "Enter the destination city (or Ctrl+Z to finish): ";
    }
    if (numberoftrips > 0) {
        cout << "Total miles traveled: " << totalmiles << endl;
        cout << "Total gallons used: " << totalgallons << endl;
        cout << "Average miles per gallon for all trips: " << totalmpg / numberoftrips << endl;
    } else {
        cout << "No trips were recorded." << endl;
    }

}