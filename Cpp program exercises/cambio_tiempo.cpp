int obtenerHoras(int s){ return s / 3600; }
int obtenerMin(int s){ return (s % 3600) / 60; }
int obtenerSeg(int s){ return s % 60; }

void convertirTiempo() {
    int s; 
    cin >> s;

    cout << obtenerHoras(s) << "h "
         << obtenerMin(s) << "m "
         << obtenerSeg(s) << "s\n";
}
