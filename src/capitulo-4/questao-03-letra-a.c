#include <stdio.h>

int main() {
    float Soma, Num, Den;
    int n, i;

    printf("Digite o valor de n: \n");
    scanf("%d", &n);

    Num = 1;
    Den = 2;
    Soma = 0.5;

    for (i = 1; i < n; i++) {
        Num = Num + 2;
        Den = Den + 3;
        Soma = Soma + Num/Den;
    }

    printf("A soma dos %d primeiros numeros da sequencia dada e %f \n", n, Soma);
    return 0;
}