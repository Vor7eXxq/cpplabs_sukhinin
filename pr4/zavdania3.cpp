#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, h, x, y;
    cout << "Enter [a, b]";
    cin >> a >> b;
    cout << "Enter step h";
    cin >> h;

    if (a < 0 || a > b || h <= 0) {
        cout << "Invalid input" << endl;
    }
    
    cout << "------------------------" << endl;
    cout << "     x          y" << endl;
    cout << "------------------------" << endl;
    for (x = a; x <= b; x += h) {
        y = sqrt(x) + cos(x) - 3;
        cout << "     " << x << "          " << y << endl;
    }
    cout << "------------------------" << endl;
    return 0;
}