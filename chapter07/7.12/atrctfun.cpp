#include <iostream>
#include <cmath>

struct polar {
  double distance;
  double angle;
};
struct rect {
  double x;
  double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {
  using namespace std;
  rect rplace;
  polar pplace;

  cout << "Enter the x and y values: ";
  while (cin >> rplace.x >> rplace.y) { // slick use of cin
    pplace = rect_to_polar(rplace);
    show_polar(pplace);
    cout << "Next two numbers (q to quit): ";
  }
  cout << "Done.\n";
  return 0;
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos) {
  using namespace std;
  polar answer;

  answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
  answer.angle = atan2(xypos.y, xypos.x);
  return answer;
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos) {
  using namespace std;
  const double Red_to_deg = 57.29577951;

  cout << "distance = " << dapos.distance;
  cout << ", angle = " << dapos.angle * Red_to_deg;
  cout << " degrees\n";
}
