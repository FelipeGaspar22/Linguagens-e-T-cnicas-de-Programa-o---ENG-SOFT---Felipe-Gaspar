#include <stdio.h>

int main()
{
    int nota_1, nota_2, nota_3, nota_4;
    printf("Digite a nota do primeiro semestre: ");
    scanf("%d", &nota_1);
    printf("Digite a nota do segundo semestre: ");
    scanf("%d", &nota_2);
    printf("Digite a nota do terceiro semestre: ");
    scanf("%d", &nota_3);
    printf("Digite a nota do quarto semestre: ");
    scanf("%d", &nota_4);

// Logo acima, os valores estão sendo coletados pelo usuário, através do "scanf" e alocados nas variavéis de suas respectivas notas.
  
    int soma = (nota_1 + nota_2 + nota_3 + nota_4) /4;
  
// A variavel soma, faz o calculo semestral das 4 notas, atenção a ordem de prioridade, é nescessário que a soma esteja dentro do (), caso contrário a nota 4 seria divida por 4 e o calculo estaria errado.
  
    if (soma >= 70){
        printf("A nota total do aluno foi %d, logo está aprovado!", soma);
    } if (soma <= 69){
        printf("A nota total do aluno foi %d, logo está de recucoeração!", soma);
    } if (soma <= 40) {
        printf("A nota total do aluno foi %d, logo ele está reprovado!", soma);
    }

  // As condicionais acima, indicam se o aluno foi aprovado, reprovado ou ficou de recuperação, com base em sua nota total determinante.
  
    return 0;
}
