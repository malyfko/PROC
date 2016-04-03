#include <iostream>
using namespace std;

int main() {

    double height, weight, bmi;
    cout << "Please, enter your height in meters and weight in kilograms" << endl;
    cin >> height >> weight;
    bmi = weight / (height * height);
    cout << "Your bmi is : " << bmi << endl;
}