#include <stdio.h>

int parouimpar(int numero);

int main()
{
    int numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    
    if(parouimpar(numero) == 1){
        printf("O numero %d é impar", numero);
    }
    if(parouimpar(numero) == 0){
        printf("O numero %d é par", numero);
    }

    return 0;
}

int parouimpar(int numero){
    int calc = numero % 2;
    return calc;
}
