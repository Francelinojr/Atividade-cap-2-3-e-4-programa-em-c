#include <stdio.h>

int main() {
    float Num, ParteFrac;
    int Arredondamento;

    printf("Digite um numero: ");
    scanf("%f", &Num);

    Arredondamento = (int) Num;
    ParteFrac = Num - Arredondamento;

    if (ParteFrac >= 0.5) {
        Arredondamento = Arredondamento + 1;
    }

    printf("Arredondando %f obtemos %d\n", Num, Arredondamento);

    return 0;
}
