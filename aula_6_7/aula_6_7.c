#include <stdio.h>

#define pi 3.1416

int main()
{
    // Contas básicas:
    int raio = 5 + 2;
    double area = 2 * pi * (raio * raio);
    printf("%lf", area);

    // Usando divisão (/):
    int denominadorInt = 6;
    int numeradorInt = 4;
    int resultadoInt = numeradorInt / denominadorInt;
    printf("\n Divisao int: %i", resultadoInt);

    float denominadorFloat = 6.0;
    float numeradorFloat = 4.0;
    float resultadoFloat = denominadorFloat / numeradorFloat;
    printf("\n Divisao float: %f", resultadoFloat);

    // Incremento (a++ e ++a):
    int primeiroIncremento = 1;
    int x1 = primeiroIncremento++ * 2; // caso a++

    int segundoIncremento = 2;
    int x2 = ++segundoIncremento * 2; // caso ++a

    printf("\n Caso a++: x= %i, a=%i", x1, primeiroIncremento);
    printf("\n Caso ++a: x=%i, a=%i", x2, segundoIncremento);

    // Decremento (a-- e --a):
    int primeiroDecremento = 1;
    int X1 = primeiroDecremento-- * 2; // caso a++

    int segundoDecremento = 1;
    int X2 = --segundoDecremento * 2; // caso ++a

    printf("\n Caso a--: x= %i, a=%i", X1, primeiroDecremento);
    printf("\n Caso --a: x=%i, a=%i", X2, segundoDecremento);

    return 0;
}
