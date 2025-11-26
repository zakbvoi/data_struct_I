void contarDigitos() {
    int n; 
    cin >> n;

    if (n == 0) {
        cout << "1\n";
        return;
    }

    int c = 0;
    while (n > 0) {
        n /= 10;
        c++;
    }
    cout << c;
}
