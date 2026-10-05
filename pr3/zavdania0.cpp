#include <iostream>
using namespace std;


void first()
{
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    if(a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if(a < b)
    {
        cout << a << " is less than " << b << endl;
    }
    else
    {
        cout << a << " is equal to " << b << endl;
    }
}

void second()
{
    int a, b, c;
    cout << "enter two numbers: ";
    cin >> a >> b;
    if(a > b)
    {
        c = b;
    }
    else
    {
        c = a;
    }
    cout << c << " is the smallest number " << endl;
}

void third()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    if(a % 2 == 0)
    {
        cout << a << " is even number " << endl;
    }
    else
    {
        cout << a << " is odd number " << endl;
    }
}
void fourth()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    if (a % 23 == 0)
    {
        cout << a << " is divisible by 23 " << endl;
    }
    else
    {
        cout << a << " is not divisible by 23 " << endl;
    }
}
void fifth()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    if (a < 2026)
    {
        cout << a << " is less than 2026 " << endl;
    }
    else if (a > 2026)
    {
        cout << a << " is greater than 2026 " << endl;
    }
    else
    {
        cout << a << " is equal to 2026 " << endl;
    }
}
void sixth()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    if ((a >= 10 && a <= 99) || (a >= -99 && a <= -10))
    {
        cout << a << " has two digits " << endl;
    }
    else
    {
        cout << a << " has only one digit " << endl;
    }
}
void seventh()
{
    char a;
    cout << "enter a character: ";
    cin >> a;
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    {
        cout << a << " is a latin letter " << endl;
    }
    else
    {
        cout << a << " is not a latin letter " << endl;
    }
}
void eighth()
{
    int x;
    cout << "enter a number: ";
    cin >> x;
    if (x*x + 5*x - 6 >0)
    {
        cout << x << " is a solution of the inequality " << endl;
    }
    else
    {
        cout << x << " is not a solution of the inequality " << endl;
    }
}
void ninth()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    if (a <= -10 || (5 <= a && a <= 100) || a > 1000)
    {
        cout << a << " is in the range  (-∞,-10]U[5, 100]U(1000,+ ∞) " << endl;
    }
    else
    {
        cout << a << " is not in the range  (-∞,-10]U[5, 100]U(1000,+ ∞) " << endl;
    }
}
void tenth()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    if (a > -100 && a <= 10)
    {
        cout << a << " is in the range (-100, 10] " << endl;
    }
    else
    {
        cout << a << " is not in the range (-100, 10]" << endl;
    }
}

 int main()
{
    first();
    second();
    third();
    fourth();
    fifth();
    sixth();
    seventh();
    eighth();
    ninth();
    tenth();
}