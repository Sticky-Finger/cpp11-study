#include <iostream>
using namespace std;

void printOne();
void printTwo();

int main() {
  printOne();
  printOne();
  printTwo();
  printTwo();
  return 0;
}

void printOne() {
  cout << "Three blind mice" << endl;
}

void printTwo() {
  cout << "See how they run" << endl;
}
