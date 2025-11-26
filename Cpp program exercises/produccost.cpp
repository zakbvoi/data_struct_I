#include <iostream>
using namespace std;

int main() {
    string desc;
    int unidades;

    cout << "Descripcion: ";
    cin >> desc;
    cout << "Unidades producidas: ";
    cin >> unidades;

    double costo = unidades * 3.5 + 10000;

    cout << "Costo de produccion = " << costo << endl;
    return 0;
}
