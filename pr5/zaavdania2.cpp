#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double y = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        double s = 0;
        for (int j = 1; j <= i; j++) {
            s += sin(j);
        }
        y += sin(s);
    }
    cout << "y = " << y << endl;
}
