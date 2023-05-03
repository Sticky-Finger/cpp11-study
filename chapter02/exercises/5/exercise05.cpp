#include <iostream>
using namespace std;

double getFahrenheitValue(float celsiusValue);

int main() {
  float celsiusValue;
  cout << "Please enter a Celsius value: ";
  cin >> celsiusValue;
  cout << endl;
  cout << celsiusValue << " degrees Celsius is " << getFahrenheitValue(celsiusValue) << " degrees Fahrenheit." << endl;
  return 0;
}

double getFahrenheitValue(float celsiusValue) {
  double result = (double) (celsiusValue * 1.8 + 32.0);
  return result;
}
