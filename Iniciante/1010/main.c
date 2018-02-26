#include <stdio.h>

int main() {
	int cod1, num1; double valo1;
	int cod2, num2; double valo2;

	scanf("%d %d %lf", &cod1, &num1, &valo1);
	scanf("%d %d %lf", &cod2, &num2, &valo2);

	printf("VALOR A PAGAR: R$ %.2lf\n", ((num1 * valo1) + (num2 * valo2)));

	return 0;
}