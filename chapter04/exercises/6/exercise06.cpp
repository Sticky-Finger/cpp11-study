#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
  string name;
  double weight;
  int calories;
};

int main() {
  CandyBar candyBar[3] = {
    {"Mocha Munch", 2.3, 350},
    {"Big Rabbit", 5, 300},
    {"Joy Boy", 4.1, 430}
  };
  
  // for (int i = 0; i < sizeof())
  for (int i = 0; i < 3; i++) {
    cout << "The name of the CandyBar: " << candyBar[i].name << "\n"
      << "The weight of the candy: " << candyBar[i].weight << "\n"
      << "The calories informations: " << candyBar[i].calories << "\n\n";
  }

  return 0;
}
