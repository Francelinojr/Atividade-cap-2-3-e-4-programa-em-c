#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, Imag, Real, Delta, x1, x2;

    printf("Digite os coeficientes: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a != 0) {
        Real = -b / (2 * a);
        Delta = b * b - 4 * a * c;
        if (Delta >= 0) {
            Imag = sqrt(Delta) / (2 * a);
            x1 = Real + Imag;
            x2 = Real - Imag;
            printf("As raizes da equacao de coeficientes %.2f, %.2f e %.2f sao %.2f e %.2f ", a, b, c, x1, x2);
        }
        else {
            Imag = sqrt(-Delta) / (2 * a);
            printf("As raizes da equacao de coeficientes %.2f, %.2f e %.2f sao %.2f + %.2fi e %.2f - %.2fi ", a, b, c, Real, Imag, Real, Imag);
        }
    }
    else {
        printf("A equacao nao e do segundo grau");
    }

    return 0;
}
