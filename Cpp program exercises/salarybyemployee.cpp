#include <iostream>
using namespace std;

int main() {
    string nombre;
    int tipo;
    double horas, pagoHora;

    cout << "Nombre: "; cin >> nombre;
    cout << "Tipo de empleado (1-4): "; cin >> tipo;
    cout << "Horas trabajadas: "; cin >> horas;
    cout << "Pago por hora: "; cin >> pagoHora;

    double sueldo = 0;

    if (horas <= 40) {
        sueldo = horas * pagoHora;
    } else {
        double extra = horas - 40;
        double factor;

        if (tipo == 1) factor = 1.5;
        else if (tipo == 2) factor = 2.0;
        else if (tipo == 3) factor = 2.5;
        else factor = 3.0;

        sueldo = 40 * pagoHora + extra * pagoHora * factor;
    }

    cout << "Sueldo a pagar = " << sueldo << endl;
    return 0;
}
