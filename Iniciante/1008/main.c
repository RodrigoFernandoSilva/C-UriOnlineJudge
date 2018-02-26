#include <stdio.h>

int main() {
	int numero;
	int horas;
	double ganha;

	scanf("%d", &numero);
	scanf("%d", &horas);
	scanf("%lf", &ganha);

	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %.2lf\n", (horas * ganha));

	return 0;
}