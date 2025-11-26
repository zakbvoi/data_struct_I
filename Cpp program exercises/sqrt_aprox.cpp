void raizAprox() {
    double N, errorMax;
    cin >> N >> errorMax;

    double x = N;
    double y;

    do {
        y = (x + N/x) / 2;
        if (fabs(y - x) <= errorMax) break;
        x = y;
    } while (true);

    cout << "Aproximación = " << y << endl;
}
