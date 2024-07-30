/*questao 3*/
#include <stdio.h>
#include <math.h>

#define MAX 10  // Limite máximo para o número de equações

// Função para realizar a eliminação de Gauss
void gaussElimination(double matrix[MAX][MAX + 1], int n) {
    for (int i = 0; i < n; i++) {
        // Pivotamento parcial
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(matrix[k][i]) > fabs(matrix[maxRow][i])) {
                maxRow = k;
            }
        }

        // Troca de linha
        for (int k = i; k < n + 1; k++) {
            double temp = matrix[maxRow][k];
            matrix[maxRow][k] = matrix[i][k];
            matrix[i][k] = temp;
        }

        // Verifica se a matriz é singular
        if (fabs(matrix[i][i]) < 1e-10) {
            printf("Erro: sistema com solução única não encontrado.\n");
            return;
        }

        // Eliminação das variáveis
        for (int k = i + 1; k < n; k++) {
            double factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j < n + 1; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }
}

// Função para realizar a substituição regressiva
void backSubstitution(double matrix[MAX][MAX + 1], double solution[MAX], int n) {
    for (int i = n - 1; i >= 0; i--) {
        solution[i] = matrix[i][n];
        for (int j = i + 1; j < n; j++) {
            solution[i] -= matrix[i][j] * solution[j];
        }
        solution[i] /= matrix[i][i];
    }
}

int main() {
    int n;
    double matrix[MAX][MAX + 1], solution[MAX];

    // Leitura do número de equações
    printf("Digite o número de equações: ");
    scanf("%d", &n);

    // Leitura da matriz aumentada
    printf("Digite os elementos da matriz aumentada (%d linhas, %d colunas):\n", n, n + 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Aplica eliminação de Gauss
    gaussElimination(matrix, n);

    // Aplica substituição regressiva
    backSubstitution(matrix, solution, n);

    // Exibe as soluções
    printf("Soluções do sistema:\n");
    for (int i = 0; i < n; i++) {
        printf("x%d = %.2lf\n", i + 1, solution[i]);
    }

    return 0;
}
