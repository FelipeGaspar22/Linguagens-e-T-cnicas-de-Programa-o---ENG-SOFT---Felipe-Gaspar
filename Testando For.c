#include <stdio.h>
int main()
{
	int number1, i;
	printf("Insira um numero: ");
	scanf("%d", &number1);
	for(i = 1; i <= 20; i++) {
		printf("%d x %d = %d\n", number1, i, number1 * i);
	}

	return 0;
}
