/*questao 2*/
#include <stdio.h>

#define MAX 100  // Limite máximo para as dimensões das matrizes

int main() {
    int m, n, p;
    double A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    // Leitura das dimensões e elementos da matriz A
    printf("Digite as dimensões da matriz A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Digite os elementos da matriz A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Leitura das dimensões e elementos da matriz B
    printf("Digite as dimensões da matriz B (n p): ");
    scanf("%d %d", &n, &p);
    printf("Digite os elementos da matriz B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    // Inicializa a matriz C com zeros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0.0;
        }
    }

    // Cálculo da matriz resultante C = A * B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Exibição da matriz resultante C
    printf("Matriz resultante C (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%.2lf ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
