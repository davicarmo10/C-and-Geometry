#Questão 1: Determinante de uma Matriz

##Escreva um programa que calcule o determinante de uma matriz quadrada de ordem n. O determinante é uma função que associa um único número a uma matriz quadrada, fundamental em várias áreas da álgebra linear.

##Entrada

    Um inteiro n (1 ≤ n ≤ 10) representando a ordem da matriz.
    n linhas com n números reais, representando os elementos da matriz.

##Saída

    O determinante da matriz, impresso com duas casas decimais.

##Método de Cálculo

Utilize a expansão por cofatores para calcular o determinante recursivamente.

    Base da Recursão:
        Para uma matriz 1x1, o determinante é o próprio elemento.
        Para uma matriz 2x2, o determinante é det(A) = a11 * a22 - a12 * a21.
    Expansão por Cofatores:
        Para matrizes de ordem superior, use a fórmula: det(A) = Σ (-1)^i * A[0][i] * det(M_i), onde M_i é a submatriz resultante de excluir a primeira linha e a i-ésima coluna de A.
        Crie uma função para obter submatrizes menores.

##Exemplo de Entrada

3
1 2 3
4 5 6
7 8 9

##Exemplo de Saída

0.00