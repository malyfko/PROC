#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int a, min, premin, n=2;
    cin >> a;
    min = a, premin = a;
    cin >> a;
    if (a < min) min = a;
    else premin = a;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) break;
        if (a < min){
            premin = min;
            min = a;
        } else {
            if (a < premin) premin = a;
        }
        n++;

    }
    cout << premin << ", " << min << endl;

}

