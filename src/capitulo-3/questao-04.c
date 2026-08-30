#include <stdio.h>

int main() {
    float a, b, c, maior;

    printf("Digite três números: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = a;
    if (b > a && b > c)
        maior = b;
    else if (c > a && c > b)
        maior = c;

    printf("O maior dos números %.2f, %.2f e %.2f é %.2f\n", a, b, c, maior);

    return 0;
}