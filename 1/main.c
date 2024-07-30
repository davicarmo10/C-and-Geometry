/*questao 1*/
#include <stdio.h>

#define MAX 10  // Limite máximo para a ordem da matriz

// Função para calcular o determinante de uma matriz de ordem n
double determinant(double matrix[MAX][MAX], int n) {
    double det = 0;

    // Caso base: matriz 1x1
    if (n == 1) {
        return matrix[0][0];
    }

    // Caso base: matriz 2x2
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    double subMatrix[MAX][MAX];

    // Expansão por cofatores
    for (int x = 0; x < n; x++) {
        int sub_i = 0;
        for (int i = 1; i < n; i++) {
            int sub_j = 0;
            for (int j = 0; j < n; j++) {
                if (j == x)
                    continue;
                subMatrix[sub_i][sub_j] = matrix[i][j];
                sub_j++;
            }
            sub_i++;
        }
        // Calcula o determinante recursivamente
        double subDet = determinant(subMatrix, n - 1);
        // Signo alternado (-1)^(coluna) * elemento * determinante da submatriz
        det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * subDet;
    }

    return det;
}

int main() {
    int n;
    double matrix[MAX][MAX];

    // Solicita a entrada da ordem da matriz
    printf("Digite a ordem da matriz (1 a %d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        printf("Erro: Entrada inválida. Certifique-se de fornecer um número entre 1 e %d.\n", MAX);
        return 1;  // Saída com código de erro
    }

    // Solicita a entrada dos elementos da matriz
    printf("Digite os elementos da matriz, linha por linha:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            if (scanf("%lf", &matrix[i][j]) != 1) {
                printf("Erro: Entrada inválida. Certifique-se de fornecer um número real.\n");
                return 1;  // Saída com código de erro
            }
        }
    }

    // Exibe a matriz inserida
    printf("\nMatriz inserida:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2lf ", matrix[i][j]);
        }
        printf("\n");
    }

    // Cálculo do determinante
    double det = determinant(matrix, n);

    // Saída: determinante com duas casas decimais
    printf("\nDeterminante da matriz: %.2lf\n", det);

    return 0;
}
