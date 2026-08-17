#include <stdio.h>

int main()
{
    
    int n, bit64, bit32, bit16, bit8, bit4, bit2, result;
    printf("Digite um número positivo e menor ou igual a 64: ");
    scanf("%d", &n);
    
    bit64 = n%2;
    result = n/2;

// O bit 64 está pegando o resto da divisão de "n", enquanto o result divide n por 2.
    
    bit32 = result%2;
    result = result/2;

//  O bit 32 está pegando o restante da divisão do result do numero anterior, e o result de baixo está sendo dividido por 2.

    bit16 = result%2;
    result = result/2;
    
    bit8 = result%2;
    result = result/2;
    
    bit4 = result%2;
    result = result/2;
    
    bit2 = result%2;
    result = result/2;

// O processo continua até que seja dividido e tenha pego o restante da divisão de todos as variavéis de bit.

printf("O numero %d em binário é: %d%d%d%d%d%d%d", n, result%2, bit2, bit4, bit8, bit16, bit32, bit64);

    return 0;
}
