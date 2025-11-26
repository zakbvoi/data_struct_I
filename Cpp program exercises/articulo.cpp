#include <iostream>
using namespace std;

int main() {
    string art;
    double costo;

    cout << "Articulo: "; cin >> art;
    cout << "Costo: "; cin >> costo;

    double utilidad = costo * 1.5;
    double impuesto = (costo + utilidad) * 0.19;
    double venta = costo + utilidad + impuesto;

    cout << "Utilidad: " << utilidad << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Precio de venta: " << venta << endl;

    return 0;
}
