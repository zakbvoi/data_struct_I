void totalPagar() {
    string nombre;
    double precio;
    int cantidad;

    cin >> nombre >> precio >> cantidad;

    double total = precio * cantidad;
    double desc = 0;

    if (cantidad <= 10) desc = 0;
    else if (cantidad <= 20) desc = 0.10;
    else if (cantidad <= 50) desc = 0.20;
    else desc = 0.25;

    double totalFinal = total - total*desc;

    cout << "Producto: " << nombre << "\n";
    cout << "Total a pagar = " << totalFinal << endl;
}
