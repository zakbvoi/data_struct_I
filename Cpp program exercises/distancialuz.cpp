#include <iostream>
using namespace std;

int main() {
    double t;
    const double c = 300000; // km/s

    cout << "Tiempo (s): ";
    cin >> t;

    double d = c * t;

    cout << "Distancia recorrida = " << d << " km\n";
    return 0;
}
