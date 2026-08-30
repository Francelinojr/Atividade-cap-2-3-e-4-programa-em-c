#include <stdio.h>
#include <math.h>

int main()
{
    float valor_mercadoria, entrada, prestacao;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor_mercadoria);

    entrada = ceil(valor_mercadoria * 0.5);
    prestacao = ceil((valor_mercadoria - entrada) / 2);

    printf("Valor da entrada: R$ %.2f\n", entrada);
    printf("Valor das duas prestacoes: R$ %.2f\n", prestacao);

    return 0;
}