#include <stdio.h>
#include <math.h>

int main() {
    int Num, Fator1, Fator2, r, i;
    Num = 1;
    
    while (Num != -1) {
        printf("Digite o numero (-1 para encerrar)\n");
        scanf("%d", &Num);
        r = sqrt(Num);
        Fator1 = 2;
        
        while ((Num % Fator1 != 0) && (Fator1 <= r)) {
            Fator1 = Fator1 + 1;
        }
        
        if (Fator1 > r) {
            printf("%d é primo\n", Num);
        } else {
            Fator2 = Num/Fator1;
            r = sqrt(Fator2);
            i = 2;
            
            while ((Fator2 % i != 0) && (i <= r)) {
                i = i + 1;
            }
            
            if (i <= r) {
                printf("%d não é produto de dois primos\n", Num);
            } else {
                printf("%d é produto dos primos %d e %d\n", Num, Fator1, Fator2);
            }
        }
    }
    
    return 0;
}