#include <stdio.h>

int main() {
    int num, i, soma, j;
    num = 1;
    
    while (num != -1) {
        printf("Digite o numero (-1 p/ encerrar): \n");
        scanf("%d", &num);
        printf("Numeros perfeitos menores que %d: \n", num);
        
        for (i = 2; i < num; i++) {
            soma = i + 1;
            for (j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    soma = soma + j;
                }
            }
            if (soma == 2 * i) {
                printf("%d \n", i);
            }
        }
    }
    return 0;
}