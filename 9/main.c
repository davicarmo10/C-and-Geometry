/*questao 9*/
#include <stdio.h>
#include <math.h>

int main() {
    // Declarar variáveis para armazenar as coordenadas dos pontos
    double x1, y1, x2, y2, x3, y3;
    
    // Ler as coordenadas dos três pontos
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Digite as coordenadas do terceiro ponto (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    // Calcular o determinante D
    double D = 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    
    // Calcular h
    double h = ((x1 * x1 + y1 * y1) * (y2 - y3) + (x2 * x2 + y2 * y2) * (y3 - y1) + (x3 * x3 + y3 * y3) * (y1 - y2)) / D;
    
    // Calcular k
    double k = ((x1 * x1 + y1 * y1) * (x3 - x2) + (x2 * x2 + y2 * y2) * (x1 - x3) + (x3 * x3 + y3 * y3) * (x2 - x1)) / D;
    
    // Calcular o raio r
    double r = sqrt((x1 - h) * (x1 - h) + (y1 - k) * (y1 - k));
    
    // Exibir os resultados
    printf("%.2lf %.2lf %.2lf\n", h, k, r);
    
    return 0;
}
