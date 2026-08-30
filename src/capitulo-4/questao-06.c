#include <stdio.h>
 
int main() {
    int Mil, Cen, i;
    printf("Numeros xyzt tais (xy + zt)*(xy + zt) = xyzt\n");
    for (i = 1000; i < 10000; i++) {
        Cen = i % 100;
        Mil = i / 100;
        if ((Cen + Mil)*(Cen + Mil) == i)
            printf("%d \n", i);
    }
    return 0;
}
