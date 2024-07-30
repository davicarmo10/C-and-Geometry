Questão 2: Multiplicação de Matrizes

Implemente um programa que leia duas matrizes A (de ordem m x n) e B (de ordem n x p) e calcule a matriz resultante da multiplicação C = A * B.

Entrada

    Dois inteiros m e n.
    m linhas com n números reais representando os elementos da matriz A.
    Dois inteiros n e p.
    n linhas com p números reais representando os elementos da matriz B.

Saída

    A matriz resultante C de ordem m x p.

Método de Cálculo

    Verificação da Multiplicabilidade:
        A multiplicação de matrizes é possível se o número de colunas de A for igual ao número de linhas de B.
    Cálculo do Elemento C[i][j]:
        Use a fórmula: C[i][j] = Σ (A[i][k] * B[k][j]) para k de 0 a n-1.
        Itere sobre cada elemento da matriz resultante C e calcule sua soma.

Exemplo de Entrada

2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12

Exemplo de Saída

58 64
139 154