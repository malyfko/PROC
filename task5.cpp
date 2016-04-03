#include <iostream>

using namespace std;

int main() {
    int x, n0 = 1, nm = 1000000;
    char answer;
    bool found = false;
    for (int i = 0; (i < 20 && !found); i++) {
        x = (nm - n0)/2 + n0;
        cout << "Is it " << x << "?" << endl;
        cout << "('s' for 'smaller', 'b' for 'bigger', 'y' for 'yes')" << endl;
        cin >> answer;
        switch (answer) {
            case 's':
                nm = x - 1;
                break;
            case 'b':
                n0 = x + 1;
                break;
            case 'y':
                found = true;
                cout << "Your number is " << x << endl;
                cout << "Computer guessed your number in " << i + 1 << " tries" << endl;
                break;
            default:
                cout << "Invalid data";
                exit(1);
        }
    }

}