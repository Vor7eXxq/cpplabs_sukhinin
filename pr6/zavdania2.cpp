#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0; int min = 0;
    for (int i = 0; i < 5; i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++){
        if (arr[i] < min) {
            min = arr[i];
        }
        }
    for (int i = 0; i < 5; i++){
        if (arr[i] > min){
            sum += arr[i];
        }
    }
    cout << sum;
}
