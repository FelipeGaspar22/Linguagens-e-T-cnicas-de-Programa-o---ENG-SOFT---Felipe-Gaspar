#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, calc1, calc2;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

// Leitura dos valores de A, B e C, logo acima.

    calc1 = (a + b + abs (a - b)) / 2;
    calc2 = (calc1 + c + abs (calc1 - c)) / 2;

// O calculo realizado, se dá pela comparação de A e B, e em seguida utilizando o resultado da comparação para calc2 comparando calc1 com c.

    printf("Entre os valores de 'A: %d', 'B: %d' e 'C: %d', o maior valor é: %d", a, b, c, calc2);

    return 0;
}
