#include <stdio.h>

long int SomaDivisoresMenores(long int n) {
    int i;
    long int s = 1;
    long int m = n / 2;
    for (i = 2; i <= m; i++)
        if (n % i == 0)
            s = s + i;
    return s;
}

int main() {
    const long int m = 10000;
    long int j, x, y;
    printf("Amigos menores que %ld \n", m);
    for (j = 2; j < m; j++) {
        x = SomaDivisoresMenores(j);
        if (j < x && j == SomaDivisoresMenores(x))
            printf("%-10ld %-20ld\n", j, x);
    }
    return 0;
}