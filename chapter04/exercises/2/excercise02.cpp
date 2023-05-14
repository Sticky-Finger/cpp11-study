#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  string dessert;

  cout << "What's your name? ";
  getline(cin, name);
  
  cout << "Enter your favorite dessert? ";
  getline(cin, dessert);

  cout << "I have delicious " << dessert;
  cout << " for you, " << name << ".\n";

  return 0;
}
