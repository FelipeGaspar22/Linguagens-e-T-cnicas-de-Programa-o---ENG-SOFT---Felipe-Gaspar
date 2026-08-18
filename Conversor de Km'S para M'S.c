#include <stdio.h>

int main()
{ 
    int km, ms;
    printf("Insira a velocidade em km/h: ");
    scanf("%d", &km);
  
    ms = km / 3.6;

    printf("A conversão de %d km/h para m/s é de: %d metros por segundo!", km, ms);

    return 0;
}
