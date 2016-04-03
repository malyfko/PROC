#include <iostream>

using namespace std;

int main() {

    int x, y, pre, appear, max = 1;
    cin >> x;
    pre = x;
    appear = 1;
    do{
        cin >> x;
        if (x == pre) {
            appear++;
            if (appear > max) {
                max = appear;
                y = x;
            }
        } else {
            pre = x;
            appear = 1;
        }
        
    } while (x != 0);
    cout << "Najdluzsza sekwencja: " << max << " razy liczba " << y << "." << endl;
}