#include <stdio.h>

int main() {
	int anos;
	int meses;
	int dias;

	scanf("%d", &dias);

	anos = dias % 365;
	anos = (dias - anos) / 365;
	dias -= anos * 365;

	meses = dias % 30;
	meses = (dias - meses) / 30;
	dias -= meses * 30;


	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);

	return 0;
}