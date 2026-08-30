#include <stdio.h>

int main() {
    int x, y, a, b, Mmc;

    printf("Digite os dois numeros:\n");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    if (x < y) {
        a = y;
        b = x;
    }

    Mmc = a;

    while (Mmc % b != 0)
        Mmc = Mmc + a;

    printf("mmc(%d, %d) = %d\n", x, y, Mmc);

    return 0;
}
