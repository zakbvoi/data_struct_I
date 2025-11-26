#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Radianes: ";
    cin >> r;

    double tanv = tan(r);
    double cot = 1.0 / tanv;
    double sec = 1.0 / cos(r);
    double csc = 1.0 / sin(r);

    cout << "Tan: " << tanv << endl;
    cout << "Cot: " << cot << endl;
    cout << "Sec: " << sec << endl;
    cout << "Csc: " << csc << endl;

    return 0;
}
