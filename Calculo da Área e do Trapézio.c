#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

// "define" faz uma definição, de que toda vez que o compilador ler "pi", ele vai substituir essa palavra pelo valor de 3.141592

int main() {

// Exercício 1

	float raio_circulo, area;
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio_circulo);

	area = pi *(raio_circulo * raio_circulo);

	printf("A area do raio do circulo de %f, é %f \n", raio_circulo, area);

// Exercício 2

	float altura, base_b, base_B;
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite a base baixa: ");
	scanf("%f", &base_b);
	printf("Digite a base alta: ");
	scanf("%f", &base_B);
	
	float trapezio = ((base_B + base_b) * altura) /2;
	
	printf("O valor do trapezio é %f!", trapezio);
	
	return 0;
}
