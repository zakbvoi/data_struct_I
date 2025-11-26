#include <iostream>
using namespace std;

int FATORES(int vec[], int n, int *x) {
    int count = 0;
    int num = n;

    for (int i = 2; i * i <= num; i++) {
        while (n % i == 0) {
            if (count < 10) vec[count] = i;
            count++;
            n /= i;
        }
    }

    if (n > 1) {  
        if (count < 10) vec[count] = n;
        count++;
    }

    *x = count;

    return (count > 10) ? 1 : 0;
}
