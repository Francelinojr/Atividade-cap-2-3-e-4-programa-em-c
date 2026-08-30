#include <stdio.h>

int main() {
    int i = 0;
    float Soma = 0, k = 1;
    
    while (k != -1) {
        printf("Digite o valor de k (-1 p/ encerrar) \n");
        scanf("%f", &k);
        
        Soma = 0;
        i = 0;
        
        while (Soma <= k) {
            i++;
            Soma += 1.0/i;
        }
        
        if (k != -1) {
            printf("O menor inteiro n tal que a soma dos n primeiros termos da serie harmonica e' maior que %.2f e' %d \n", k, i);
        }
    }
    
    return 0;
}
