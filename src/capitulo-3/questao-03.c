#include <stdio.h>
#include <math.h>

int main() {
    int Num, RaizInteira;
    float RaizReal, ParteFrac;

    printf("Digite um numero: ");
    scanf("%d", &Num);

    RaizReal = sqrt(Num);
    RaizInteira = (int) RaizReal;
    ParteFrac = RaizReal - RaizInteira;

    if (ParteFrac == 0) {
        printf("%d eh um quadrado perfeito de raiz igual a %d\n", Num, RaizInteira);
    } else {
        printf("%d nao eh um quadrado perfeito\n", Num);
    }

    return 0;
}