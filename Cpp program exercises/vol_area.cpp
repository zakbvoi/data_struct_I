#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    const double PI = 3.14159265358979;

    cout << "Radio: ";
    cin >> r;

    double volumen = (4.0/3.0) * PI * pow(r,3);
    double area = 4 * PI * r * r;

    cout << "Volumen = " << volumen << endl;
    cout << "Area = " << area << endl;

    return 0;
}
