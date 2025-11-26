#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double w;
    const double pi = 3.141592653589793;

    cout << "Ingrese w: ";
    cin >> w;

    double Z = (1 / sqrt(2 * pi)) * exp(-(w * w) / 2);

    cout << "Z = " << Z << endl;

    return 0;
}
