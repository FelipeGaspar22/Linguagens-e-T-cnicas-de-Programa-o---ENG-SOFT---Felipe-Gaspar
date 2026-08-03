#include <stdio.h>
// O comando "#include <stdio.h>" está trazendo uma biblioteca, que permite o uso das funções básicas da linguagem.
int main (){
/* 
A função "main" é aonde o programa começa de verdade, e o "int" que vem antes dele, está dizendo que o resultado será um numero inteiro.

Por sua vez isso afeta o return.

OBS; As "{}" são aonde o "bloco de código" é aberto, e tudo que estiver dentro dele, faz parte daquele pedaço do programa. 
Lembre-se sempre de fechar as chaves.
*/ 
printf("Hello Word!!!");
  return 0;
// o comando "return" que por convenção está em 0 representa que "tudo está correto, sem erros.", Caso dê errado, o return tende a dar um numero diferente de 0.
}
