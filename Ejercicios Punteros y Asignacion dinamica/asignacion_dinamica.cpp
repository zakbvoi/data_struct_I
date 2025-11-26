#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cantidad de numeros: ";
    cin >> N;

    int *v = new int[N];

    for (int i = 0; i < N; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> v[i];
    }

    int mn = v[0], mx = v[0];
    long long suma = 0;

    for (int i = 0; i < N; i++) {
        suma += v[i];
        if (v[i] < mn) mn = v[i];
        if (v[i] > mx) mx = v[i];
    }

    cout << "Mayor: " << mx << endl;
    cout << "Menor: " << mn << endl;
    cout << "Promedio: " << (double)suma / N << endl;

    delete[] v;
    return 0;
}
