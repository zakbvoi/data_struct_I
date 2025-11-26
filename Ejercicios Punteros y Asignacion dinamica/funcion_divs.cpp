int DIVS(int n, int &min, int &max) {
    bool primo = true;
    min = 0;
    max = 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            if (primo) min = i;  
            max = i;
            primo = false;
        }
    }

    return primo ? 0 : 1;
}
