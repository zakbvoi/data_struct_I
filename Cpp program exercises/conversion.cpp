#include <iostream>
using namespace std;

int main() {
    double pies;
    cout << "Pies: ";
    cin >> pies;

    double yardas = pies / 3.0;
    double pulgadas = pies * 12.0;
    double cm = pulgadas * 2.54;
    double metros = cm / 100.0;

    cout << "Yardas: " << yardas << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Centimetros: " << cm << endl;
    cout << "Metros: " << metros << endl;

    return 0;
}
