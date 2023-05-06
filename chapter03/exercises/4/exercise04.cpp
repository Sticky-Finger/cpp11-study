#include <iostream>

using namespace std;

int main() {
  long total_seconds;
  cout << "Enter the number of seconds: ";
  cin >> total_seconds;

  int days = total_seconds / (24*60*60);
  // int hours = (total_seconds - days*24*60*60) / (60*60);
  int hours = total_seconds % (24*60*60) / (60*60);
  int minutes = total_seconds % (24*60*60) % (60*60) / 60;
  int seconds = total_seconds % (24*60*60) % (60*60) % 60;
  cout << total_seconds << " seconds = "
    << days << " days, "
    << hours << " hours, "
    << minutes << " minutes, "
    << seconds << " seconds." << endl;

  return 0;
}
