#include <iostream>
using namespace std;
int main() {
    int five, four, two;
    for (five = 0; five <= 18 / 5; five++) {
        for (four = 0; four <= 18 / 4; four++) {
            for (two = 0; two <= 18 / 2; two++) {
                if (5 * five + 4 * four + 2 * two == 18) {
                    cout << "5 kg: " << five
                         << ", 4 kg: " << four
                         << ", 2 kg: " << two << endl;
                }
            }
        }
    }
}
