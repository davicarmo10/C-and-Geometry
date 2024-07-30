Questão 3: Resolução de Sistemas Lineares (Método de Gauss)

Crie um programa que resolva sistemas de equações lineares usando o método de eliminação de Gauss.

Entrada

    Um inteiro n representando o número de equações.
    n linhas com n+1 números reais representando a matriz aumentada do sistema.

Saída

    n números reais representando as soluções do sistema.

Método de Cálculo

    Eliminação de Gauss:
        Transforme a matriz aumentada em uma matriz triangular superior.
        Para cada linha i, elimine as entradas abaixo do pivô (primeiro elemento não nulo da linha) fazendo combinações lineares das linhas.
    Substituição Regressiva:
        Resolva o sistema a partir da última linha até a primeira, substituindo os valores encontrados.

Exemplo de Entrada

3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3

Exemplo de Saída

2.00 -3.00 1.00

