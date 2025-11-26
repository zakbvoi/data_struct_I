#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    float e, f, g, h;
    char v[10];
    int x;

    int *p = &a;

    cout << "Recorriendo memoria desde &a:\n";

    for (int i = 0; i < 20; i++) {
        cout << "Direccion: " << p << "  Valor(int interpretado): " << *p << endl;

        if (p == &a) cout << "-> Es la direccion de a\n";
        if (p == &b) cout << "-> Es la direccion de b\n";
        if (p == &c) cout << "-> Es la direccion de c\n";
        if (p == &d) cout << "-> Es la direccion de d\n";
        if (p == (int*)&e) cout << "-> Coincide con e (reinterpretado)\n";

        p++; 
    }

    return 0;
}
