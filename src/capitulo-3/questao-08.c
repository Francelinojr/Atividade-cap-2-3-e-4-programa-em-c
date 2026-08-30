#include <stdio.h>

int main() {
    int DiaNasc, MesNasc, AnoNasc, DiaAtual, MesAtual, AnoAtual, Anos, Meses, Dias;
    
    printf("Digite a data do nascimento:\n");
    scanf("%d %d %d", &DiaNasc, &MesNasc, &AnoNasc);
    
    printf("Digite a data de hoje:\n");
    scanf("%d %d %d", &DiaAtual, &MesAtual, &AnoAtual);
    
    Anos = AnoAtual - AnoNasc;
    Meses = MesAtual - MesNasc;
    Dias = DiaAtual - DiaNasc;
    
    if ((Anos < 0) || ((Anos == 0) && (Meses < 0)) || ((Anos == 0) && (Meses == 0) && (Dias < 0))) {
        printf("Data de nascimento invalida\n");
    } else {
        if (Meses < 0) {
            Anos--;
            Meses += 12;
        }
        if (Dias < 0) {
            if (Meses > 0) {
                Meses--;
            } else {
                Anos--;
                Meses += 11;
            }
            switch (MesNasc) {
                case 2:
                    if (AnoAtual % 4 == 0) {
                        Dias += 29;
                    } else {
                        Dias += 28;
                    }
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    Dias += 30;
                    break;
                default:
                    Dias += 31;
            }
        }
        printf("Idade = %d ano(s), %d mes(es) e %d dia(s)\n", Anos, Meses, Dias);
    }
    return 0;
}