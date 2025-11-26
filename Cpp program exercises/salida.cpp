void salidaPrograma() {
    for (int i = 2; i <= 8; i += 2) {
        for (int j = i; j <= 4; j++) {
            for (int k = 1; k <= j; k += i) {
                cout << i << ", " << j << ", " << k << endl;
            }
        }
    }
}
