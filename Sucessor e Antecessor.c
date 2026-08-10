#include <stdio.h>

int main()
{
    int number;
    printf("Escolha um número: ");
    scanf("%d", &number);
/*
- O "printf" serve como um aviso do que se espera ser feito pelo usuário. 
- A variavél number, está tendo o seu valor alocado pelo comando "scanf", que está lendo o numero digitado pelo usuário, e alocando ele na memória. 
- O caracter & serve como um referenciado de endereço da memória, ele está dizendo aonde alocar o valor digitado pelo usuário, na memória, e nesse caso está sendo alocado na variavel number.
*/
  
    int sucessor,antecessor;
    sucessor = number + 1;
    antecessor = number - 1;

// Logo acima foram declarados as variaveis de sucessor e antecessor, ao qual receber o valor alocado na variavel number, e realizam suas respectivas operações lógicas para chegar ao sucessor e antecessor. 
  
printf("O antecessor e sucessor do numero: %d, são = %d seu antecessor e %d seu sucessor", number, antecessor, sucessor);

    return 0;
}
