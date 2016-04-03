#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    switch (n) {
        case 1: return false;
        case 2:
        case 3: return true;
        default:
            if ((n % 2 != 0) && (n % 3 != 0)) {
                double r = sqrt(n);
                int i = 1;
                do {
                    if ((n % (6*i-1) != 0) || (n / (6*i-1) == 1)) {
                        if ((n % (6*i+1) != 0) || (n / (6*i+1) == 1)) {
                            i++;
                        } else return false;
                    } else return false;


                } while ((6*i+1) <= r);
            } else return false;
            return true;
    }
};

void printDivisors(int n){
    for(int i = 1; i <= n; i++){
        if (n % i == 0) cout << i << ' ';
    }
    cout << endl;
};

int numDivisors(int n){
    int counter = 0;
    for(int i = 1; i*i <= n; i++){
        if (n % i == 0) counter += 1 + (i*i != n);
    }
    cout << n << " has " << counter << " divisors" << endl;
};

int gcd(int m, int n){
    while (m != n){
        if (m < n) {
            int tmp = m;
            m = n;
            n = tmp;
        }
        m -= n;
    }
    return m;
};

int phi(int n){
    int counter = 0;
    for (int i = 1; i < n; i++){
        if (gcd(n, i) == 1) counter++;
    }
    return counter;
};

int main() {

    int x, y;
    cout << "Enter a number: " << endl;
    cin >> x;
    if (isPrime(x)) {
        cout << "Entered number is a prime number" << endl;
    } else {
        cout << "Entered number is not a prime number." << endl;
        printDivisors(x);
        numDivisors(x);
    }
    cout << "Enter a second number: " << endl;
    cin >> y;
    cout << "Greatest common divisor is " << gcd(x, y) << endl;
    cout << "phi(" << x << ") = " << phi(x) << endl;
}
