#include <iostream>
using namespace std;

int main() {
  char first_name[40];
  char last_name[40];
  char grade_letter;
  int age;

  cout << "What's your first name: ";
  cin.getline(first_name, 40);

  cout << "What's your last name: ";
  cin.getline(last_name, 40);

  cout << "What letter grade do you deserve: ";
  cin >> grade_letter;

  cout << "What's your age: ";
  cin >> age;

  cout << "Name:" << first_name << ", " << last_name << endl;
  cout << "Grade: " << grade_letter << endl;
  cout << "Age: " << age << endl;

  return 0;
}
