#include <iostream>
using namespace std;

void func(int x) {
    int counter=0, sum=0;
    while(x>0) {
        sum+=x%10;
        x/=10;
        counter++;
    }
    cout << "Sum: " << sum << ", Digits: " << counter << endl;
}

int main() {
    int arr[5];
    cout << "Enter 5 integers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        func(arr[i]);
    }
}