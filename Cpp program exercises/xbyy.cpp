#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Ingrese X: "; cin >> x;

    if (x < 0)
        y = 3*x + 6;
    else
        y = x*x + 6;

    cout << "Y = " << y << endl;
    return 0;
}
