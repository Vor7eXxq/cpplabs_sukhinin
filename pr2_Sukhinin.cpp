#include <iostream>
#include <cmath>
using namespace std;

int first ();
int second ();
int third ();


    int main()
    {
        first();
        second();
        third();
        return 0;
    }


    int first ()
    {
        double a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        double result = (pow((a + b), 3) - (pow(a, 3) + 3 * pow(a,2) * b))/(3 * a * pow(b, 2) + pow(b, 3));

        cout << "Result: " << result << endl;
        return 0;
    }

    int second ()
    {
        int n , m;
        cout << "Enter two numbers: ";
        cin >> m >> n;
        int result = ++n*m--;
        cout << "Result: " << result << endl;
        cout << "n = " << n << endl;
        cout << "m = " << m << endl;
        return 0;
    }

    int third ()
    {
        double barea, height;
        const double PI = 3.14;
        cout << "Enter base area and height: ";
        cin >> barea >> height;
        double r = sqrt(barea / PI);
        double l = sqrt(pow(r, 2) + pow(height, 2));
        double result = barea + (PI * r * l);
        cout << "Result: " << result << endl;
        return 0;
    }