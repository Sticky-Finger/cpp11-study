#include <iostream>
#include <string>
using namespace std;

struct Pizza {
  string company;
  double diameter;
  double weight;
};

int main() {
  Pizza* pizza = new Pizza;
  
  cout << "Enter the diameter of pizza: ";
  cin >> pizza->diameter;

  cout << "Enter the weight of pizza: ";
  cin >> pizza->weight;

  // 注意上语句输入完 weight 后，回车键留在输入流中，以下的 getline 
  // 碰到输入流中的回车就以为结束了，所以如果没有这个 cin.get() 先读
  // 取回车，那么用户永远获得 company 的值。
  cin.get();

  cout << "Enter the pizza company: ";
  getline(cin, pizza->company);

  cout << "\nHere's the pizza information: \n"
    << "Company: " << pizza->company << endl
    << "Diameter: " << pizza->diameter << endl
    << "Weight: " << pizza->weight << endl;

  delete pizza;

  return 0;
}
