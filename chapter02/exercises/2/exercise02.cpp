#include <iostream>
using namespace std;

const int DYNAMETER = 220;

int main() {
  float instance;
  cout << "Input the long instance: ";
  cin >> instance;
  cout << endl;
  cout << "Transform long instance to: " << instance * DYNAMETER << " ma." << endl; 

  return 0;
}
