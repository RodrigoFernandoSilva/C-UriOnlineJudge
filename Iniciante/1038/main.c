#include <stdio.h>

int main() {
	double tabela[] = {4.00, 4.50, 5.00, 2.00, 1.50};
	int codigo;
	int quanti;

	scanf("%d %d", &codigo, &quanti);

	printf("Total: R$ %.2f\n", tabela[codigo - 1] * quanti);

	return 0;
}