#include <stdio.h>

int main() {
    int invertI, invertJ, i, j;
    
    printf("Numeros com dois algarismos cujo produto nao se altera os algarismos sao invertidos:\n");
    
    for (i = 10; i < 100; i++) {
        invertI = (i % 10) * 10 + (i / 10);
        
        for (j = 10; j < 100; j++) {
            invertJ = (j % 10) * 10 + (j / 10);
            
            if (i * j == invertI * invertJ) {
                printf("%d * %d = %d * %d = %d\n", i, j, invertI, invertJ, i * j);
            }
        }
    }
    
    return 0;
}