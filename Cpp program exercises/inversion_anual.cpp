void inversionAnual() {
    double inversion, tasa;
    char op;

    cin >> inversion >> tasa; // tasa ej: 0.01

    double saldo = 0;

    do {
        for (int mes = 1; mes <= 12; mes++) {
            saldo += inversion;
            saldo += saldo * tasa;
        }
        cout << "Saldo tras 1 año: " << saldo << endl;

        cout << "Desea procesar un año más? (S/N): ";
        cin >> op;

    } while (op == 'S' || op == 's');
}
