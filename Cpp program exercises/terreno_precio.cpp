#include <iostream>
using namespace std;

int main() {
    double largo, ancho, precio_m2;
    cout << "Largo: "; cin >> largo;
    cout << "Ancho: "; cin >> ancho;
    cout << "Precio por metro cuadrado: "; cin >> precio_m2;

    double area = largo * ancho;
    double precio = area * precio_m2;

    if (area > 400) {
        precio *= 0.9; // Descuento del 10%
    }

    cout << "Precio final del terreno = " << precio << endl;
    return 0;
}
