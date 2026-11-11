#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double sum = 0, x = 0;
    double arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    x = arr[1][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sqrt(arr[i][j]) != (int)sqrt(arr[i][j])) {
                sum += arr[i][j];
            }
        }
    }
     cout << sum - x<< endl;
}