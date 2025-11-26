#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    cout << "Ingrese a b c d e f: ";
    cin >> a >> b >> c >> d >> e >> f;

    double det = a*e - b*d;

    if (det != 0) {
        double x = (c*e - b*f) / det;
        double y = (a*f - c*d) / det;

        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } else {
        cout << "El sistema no tiene solucion." << endl;
    }

    return 0;
}
