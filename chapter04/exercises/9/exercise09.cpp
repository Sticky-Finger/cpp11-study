#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
  string name;
  double weight;
  int calories;
};

int main() {
  CandyBar* candyBar = new CandyBar[3];

  candyBar[0] = { "Mocha Munch", 2.3, 350 };
  candyBar[1] = { "Big Rabbit", 5, 300 };
  candyBar[2] = { "Joy Boy", 4.1, 430 };

  for (int i = 0; i < 3; i++) {
    cout << "The name of the CandyBar: " << candyBar[i].name << endl
      << "The weight of the CandyBar: " << candyBar[i].weight << endl
      << "The calories of the CandyBar: " << candyBar[i].calories << "\n\n";
  }

  delete [] candyBar;

  return 0;
}
