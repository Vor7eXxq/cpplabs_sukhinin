#include <iostream>
using namespace std;

int main() 
{
   float a, b ,c, x;
    cout << "enter three constants: ";
    cin >> a >> b >> c;
    cout << "enter a variable: ";
    cin >> x;
    if(x < 5 && c != 0)
    {
        cout << "result: " << -(a*x*x) - b << endl;
    }
    else if (x > 5 && c == 0)
    {
        cout << "result: " << (x-a)/x << endl;
    }
    else
    {
        cout << "result: " << -(x/c) << endl;
    }

}