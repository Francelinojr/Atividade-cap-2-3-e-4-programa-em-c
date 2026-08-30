#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite os comprimentos dos lados: \n");
    scanf("%f %f %f", &a, &b, &c);
    
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if ((a == b) && (b == c)) {
            printf("O triangulo de lados %0.2f, %0.2f e %0.2f e equilatero", a, b, c);
        } else if ((a == b) || (a == c) || (b == c)) {
            printf("O triangulo de lados %0.2f, %0.2f e %0.2f e isosceles", a, b, c);
        } else {
            printf("O triangulo de lados %0.2f, %0.2f e %0.2f e escaleno", a, b, c);
        }
    } else {
        printf("Os numeros dados nao sao comprimentos dos lados de um triangulo");
    }
    
    return 0;
}
