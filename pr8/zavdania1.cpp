#include <iostream>
using namespace std;

int main() {
   int rows, cols;
   double min = 0, max = 0, avg = 0, minavg=0;
   cout << "Enter the number of rows: ";
   cin >> rows;
   cout << "Enter the number of columns: ";
   cin >> cols;
   int** arr = new int*[rows];
   for (int i = 0; i < rows; i++) {
       arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        min = arr[i][0];
        max = arr[i][0];
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        avg = (max + min) / 2;
        if (i == 0 || avg < minavg) {
            minavg = avg;
        }
    }
    cout << "Minimum average value: " << minavg << endl;
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}