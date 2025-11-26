#include <iostream>
#include <conio.h>
using namespace std;

int copiarHastaEspacio(char*, char*, int);

int main() {
    char frase[30];
    char palabra[30];
    int i = 0;

    cout << "Digite frase (ENTER para terminar):\n";
    char c;

    while ((c = getch()) != '\r' && i < 30) {
        cout << c;
        frase[i++] = c;
    }

    cout << "\n\nPalabras:\n";
    int pos = 0;

    while (pos < i) {
        int len = copiarHastaEspacio(&frase[pos], palabra, i - pos);
        cout << palabra << endl;
        pos += len + 1;
    }

    return 0;
}
