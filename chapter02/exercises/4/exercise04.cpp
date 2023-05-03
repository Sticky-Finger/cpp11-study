#include <iostream>
using namespace std;

const int MONTH_NUM = 12;

int main() {
  int age;
  int hours;
  int minutes;
  cout << "Enter your age: ";
  cin >> age;
  cout << endl;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << endl;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  cout << endl;
  cout << "Time: " << hours << ':' << minutes << endl;
  cout << "Total month number of age: " << age * MONTH_NUM << endl;

  return 0;
}
