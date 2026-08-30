#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}
