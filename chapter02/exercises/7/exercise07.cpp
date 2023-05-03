#include <iostream>
using namespace std;

void showTime(int hours, int minutes);

int main() {
  int hours;
  int minutes;
  cout << "Enter the number of hours: ";
  cin >> hours; 
  cout << endl;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  cout << endl;
  showTime(hours, minutes);

  return 0;
}

void showTime(int hours, int minutes) {
  cout << "Time: " << hours << ':' << minutes << endl;
}
