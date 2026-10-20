#include <stdio.h>

int main(){
    
    int numero;
    int contador_numero = numero;
    int contador1 = 0;
    int contador2 = 100;
    printf("\nInsira um numero: ");
    scanf("%d", &numero);
    
    for(; contador1 <= 100; contador1++){
        numero++;
    }
    
    for(; contador2 >= 0; contador2--){
        numero--;
        printf("\nNumero: %d", numero);
        if(numero == 0){
            break
        }
    }
    
    return 0;
}
