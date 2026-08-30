#include <stdio.h>

int main() {
    int n, i, Ant1 = 1, Ant2 = 0, Termo = 1;

    printf("Digite n: \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n deve ser maior que 0! \n");
        return 0;
    }

    if (n == 1) {
        printf("O termo de ordem 1 da sequencia de Fibonacci e' %d \n", Termo);
        return 0;
    }

    for (i = 2; i <= n; i++) {
        Termo = Ant1 + Ant2;
        Ant2 = Ant1;
        Ant1 = Termo;
    }

    printf("O termo de ordem %d da sequencia de Fibonacci e' %d \n", n, Termo);

    return 0;
}