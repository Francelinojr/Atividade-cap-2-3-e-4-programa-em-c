#include <stdio.h>

int main() {
    int h1, min1, s1, h2, min2, s2, h, min, s;

    printf("Digite o instante inicial (horas, minutos e segundos)\n");
    scanf("%d %d %d", &h1, &min1, &s1);
    
    printf("Digite o instante final (horas, minutos e segundos)\n");
    scanf("%d %d %d", &h2, &min2, &s2);
    
    h = h2 - h1;
    min = min2 - min1;
    s = s2 - s1;
    
    if ((h < 0) || ((h == 0) && (min < 0)) || ((h == 0) && (min == 0) && (s < 0))) {
        printf("Dados invalidos! O segundo instante é anterior ao primeiro\n");
    } else {
        if (s < 0) {
            min = min - 1;
            s = s + 60;
        }
        if (min < 0) {
            h = h - 1;
            min = min + 60;
        }
        printf("Entre os instantes %d h %d min %d s e %d h %d min %d s passaram-se %d h %d min %d s\n", h1, min1, s1, h2, min2, s2, h, min, s);
    }
    
    return 0;
}