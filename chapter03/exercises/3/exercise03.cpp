#include <iostream>
using namespace std;

int main() {
  int degree, minutes, seconds;
  cout << "Enter a latitude in degree, minutes, and seconds:" << endl;
  cout << "First, enter the degree: ";
  cin >> degree;
  cout << "Next, enter the minutes of arc: ";
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: ";
  cin >> seconds;
  double res_degree = double (degree + double(minutes)/60 + double(seconds)/60/60);
  cout << degree << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << res_degree << " degrees" << endl;

  return 0;
}
