#include <stdio.h>

int main() {
    int Num, i, n, Mult;
    Num = 1;

    while (Num != -1) {
        printf("Digite o numero (-1 para encerrar)\n");
        scanf("%d", &Num);
        n = Num;
        printf("Decomposicao em fatores primos de %d:\n", Num);
        i = 2;

        while (n > 1) {
            Mult = 0;

            while (n % i == 0) {
                n = n / i;
                Mult = Mult + 1;
            }

            if (Mult > 0) {
                printf("%d com multiplicidade %d\n", i, Mult);
            }

            i = i + 1;
        }
    }

    return 0;
}