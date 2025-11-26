#include <iostream>
using namespace std;

int main() {
    double dolares, yen, peseta, libra, sol;

    cout << "Dolares a comprar: "; cin >> dolares;
    cout << "Tipo de cambio yen: "; cin >> yen;
    cout << "Tipo de cambio peseta: "; cin >> peseta;
    cout << "Tipo de cambio libra: "; cin >> libra;
    cout << "Tipo de cambio sol: "; cin >> sol;

    cout << "En yenes: " << dolares * yen << endl;
    cout << "En pesetas: " << dolares * peseta << endl;
    cout << "En libras: " << dolares * libra << endl;
    cout << "En soles: " << dolares * sol << endl;

    return 0;
}
