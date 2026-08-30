#include <stdio.h>

int main() {
    int n, i;
    float Soma = 0;

    printf("Digite o valor de n: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 1)
            Soma = Soma + 1.0/i;
        else
            Soma = Soma - 1.0/i;
    }

    printf("A soma dos %d primeiros numeros da sequencia dada e %f \n", n, Soma);

    return 0;
}
