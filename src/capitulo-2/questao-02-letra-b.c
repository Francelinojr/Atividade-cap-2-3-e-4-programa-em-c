#include <stdio.h>

int main() {
    int numero, centenas, dezenas, unidades;

    printf("Digite um numero com tres algarismos: ");
    scanf("%d", &numero);

    centenas = numero / 100;
    dezenas = (numero % 100) / 10;
    unidades = numero % 10;

    printf("O invertido de %d e %d%d%d.\n", numero, unidades, dezenas, centenas);

    return 0;
}