#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char first_name[20], last_name[20], final_name[50];

  cout << "Enter your first name: ";
  cin.getline(first_name, 20);

  cout << "Enter your last name: ";
  cin.getline(last_name, 20);

  strcpy(final_name, last_name);
  strcat(final_name, ", ");
  strcat(final_name, first_name);

  cout << "Here's the infomation in a single string: " << final_name << ".\n";

  return 0;
}
