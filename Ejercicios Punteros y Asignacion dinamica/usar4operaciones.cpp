#include <iostream>
using namespace std;

int comparar(int, int, int*, int*);

int main() {
    int a, b, s, p;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    int r = comparar(a, b, &s, &p);

    if (r == -1) cout << "Overflow en suma o producto.\n";
    else {
        cout << ((r == 1) ? "Son iguales\n" : "Son diferentes\n");
        cout << "Suma = " << s << endl;
        cout << "Producto = " << p << endl;
    }

    return 0;
}
