string U[] = {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};

string convertirCientos(int n){
    if (n < 10) return U[n];
    // aquí agregar decenas / centenas si deseas completarlo totalmente
    return "bloque";
}

void numeroExtenso() {
    long long n;
    cin >> n;

    int millones = n / 1000000;
    int miles = (n % 1000000) / 1000;
    int unidad = n % 1000;

    if (millones > 0) cout << convertirCientos(millones) << " millones ";
    if (miles > 0) cout << convertirCientos(miles) << " mil ";

    cout << convertirCientos(unidad);
}
