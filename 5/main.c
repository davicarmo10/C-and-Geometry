/*questao 5*/
#include <stdio.h>

int main() {
    double a1, b1, c1, a2, b2, c2;
    double x, y;
    double denominator;

    // Leitura dos coeficientes das equações das retas
    printf("Digite os coeficientes da primeira reta (a1 b1 c1): ");
    scanf("%lf %lf %lf", &a1, &b1, &c1);
    printf("Digite os coeficientes da segunda reta (a2 b2 c2): ");
    scanf("%lf %lf %lf", &a2, &b2, &c2);

    // Cálculo do denominador
    denominator = a1 * b2 - a2 * b1;

    // Verifica se as retas são paralelas
    if (denominator == 0) {
        printf("As retas são paralelas e não se intersectam.\n");
    } else {
        // Cálculo das coordenadas do ponto de interseção
        x = (b2 * c1 - b1 * c2) / denominator;
        y = (a1 * c2 - a2 * c1) / denominator;

        // Exibição do ponto de interseção
        printf("Ponto de intersecao: (%.2lf, %.2lf)\n", x, y);
    }

    return 0;
}
