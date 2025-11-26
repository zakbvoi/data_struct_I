#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char convertirLetra(char l) {
    l = toupper(l);
    if (l=='A'||l=='B'||l=='C') return '2';
    if (l=='D'||l=='E'||l=='F') return '3';
    if (l=='G'||l=='H'||l=='I') return '4';
    if (l=='J'||l=='K'||l=='L') return '5';
    if (l=='M'||l=='N'||l=='Ñ'||l=='O') return '6';
    if (l=='P'||l=='Q'||l=='R'||l=='S') return '7';
    if (l=='T'||l=='U'||l=='V') return '8';
    if (l=='W'||l=='X'||l=='Y'||l=='Z') return '9';
    return '*';
}

int main() {
    string apellido, inicial;
    cout << "Ingrese apellido: ";
    cin >> apellido;
    cout << "Ingrese inicial del nombre: ";
    cin >> inicial;

    string codigo = "";
    for (char c : apellido) {
        codigo += convertirLetra(c);
    }
    codigo += "*";
    codigo += convertirLetra(inicial[0]);
    codigo += "*";

    cout << "Codigo generado: " << codigo << endl;

    // Nota: No hay base de datos para buscar el telefono,
    // así que solo generamos el código correcto.

    return 0;
}
