#include <stdio.h>

int main(){
    int n1 = 20;
    int n2 = 15;
    int soma = n1 + n2;
// A declaração de uma variavel precisa ter o tipo dela definido, antes do seu nome.
    printf("A soma do numero 1 com o numero 2 resulta em %d\n", soma);
/*
%d está reservando um espaço dentro do comando "printf", aonde diz que ali naquele espaço, vai entrar um numero inteiro.

Por fim "soma" é o valor que vai entrar naquele espaço reservado.
*/
    return 0;
}
