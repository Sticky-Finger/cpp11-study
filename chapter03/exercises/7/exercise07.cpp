#include <iostream>
using namespace std;
const auto KM_2_MILE = 0.6214;
const auto GALLON_2_LITER = 3.875;

int main() {
  double fuel_consumption_per_100km_eu;
  cout << "Enter the fuel consumption of driving 100 kilometers in Euroupean standard: ";
  cin >> fuel_consumption_per_100km_eu;
  double fuel_consumption_us = 100*KM_2_MILE / (fuel_consumption_per_100km_eu / GALLON_2_LITER);
  cout << "The fuel consumption in US standard is " << fuel_consumption_us << " Miles/Gallon (mpg)." << endl;

  return 0;
}
