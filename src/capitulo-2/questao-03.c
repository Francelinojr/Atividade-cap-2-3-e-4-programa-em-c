#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("a: %d\tb: %d\n", a, b);

    // uma operação de soma e duas subtrações resolvem o problema.
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\tb: %d\n", a, b);
    return 0;
}
