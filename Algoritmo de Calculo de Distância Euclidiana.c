#include <stdio.h>
#include <math.h>

// Importando a biblioteca math, para o uso de "pow" e "sqrt".

int main()
{
    int x1, x2, y1, y2;
    float dist, cat1, cat2;
    
    printf("Digite os valores para p1(x1,y1): ");
    scanf("%d", &x1);
    scanf("%d", &y1);
  
// Leitura dos valores x1 e y1.
    
    printf("Digite os valores para p2(x2, y2): ");
    scanf("%d", &x2);
    scanf("%d", &y2);

  // Leitura dos valores x2 e y2.

    cat1 = pow((x2 - x1), 2);
    cat2 = pow((y2 - y1), 2);

// Calculo de potencialização realizado em x e y.
    
    dist = sqrt(cat1 + cat2);

// Calculo final para distância com o resultado de cat1 somado a cat2, sobe efeito de sqrt.
    
    printf("Distância de: %d", dist)
    
    return 0;
}
