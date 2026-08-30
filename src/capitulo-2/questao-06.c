#include <stdio.h>

int main() {
    float minutos, horas, segundos, minutos_resto;

    printf("Digite o tempo em minutos: ");
    scanf("%f", &minutos);

    horas = minutos / 60;
    minutos_resto = minutos - (int)horas*60;
    segundos = (minutos_resto - (int)minutos_resto) * 60;

    printf("%.0f h %.0f min %.1f s", horas, minutos_resto, segundos);

    return 0;
}