#include <iostream>
using namespace std;

int task1(int arr[4]) {
    int x = 1;
    for (int i = 0; i < 4; i++) {
        if (arr[i] %2== 0) {
            x*= arr[i];
        }
    }
    return x;
}

double task2(int arr[4]) {
    double max = arr[0];
    for (int i = 0; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return arr[0] / max;
}

void main() {
    int task, arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    cout << "1 - task 1" << endl;
    cout << "2 - task 2" << endl;
    cin >> task;
    if (task == 1) {
        cout << task1(arr) << endl;
    }
    else if (task == 2) {
        cout << task2(arr) << endl;
    }
    else {
        cout << "Error" << endl;
    }
}