#include <stdio.h>

int main() {
    int n, i, Soma = 0;
    printf("Digite o valor de n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        Soma = Soma + i * i;
    }
    printf("A soma dos quadrados dos %d primeiros numeros naturais e %d\n", n, Soma);
    return 0;
}