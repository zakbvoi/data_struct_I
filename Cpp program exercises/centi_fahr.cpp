#include <iostream>
using namespace std;

int main() {
    double C;
    cout << "Centigrados: ";
    cin >> C;

    double F = (9.0/5.0)*C + 32;

    cout << "Fahrenheit = " << F << endl;
    return 0;
}
