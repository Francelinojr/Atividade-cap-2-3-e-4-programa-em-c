#include <stdio.h>

int main() {
    int num1, den1, num2, den2, num3, den3;

    printf("Digite a primeira fração (no formato num/den): ");
    scanf("%d/%d", &num1, &den1);

    printf("Digite a segunda fração (no formato num/den): ");
    scanf("%d/%d", &num2, &den2);

    num3 = num1 * den2 + num2 * den1;
    den3 = den1 * den2;

    printf("O resultado da soma das frações %d/%d e %d/%d e %d/%d.\n", num1, den1, num2, den2, num3, den3);

    return 0;
}