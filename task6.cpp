#include <iostream>

using namespace std;

#if defined(POL) && defined(ENG)
#error Please define a language, using option -D
	#error Prosze wybrac jezyk za pomoca opcji -D
#elif !(defined(POL) || defined(ENG))
#error Please define a language, using option -D
	#error Prosze wybrac jezyk za pomoca opcji -D
#endif

void rekur() {
    int n;
    #ifdef POL
        cout << "Wprowadź dodatnią liczbę całkowitą (0 jeśli koniec): ";
    #elif defined(ENG)
        cout << "Enter a positive integer (0 if done): ";
    #endif
    cin >> n;
    if (n == 0) return;
    rekur();
    cout << " " << n;
}

int main() {
    rekur();
}