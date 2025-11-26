#include <iostream>
using namespace std;

int main() {
    double m;
    const double c = 2.99792458e10;

    cout << "Masa (g): "; cin >> m;

    double E = m * c * c;

    cout << "Energia producida = " << E << " ergios\n";
    return 0;
}
