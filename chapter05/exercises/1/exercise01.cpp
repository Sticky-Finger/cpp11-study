#include <iostream>
#include <array>
using namespace std;

int main() {
  array<int, 2> input_ints;
  cout << "Input first int number: " << endl;
  cin >> input_ints[0];

  cout << "Input second int number: " << endl;
  cin >> input_ints[1];

  int number_0, number_1;
  if (input_ints[0] > input_ints[1]) {
    number_0 = input_ints[1];
    number_1 = input_ints[0];
  } else {
    number_0 = input_ints[0];
    number_1 = input_ints[1];
  }

  double sum;
  for (int num = number_0; num <= number_1; num++) {
    sum += num;
  }
  
  cout << "Sum of numbers ranging from " << number_0
    << " to " << number_1 << " is: " << sum << endl;

  return 0;
}

