#include <stdio.h>

int main() {
    int menor_inteiro, outro_inteiro, maior_multiplo;

    printf("Digite um inteiro: ");
    scanf("%d", &menor_inteiro);

    printf("Digite outro inteiro: ");
    scanf("%d", &outro_inteiro);

    maior_multiplo = (outro_inteiro / menor_inteiro) * menor_inteiro;

    printf("O maior multiplo de %d menor ou igual a %d e %d.\n", menor_inteiro, outro_inteiro, maior_multiplo);

    return 0;
}
