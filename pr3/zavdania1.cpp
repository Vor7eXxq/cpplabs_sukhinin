#include <iostream>
using namespace std;

int main()
{
    int a, b, c, sum;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    cout << "numbers before operation: " << a << " " << b << " " << c << endl;
    sum = a + b + c;
    if (sum < 50)
    {
        int temp;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }

    }
    else
    {
        int temp;
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a < c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (b < c)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }
    cout << "numbers after operation: " << a << " " << b << " " << c << endl;
    return 0;
}