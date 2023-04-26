#include <iostream>
#include "dma.h"
using namespace std;

int main() {
  BaseDMA shirt("Portabelly", 8);
  LacksDMA balloon("red", "Blimpo", 4);
  HasDMA map("Mercator", "Buffalo Keys", 5);
  cout << "Displaying BaseDMA object:\n";
  cout << shirt << endl;
  cout << "Displaying LacksDMA object:\n";
  cout << balloon << endl;
  cout << "Displaying HasDMA object:\n";
  cout << map << endl;
  LacksDMA balloon2(balloon);
  cout << "Result of LacksDMA copy:\n";
  cout << balloon2 << endl;
  HasDMA map2;
  map2 = map;
  cout << "Result of HasDMA assignment:\n";
  cout << map2 << endl;
  return 0;
}
