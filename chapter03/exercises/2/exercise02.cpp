#include <iostream>
using namespace std;

const int FOOT_2_INCH = 12;
const double INCH_2_METER = 0.0254;
const double KG_2_POUND = 2.2;

double BMI(double weight_kg, double height_meter);

int main() {
  double height_foot;
  double height_inch;
  double weight_pound;

  cout << "Please enter your height in foot and inch." << endl; 
  cout << "Enter the foot of height: __\b\b";
  cin >> height_foot;
  cout << "Enter the inch of height: __\b\b";
  cin >> height_inch;
  cout << "Enter the pound of weight: __\b\b";
  cin >> weight_pound;

  double height_meter = (height_foot * FOOT_2_INCH + height_inch) * INCH_2_METER;
  double weight_kg = weight_pound / KG_2_POUND;
  double bmi = BMI(weight_kg, height_meter);

  cout << "Your BMI is: " << bmi << endl;

  return 0;
}

double BMI(double weight_kg, double height_meter) {
  return weight_kg / (height_meter * height_meter);
}
