#include <iostream>
using namespace std;

int main() {
    string nombre;
    double c1, c2, c3, c4;

    cout << "Nombre: ";
    cin >> nombre;
    cout << "Notas: "; 
    cin >> c1 >> c2 >> c3 >> c4;

    double final = c1*0.30 + c2*0.20 + c3*0.10 + c4*0.40;

    cout << "Nombre: " << nombre << endl;
    cout << "Promedio final = " << final << endl;

    return 0;
}
