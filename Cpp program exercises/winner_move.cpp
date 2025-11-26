void gato() {
    char T[3][3];
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            cin >> T[i][j];

    // ejemplo: revisar una fila
    for (int i=0;i<3;i++) {
        int X=0, O=0, V=0, pos_j=0;
        for (int j=0;j<3;j++) {
            if (T[i][j]=='X') X++;
            else if (T[i][j]=='O') O++;
            else {V++; pos_j=j;}
        }
        if (X==2 && V==1) {
            cout << "Juega en ("<<i<<","<<pos_j<<") para ganar\n";
            return;
        }
    }
}
