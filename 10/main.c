/*questao 10*/
#include <stdio.h>

int main() {
    // Declaração das variáveis para os componentes dos vetores
    double A1, A2, A3;
    double B1, B2, B3;

    // Leitura dos componentes do vetor A
    printf("Digite os componentes do vetor A (A1 A2 A3):\n");
    scanf("%lf %lf %lf", &A1, &A2, &A3);

    // Leitura dos componentes do vetor B
    printf("Digite os componentes do vetor B (B1 B2 B3):\n");
    scanf("%lf %lf %lf", &B1, &B2, &B3);

    // Calcular o produto escalar A · B
    double produtoEscalarAB = A1 * B1 + A2 * B2 + A3 * B3;

    // Calcular o produto escalar B · B
    double produtoEscalarBB = B1 * B1 + B2 * B2 + B3 * B3;

    // Calcular o fator da projeção
    double fator = produtoEscalarAB / produtoEscalarBB;

    // Calcular a projeção de A sobre B
    double projX = fator * B1;
    double projY = fator * B2;
    double projZ = fator * B3;

    // Exibir a projeção
    printf("Projeção de A sobre B: %.2f %.2f %.2f\n", projX, projY, projZ);

    return 0;
}
