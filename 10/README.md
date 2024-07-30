Questão 10: Projeção Ortogonal de um Vetor

Crie um programa que calcule a projeção ortogonal de um vetor sobre outro vetor no espaço tridimensional.

Entrada

    Seis números reais representando os componentes dos vetores A e B.

Saída

    Três números reais representando o vetor projeção.

Método de Cálculo

Use a fórmula da projeção de A sobre B: proj_B(A) = (A . B / B . B) * B.

    Produto Escalar:
        Calcule A . B = A1 * B1 + A2 * B2 + A3 * B3.
        Calcule B . B = B1^2 + B2^2 + B3^2.
    Projeção:
        Calcule proj_B(A) = (A . B / B . B) * (B1, B2, B3).

Exemplo de Entrada

1 2 3
4 5 6

Exemplo de Saída

2.08 2.60 3.12