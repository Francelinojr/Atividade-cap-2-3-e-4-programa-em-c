#include <stdio.h>

int main() {
    int valor_saque, nota50 = 0, nota10 = 0, nota5 = 0, nota1 = 0;
    
    printf("Digite o valor do saque: ");
    scanf("%d", &valor_saque);
    
    while (valor_saque > 0) {
        if (valor_saque >= 50) {
            valor_saque -= 50;
            nota50++;
        } else if (valor_saque >= 10) {
            valor_saque -= 10;
            nota10++;
        } else if (valor_saque >= 5) {
            valor_saque -= 5;
            nota5++;
        } else {
            valor_saque--;
            nota1++;
        }
    }
    
    printf("Notas de R$50: %d\n", nota50);
    printf("Notas de R$10: %d\n", nota10);
    printf("Notas de R$5: %d\n", nota5);
    printf("Notas de R$1: %d\n", nota1);
    
    return 0;
}