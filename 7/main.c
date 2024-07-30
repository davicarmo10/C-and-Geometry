/*questao 7*/
#include <stdio.h>
#include <math.h> // Para a função fabs()

// Função para calcular a área do triângulo
double calcular_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    // Leitura das coordenadas dos vértices
    printf("Digite as coordenadas do vértice A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Digite as coordenadas do vértice B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Digite as coordenadas do vértice C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    // Cálculo da área
    double area = calcular_area(x1, y1, x2, y2, x3, y3);
    
    // Exibição da área com duas casas decimais
    printf("Área do triângulo: %.2f\n", area);
    
    return 0;
}
