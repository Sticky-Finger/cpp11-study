#include <iostream>

int main() {
  using namespace std;
  cout << "What year was your house built?\n";
  int year;
  // cin >> year;
  cin >> year;
  cin.get();
  // (cin >> year).get();
  cout << "What is its street address?\n";
  char address[80];
  cin.getline(address, 80); // 没有输入机会
  cout << "Year built: " << year << endl;
  cout << "Address: " << address << endl;
  cout << "Done!\n";
  return 0;
}
