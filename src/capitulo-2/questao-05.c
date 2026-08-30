#include <stdio.h>

int main() {
    int tempoSeg, horas, minutos, segundos;

    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &tempoSeg);

    horas = tempoSeg / 3600; 
    tempoSeg %= 3600; 
    minutos = tempoSeg / 60; 
    segundos = tempoSeg % 60; 

    printf("%d h %d min %d s", horas, minutos, segundos);

    return 0;
}