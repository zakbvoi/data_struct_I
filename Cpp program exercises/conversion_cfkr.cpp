#include <iostream>
using namespace std;

int main() {
    int tipo;
    double t;

    cout << "Tipo de temperatura que ingresará:\n";
    cout << "1 = Fahrenheit\n2 = Celsius\n3 = Kelvin\n4 = Rankine\n";
    cin >> tipo;

    cout << "Ingrese la temperatura: ";
    cin >> t;

    double C, F, K, R;

    if (tipo == 1) {           // Fahrenheit
        F = t;
        C = (F - 32) * 5.0/9.0;
        K = C + 273;
        R = F + 460;
    } 
    else if (tipo == 2) {      // Celsius
        C = t;
        F = C * 9.0/5.0 + 32;
        K = C + 273;
        R = F + 460;
    } 
    else if (tipo == 3) {      // Kelvin
        K = t;
        C = K - 273;
        F = C * 9.0/5.0 + 32;
        R = F + 460;
    } 
    else if (tipo == 4) {      // Rankine
        R = t;
        F = R - 460;
        C = (F - 32) * 5.0/9.0;
        K = C + 273;
    } 
    else {
        cout << "Opcion invalida\n";
        return 0;
    }

    cout << "Celsius: " << C << endl;
    cout << "Fahrenheit: " << F << endl;
    cout << "Kelvin: " << K << endl;
    cout << "Rankine: " << R << endl;

    return 0;
}
