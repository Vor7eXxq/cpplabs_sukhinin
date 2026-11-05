#include <iostream>
using namespace std;

int main() {
    double n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (double i = 1; i <= n; i++) {
        sum += i/(i+1);
    }
    cout << "The sum is: " << sum << endl;

}