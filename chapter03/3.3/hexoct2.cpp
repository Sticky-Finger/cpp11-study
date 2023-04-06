#include <iostream>
using namespace std;

int main() {
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // 不回在屏幕显示任何内容；只修改cout显示整数的方式
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}
