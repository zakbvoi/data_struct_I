#include <iostream>
#include <cmath>
using namespace std;

void raicesCuadratica() {
    double a, b, c;
    cin >> a >> b >> c;

    double D = b*b - 4*a*c;

    if (D < 0) {
        cout << "No tiene raices reales\n";
        return;
    }

    double r1 = (-b + sqrt(D)) / (2*a);
    double r2 = (-b - sqrt(D)) / (2*a);

    cout << "Raiz 1 = " << r1 << "\n";
    cout << "Raiz 2 = " << r2 << "\n";
}
