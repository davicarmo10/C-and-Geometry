
    Três números reais representando os coeficientes da equação da circunferência na forma (x - h)^2 + (y - k)^2 = r^2.

Método de Cálculo

    Equações do Sistema:
        Use as coordenadas dos pontos para montar o sistema de equações.
        Resolva o sistema para encontrar os valores de h, k e r.
    Fórmulas:

    scss

    D = 2 * (x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))
    h = ((x1^2 + y1^2)(y2 - y3) + (x2^2 + y2^2)(y3 - y1) + (x3^2 + y3^2)(y1 - y2)) / D
    k = ((x1^2 + y1^2)(x3 - x2) + (x2^2 + y2^2)(x1 - x3) + (x3^2 + y3^2)(x2 - x1)) / D
    r = sqrt((x1 - h)^2 + (y1 - k)^2)

Exemplo de Entrada

0 0
0 2
2 0

Exemplo de Saída

1.00 1.00 1.41

