#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    double Y = 3*a*a*b*b - 2*a;
    double W = 2*a*a * (3*a*a*b*b - 2*a);
    double Z = Y / W;

    cout << "Y = " << Y << endl;
    cout << "W = " << W << endl;
    cout << "Z = " << Z << endl;

    return 0;
}
