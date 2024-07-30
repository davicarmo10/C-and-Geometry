/*questao 4*/
#include <stdio.h>

int main() {
    double Ax, Ay, Az, Bx, By, Bz;
    double Cx, Cy, Cz;

    // Leitura dos componentes dos vetores A e B
    printf("Digite os componentes do vetor A (Ax Ay Az): ");
    scanf("%lf %lf %lf", &Ax, &Ay, &Az);
    printf("Digite os componentes do vetor B (Bx By Bz): ");
    scanf("%lf %lf %lf", &Bx, &By, &Bz);

    // Cálculo do produto vetorial
    Cx = Ay * Bz - Az * By;
    Cy = Az * Bx - Ax * Bz;
    Cz = Ax * By - Ay * Bx;

    // Exibição do vetor resultante
    printf("Vetor resultante do produto vetorial: (%.2lf, %.2lf, %.2lf)\n", Cx, Cy, Cz);

    return 0;
}
