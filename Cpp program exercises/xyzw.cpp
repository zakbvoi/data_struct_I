#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z, q, b;

    cout << "Ingrese x: "; cin >> x;
    cout << "Ingrese y: "; cin >> y;
    cout << "Ingrese z: "; cin >> z;
    cout << "Ingrese q: "; cin >> q;
    cout << "Ingrese b: "; cin >> b;

    double numerador = 4 * pow(x,2) * pow(y,2) * (2 * z * q);
    double denominador = 4 * sqrt(x) * pow(b, 0.75);

    double F = numerador / denominador;

    cout << "F = " << F << endl;

    return 0;
}
