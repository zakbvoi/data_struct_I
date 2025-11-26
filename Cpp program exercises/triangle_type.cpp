#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cout << "Angulo A: "; cin >> A;
    cout << "Angulo B: "; cin >> B;
    cout << "Angulo C: "; cin >> C;

    if (A + B + C != 180) {
        cout << "No es un triangulo valido" << endl;
    } else if (A == 90 || B == 90 || C == 90) {
        cout << "Triangulo Rectangulo" << endl;
    } else if (A > 90 || B > 90 || C > 90) {
        cout << "Triangulo Obtusangulo" << endl;
    } else {
        cout << "Triangulo Acutangulo" << endl;
    }

    return 0;
}
