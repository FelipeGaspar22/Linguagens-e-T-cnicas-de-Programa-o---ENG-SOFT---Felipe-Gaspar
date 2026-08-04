#include <stdio.h>

int main()
{
    int a, b, c, soma;
    a = 20;
    b = 10;
    c = 20;
    soma = a + b;

if (soma > c){
    printf("O valor de A = %d\n somado ao valor de B = %d\n resulta em = %d\n, logo a soma de A e B é maior que o valor de C = %d\n!", a,b,soma,c);
} else {
    printf("O valor de A = %d\n somado a ao valor B = %d\n resulta em = %d\n, logo a soma de A e B é menor que o valor de C = %d\n!", a,b,soma,c);
}

    return 0;
}
