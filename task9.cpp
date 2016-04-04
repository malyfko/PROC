#include <iostream>

using namespace std;

void ord3(double& a, double& b, double& c){
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

void ord3(double* a, double* b, double* c){
    if (*a > *b) swap(*a, *b);
    if (*b > *c) swap(*b, *c);
    if (*a > *b) swap(*a, *b);
}

void getMinMax(double &a, double& b, double& c,
               double*& ptrMin, double*& ptrMax){
    ord3(a, b, c);
    ptrMin = &a;
    ptrMax = &c;
}

void getMinMax(double *a, double* b, double* c,
               double** ptrMin, double** ptrMax){

}

int main() {
    double x, y, z, min, max, *pMin = &min, *pMax = &max;
    cout << "Enter 3 real variables: " << endl;
    cin >> x >> y >> z ;
    ord3(x, y, z);
    cout << x << ' ' << y << ' ' << z << endl;
    ord3(&x, &y, &z);
    cout << x << ' ' << y << ' ' << z << endl;
    getMinMax(x ,y, z, pMin, pMax);
    cout << min << ' ' << max << endl;
}