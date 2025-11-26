#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double g;
    const double PI = 3.14159265358979;

    cout << "Grados: ";
    cin >> g;

    double r = g * PI / 180.0;

    cout << "Seno: " << sin(r) << endl;
    cout << "Coseno: " << cos(r) << endl;
    cout << "Arctan: " << atan(r) << endl;

    return 0;
}
