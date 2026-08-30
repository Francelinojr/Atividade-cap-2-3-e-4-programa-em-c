#include <stdio.h>
#include <math.h>

int main() {
    float financiamento, prestacao, juros, an;
    int n;
    
    printf("Digite o valor do financiamento: ");
    scanf("%f", &financiamento);
    
    printf("Digite o número de prestações: ");
    scanf("%d", &n);
    
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &juros);
    juros /= 100; // Converte a taxa de juros para decimal
    
    an = ((pow((1 + juros), n)) - 1) / (juros * pow((1 + juros), n));
    prestacao = financiamento / an;
    
    printf("Valor da prestação: R$ %.2f\n", prestacao);
    
    return 0;
}