void fibonacci() {
    int n;
    cin >> n;

    long long a = 0, b = 1;
    cout << a << ", " << b;

    for (int i = 3; i <= n+1; i++) {
        long long c = a + b;
        cout << ", " << c;
        a = b;
        b = c;
    }
    cout << endl;
}
