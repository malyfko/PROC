#include <iostream>

using namespace std;

#if defined(POL) && defined(ENG)
    #error Please define a language, using option -D
	#error Prosze wybrac jezyk za pomoca opcji -D
#elif !(defined(POL) || defined(ENG))
    #error Please define a language, using option -D
	#error Prosze wybrac jezyk za pomoca opcji -D
#endif

int sum(int d) {
    int s = 0;
    while (d){
        s += d%10;
        d /= 10;
    }
    return s;
}

int main() {

    int x, y, r, max=0;

    do {
    #ifdef POL
        cout << "Wprowadz liczbe naturalna (0 jesli wykonano): ";
    #elif defined(ENG)
        cout << "Enter a natural number (0 if done): ";
    #endif
        cin >> x;
        y = sum(x);
        if( y >= max)
        {
            max = y;
            r = x;
        }
    } while (x != 0);
    #ifdef POL
        cout << "Maksymalna suma " << max << " dla " << r << endl;
    #elif defined(ENG)
        cout << "Max sum " << max << " for " << r << endl;
    #endif

}