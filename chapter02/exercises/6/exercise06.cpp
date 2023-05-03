#include <iostream>
using namespace std;

double lightYear2AstronomicalUnit(double lightYear);

int main() {
  double lightYear;
  cout << "Enter the number of light year: ";
  cin >> lightYear;
  cout << endl;
  cout << lightYear << " light years = " << lightYear2AstronomicalUnit(lightYear) << " astronomical units." << endl;
}

double lightYear2AstronomicalUnit(double lightYear) {
  return 63240 * lightYear;
}
