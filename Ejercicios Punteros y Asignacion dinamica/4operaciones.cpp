#include <climits>

int comparar(int a, int b, int *suma, int *prod) {
    long long S = (long long)a + b;
    long long P = (long long)a * b;

    if (S > INT_MAX || S < INT_MIN || P > INT_MAX || P < INT_MIN)
        return -1;

    *suma = (int)S;
    *prod = (int)P;

    if (a == b) return 1;
    return 0;
}
