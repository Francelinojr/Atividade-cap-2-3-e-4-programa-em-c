#include <stdio.h>

int main() {
    float Bim1, Bim2, Bim3, Bim4, MediaBimestral, NotaMinima;
    printf("Digite as notas bimestrais:\n");
    scanf("%f %f %f %f", &Bim1, &Bim2, &Bim3, &Bim4);
    MediaBimestral = (Bim1 + Bim2 + Bim3 + Bim4) / 4;
    if ((MediaBimestral >= 5) && (MediaBimestral < 7)) {
        NotaMinima = (55 - 6 * MediaBimestral) / 4;
        printf("O aluno com notas bimestrais %.2f, %.2f, %.2f e %.2f precisa na final de %.2f\n", Bim1, Bim2, Bim3, Bim4, NotaMinima);
    } else if (MediaBimestral >= 7) {
        printf("O aluno com notas bimestrais %.2f, %.2f, %.2f e %.2f esta aprovado\n", Bim1, Bim2, Bim3, Bim4);
    } else {
        printf("O aluno com notas bimestrais %.2f, %.2f, %.2f e %.2f nao esta na prova final\n", Bim1, Bim2, Bim3, Bim4);
    }
    return 0;
}