#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a number (0 - 9): ";
    cin >> a;
    if (a < 0 || a > 9)
    {
        cout << "invalid input" << endl;
        exit(1);
    }
    switch(a)
    {
        case 0:
            cout << "biology" << endl;
            break;
        case 1:
            cout << "filology" << endl;
            break;
        case 2:
            cout << "mechanic-mathematics" << endl;
            break;
        case 3:
            cout << "agronomy" << endl;
            break;
        case 4:
            cout << "physics" << endl;
            break;
        case 5:
            cout << "chemistry" << endl;
            break;
        case 6:
            cout << "history" << endl;
            break;
        case 7:
            cout << "economics" << endl;
            break;
        case 8:
            cout << "informatics" << endl;
            break;
        case 9:
            cout << "jurisprudence" << endl;
            break;
    }

    return 0;
}