#include <iostream>
using namespace std;

const int FOOT_2_INCH = 12;

int main() {
  int inputHeight;
  cout << "Please input your height in inch: ___\b\b";
  cin >> inputHeight;

  int heightFoot = inputHeight / FOOT_2_INCH;
  int heightInch = inputHeight % FOOT_2_INCH;

  cout << "Your height in inch: " << inputHeight
    << "; transforming in foot and inch is: "
    << heightFoot << " foot "
    << heightInch << " inch." << endl;

  return 0;
}
