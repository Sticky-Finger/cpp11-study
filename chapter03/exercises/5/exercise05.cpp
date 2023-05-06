#include <iostream>
using namespace std;

int main() {
  long long world_population, cn_population;
  cout << "Enter the world's population: ";
  cin >> world_population;
  cout << "Enter the population of China: ";
  cin >> cn_population;
  double rate = 100 * cn_population / world_population;
  cout << "The population of China is " << rate << "% of the world population." << endl;

  return 0;
}
