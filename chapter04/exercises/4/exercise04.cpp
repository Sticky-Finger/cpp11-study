#include <iostream>
#include <string>
using namespace std;

int main() {
  string first_name, last_name;
  string final_name;

  cout << "Enter your first name: ";
  getline(cin, first_name);

  cout << "Enter your last name: ";
  getline(cin, last_name);

  final_name = last_name + ", " + first_name;

  cout << "Here's the information in a single string: " << final_name << endl;

  return 0;
}
