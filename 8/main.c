/*questao 8*/
#include <stdio.h>

int main() {
    // Declaração das variáveis
    double matrizTransformacao[2][2];
    int n;
    double pontos[100][2]; // Assumindo que o número máximo de pontos é 100

    // Leitura da matriz de transformação
    printf("Digite os 4 números reais para a matriz de transformação 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &matrizTransformacao[i][j]);
        }
    }

    // Leitura do número de pontos
    printf("Digite o número de pontos:\n");
    scanf("%d", &n);

    // Leitura dos pontos
    printf("Digite os %d pontos:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &pontos[i][0], &pontos[i][1]);
    }

    // Aplicar a transformação e exibir os resultados
    printf("Pontos transformados:\n");
    for (int i = 0; i < n; i++) {
        double x = pontos[i][0];
        double y = pontos[i][1];
        double xTransformado = matrizTransformacao[0][0] * x + matrizTransformacao[0][1] * y;
        double yTransformado = matrizTransformacao[1][0] * x + matrizTransformacao[1][1] * y;
        printf("%.2f %.2f\n", xTransformado, yTransformado);
    }

    return 0;
}
