#include <stdio.h>

// Constantes usando #define
#define PI 3.1416 // Tipo double
#define A 85      // Tipo int
#define B 0.111   // Tipo float
#define D "Hello" // Tipo string

int main()
{
    // Variáveis:
    int i = 1, j = 2, k;
    float variavel;
    char caractere = 'a'; // char meu_caractere = 97; --> Equivalente ao ASCII de 'a'

    // Casting:
    int inteiro = 10;
    float inteiro_casting;
    inteiro_casting = (float)inteiro;

    // Constante:
    const char constante_caractere = 'a'; // constante_caractere = 'b'; --> Isso retorna erro, se descomentado
    double x = PI;

    return 0;
}
