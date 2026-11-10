#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[10];
    int num;
    
    printf("\nInsira a nota do aluno: ");
    for(int i = 0; i < 10; i++) scanf("%d", &notas[i]);
    system("cls");
    
    printf("\nQual nota deseja ver (Numero do aluno): ");
    scanf("%d", &num);
    if(num >= 0 && num <= 10) printf("\n%d", notas[num - 1]); 
    else printf("\n%d", num);

    return 0;
}
