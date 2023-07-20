#include <iostream>
#include <array>
using namespace std;

int main() {
  array<double, 3> result;

  cout << "Enter threed result of the 40 miles running time:\n";
  cin >> result[0];
  cin >> result[1];
  cin >> result[2];

  double ave_result = (result[0] + result[1] + result[2]) / 3;
  cout << "The all three time results are: " << result[0] << ", "
    << result[1] << ", " << result[2] << endl;

  cout << "The average result: " << ave_result << endl;

  return 0;
}
