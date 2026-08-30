#include <stdio.h>
#include <math.h>

int main(){
    int Num, NumAlg;
    Num = 1;
    while (Num != -1){
        printf("Digite o numero (-1 p/ encerrar) \n");
        scanf("%d", &Num);
        NumAlg = 1;
        while (pow(10, NumAlg) <= Num)
            NumAlg++;
        printf("%d possui %d algarismo(s) \n", Num, NumAlg);
    }
    return 0;
}