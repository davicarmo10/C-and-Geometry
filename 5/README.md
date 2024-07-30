Questão 5: Interseção de Retas no Plano

Escreva um programa que determine o ponto de interseção de duas retas no plano, dadas suas equações na forma ax + by + c = 0.

Entrada

    Seis números reais representando os coeficientes das equações das duas retas.

Saída

    Dois números reais representando o ponto de interseção.

Método de Cálculo

    Equações das Retas:
        Reta 1: a1x + b1y + c1 = 0
        Reta 2: a2x + b2y + c2 = 0
    Sistema de Equações:
        Resolva o sistema de equações lineares formado pelas duas retas.
        Utilize a fórmula de Cramer:

        markdown

        x = (b2*c1 - b1*c2) / (a1*b2 - a2*b1)
        y = (a1*c2 - a2*c1) / (a1*b2 - a2*b1)

Exemplo de Entrada

1 -1 1
1 1 -3

Exemplo de Saída

1.00 -2.00
