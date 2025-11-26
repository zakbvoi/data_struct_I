#include <iostream>
using namespace std;

int main() {
    double ancho, largo, costo;
    cout << "Ancho (m): "; cin >> ancho;
    cout << "Largo (m): "; cin >> largo;
    cout << "Costo por m2: "; cin >> costo;

    double total = ancho * largo * costo;

    cout << "Costo total = " << total << endl;
    return 0;
}
