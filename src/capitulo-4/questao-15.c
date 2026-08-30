#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Digite o valor de n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n - 2; i++) {
        for (j = i + 1; j <= n - 1; j++) {
            for (k = j + 1; k <= n; k++) {
                printf("{%d, %d, %d}\n", i, j, k);
            }
        }
    }

    return 0;
}