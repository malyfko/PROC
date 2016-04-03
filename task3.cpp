#include <iostream>

using namespace std;

int main() {
    int a, b, c, max;
    cout << "Enter three non-negative numbers: ";
    cin >> a >> b >> c;
    max = a;
    if (b > a && b > c) max = b;
    if (c > a && c > b) max = c;
    for (int i = max; i > 0; i--) {
        cout << ((a >= i) ? '*' : ' ')
             << ((b >= i) ? '*' : ' ')
             << ((c >= i) ? '*' : ' ') << endl;
    }

}