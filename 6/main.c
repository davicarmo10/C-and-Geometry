/*questao 6*/
#include <stdio.h>
#include <math.h>

int main() {
    // Declaração das variáveis para as coordenadas dos pontos
    double x1, y1, z1, x2, y2, z2;

    // Leitura das coordenadas dos pontos
    printf("Digite as coordenadas do ponto P1 (x1, y1, z1): ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Digite as coordenadas do ponto P2 (x2, y2, z2): ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    // Cálculo da distância euclidiana
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    // Impressão da distância com duas casas decimais
    printf("Distância: %.2f\n", distancia);

    return 0;
}
