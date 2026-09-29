#include <stdio.h>

int calc(int idade, int ano);

/* 
- Na linha acima, eu estou avisando ao programa, que vai existir uma função calc.

- O compilador C lê de cima para baixo uma única vez, se eu não avisar que vai existir essa função, 
ou não colocar a função acima de int main. A chamada da função no printf não vai saber sobre a função, e não vai conseguir devolver o valor
*/

int main()
{   
    int idade, ano;
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira o ano atual em que está: ");
    scanf("%d", &ano);
    
    printf("Você nasceu em: %d", calc(idade, ano));

    return 0;
}

int calc(int idade, int ano){
    int resultado = ano - idade;
    return resultado;
}
