#include <stdio.h>
int main()
{
	float number1;
	int i;
	printf("\nInsira um numero:");
	scanf("%f", &number1);
	printf("===========================\n");
	for(i = 1; i <= 100; i++) {
		printf("| %.2f | x | %d | = | %.2f |\n", number1, i, number1 * i);
	}

	return 0;
}
