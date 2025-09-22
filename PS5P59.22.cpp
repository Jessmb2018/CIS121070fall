#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float weight, rate, total;
	cout << "Enter weight ";
	cin >> weight;

	if (weight > 100) {
		rate = .50;
	}
	else if (weight >= 30) {
		rate = .25;
	}
	else {
		rate = .20;
	}

	total = weight * rate;
	cout << "  Weight of metal in pounds is  " << weight << " Rate per pound is  " << rate << "  Total given $ " << total << endl;

	return 0;
}