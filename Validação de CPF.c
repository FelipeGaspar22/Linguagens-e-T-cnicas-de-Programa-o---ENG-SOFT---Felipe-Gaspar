#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, dgv1, dgv2;
    int multn1, multn2, multn3, multn4, multn5, multn6, multn7, multn8, multn9, resto, soma;
    
    scanf("%d%d%d. %d%d%d. %d%d%d - %d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
    printf("O cpf insirido é: %d%d%d. %d%d%d. %d%d%d - %d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
    
    multn1 = n1 * 10; multn2 = n2 * 10; multn3 = n3 * 10; 
    multn4 = n4 * 10; multn5 = n5 * 10; multn6 = n6 * 10;
    multn7 = n7 * 10; multn8 = n8 * 10; multn9 = n9 * 10;
   
   
   soma = multn1 + multn2 + multn3 + multn4 + multn5 + multn6 + multn7 + multn8 + multn9;
   soma *= 10;
   resto  = soma%11

    return 0;
}
