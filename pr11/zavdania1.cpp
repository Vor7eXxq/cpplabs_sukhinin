#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, x, y;
    size_t doti , sdoti;
    cout << "Enter a string: ";
    getline(cin, str);
    doti = str.find('.');
    if (doti == string::npos) {
        cout << "theres no dot in the text";
        return 0;
    }
    sdoti = str.find('.', doti+1);
    if (sdoti == string::npos) {
        y = str.substr(doti+1);
    }
    else {
    x = str.substr(0, doti);
    y = str.substr(doti+1, (sdoti - doti-1));
    }
    if (x.length() > y.length()) {
        cout << "the first part is longer: " << x << endl;
    }
    else if (x.length() < y.length()) {
        cout << "the second part is longer: " << y << endl;
    }
    else {
        cout << "both parts are equal: " << x << "     " << y << endl;
    }
}
