#include <iostream>
using namespace std;

int main() {
    double m1, m2, d;
    const double G = 6.673e-8;

    cout << "Masa m1 (g): "; cin >> m1;
    cout << "Masa m2 (g): "; cin >> m2;
    cout << "Distancia d (cm): "; cin >> d;

    double F = G * (m1 * m2) / (d * d);

    cout << "Fuerza gravitacional = " << F << " dinas\n";
    return 0;
}
