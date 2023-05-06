#include <iostream>
using namespace std;

int main() {
  double kilometer, oil_liter;
  cout << "Enter the distance that you've drived in kilometer: ";
  cin >> kilometer;
  cout << "Enter the consumption of oil: ";
  cin >> oil_liter;
  double oil_consumption_per_100_kilometer = oil_liter / kilometer * 100;
  cout << "The average fuel consumption of oil is "
    << oil_consumption_per_100_kilometer << " L/100km." << endl;

  return 0;
}
