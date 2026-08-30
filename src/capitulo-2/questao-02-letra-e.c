#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    int num_lados;
    float raio, perimetro;

    printf("Digite o numero de lados do poligono regular: ");
    scanf("%d", &num_lados);

    printf("Digite o raio da circunferencia inscrita: ");
    scanf("%f", &raio);

    perimetro = 2 * num_lados * raio * sin(PI / num_lados);

    printf("O perimetro do poligono regular inscrito na circunferencia de raio %.2f com %d lados e %.2f.\n", raio, num_lados, perimetro);

    return 0;
}