/*

#include <stdio.h>

int main()
{
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Insira o Primeiro digito do seu Telefone com DD: ");
    scanf("%d", &numbers[1]);
    printf("Insira o Segundo digito do seu Telefone com DD: ");
    scanf("%d", &numbers[2]);
    printf("Insira o Terceiro digito do seu Telefone com DD: ");
    scanf("%d", &numbers[3]);
    printf("Insira o Quarto digito do seu Telefone com DD: ");
    scanf("%d", &numbers[4]);
    printf("Insira o Quinto digito do seu Telefone com DD: ");
    scanf("%d", &numbers[5]);
    printf("Insira o Sexto digito do seu Telefone com DD: ");
    scanf("%d", &numbers[6]);
    printf("Insira o Sétimo digito do seu Telefone com DD: ");
    scanf("%d", &numbers[7]);
    printf("Insira o Oitavo digito do seu Telefone com DD: ");
    scanf("%d", &numbers[8]);
    printf("Insira o Nono digito do seu Telefone com DD: ");
    scanf("%d", &numbers[9]);
    printf("Insira o Décimo digito do seu Telefone com DD: ");
    scanf("%d", &numbers[10]);
    
    printf("O seu telefone é: (%d%d) %d%d%d%d-%d%d%d%d", numbers[1], numbers[2], numbers[3], numbers[4], numbers[5], numbers[6], numbers[7], numbers[8], numbers[9], numbers[10]);

    return 0;
}

*/

// Versão Comprimida - Ainda em desenvolvimento

#include <stdio.h>

int main()
{
    int numbers[10];
    printf("Insira o seu Telefone: ");
    scanf("%d%d %d%d%d%d%d%d%d%d", 
    &numbers[0], 
    &numbers[1], 
    &numbers[2], 
    &numbers[3], 
    &numbers[4], 
    &numbers[5], 
    &numbers[6], 
    &numbers[7], 
    &numbers[8], 
    &numbers[9]);

 printf("O seu telefone é: %d%d %d%d%d%d%d%d%d%d", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5], numbers[6], numbers[7], numbers[8], numbers[9]);

    return 0;
}

