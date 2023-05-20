#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
  string name;
  double weight;
  int calories;
};

int main() {
  CandyBar snack = {"Mocha Munch", 2.3, 350};

  cout << "The name of CandyBar: " << snack.name << endl;
  cout << "The weight of CandyBar: " << snack.weight << endl;
  cout << "The calories of CandyBar: " << snack.calories << endl;

  return 0;
}
