#include <iostream>
using namespace std;

int main () {
    int a, b, n;
    cout << "Enter the range (a b): ";
    cin >> a >> b;
    cout << "Enter the number n: ";
    cin >> n;
    for (int i = a; i <= b; i++) {
        if (i%n == 0) {
            cout << i << endl;
        }
    }
}