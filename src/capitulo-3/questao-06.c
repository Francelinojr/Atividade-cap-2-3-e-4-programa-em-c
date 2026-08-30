#include <stdio.h>

int main() {
    float a, b, c, Hip, Cat1, Cat2;

    printf("Digite os comprimentos dos lados: \n");
    scanf("%f %f %f", &a, &b, &c);

    Cat1 = b;
    Cat2 = c;

    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if ((a > b) && (a > c))
            Hip = a;
        else if (b > c) {
            Hip = b;
            Cat1 = a;
        } else {
            Hip = c;
            Cat2 = a;
        }

        if (Hip * Hip == Cat1 * Cat1 + Cat2 * Cat2)
            printf("Triangulo retangulo de hipotenusa %0.2f e catetos %0.2f e %0.2f", Hip, Cat1, Cat2);
        else
            printf("O triangulo de lados %0.2f, %0.2f e %0.2f nao e retangulo", a, b, c);
    } else
        printf("Os numeros dados nao sao comprimentos dos lados de um triangulo");

    return 0;
}
