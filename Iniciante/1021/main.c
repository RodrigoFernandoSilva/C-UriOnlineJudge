#include <stdio.h>

int CalcularQuantidade(int numero, int base);

int main() {
	double n;

	int notas;
	int n100;
	int n50;
	int n20;
	int n10;
	int n5;
	int n2;

	int moedas;
	int m100;
	int m50;
	int m25;
	int m10;
	int m5;
	int m1;

	scanf("%lf", & n);

	notas = n;
	moedas = n * 100;
	moedas -= (notas * 100);

	n100 = CalcularQuantidade(notas, 100);
	notas -= n100 * 100;

	n50 = CalcularQuantidade(notas, 50);
	notas -= n50 * 50;

	n20 = CalcularQuantidade(notas, 20);
	notas -= n20 * 20;

	n10 = CalcularQuantidade(notas, 10);
	notas -= n10 * 10;

	n5 = CalcularQuantidade(notas, 5);
	notas -= n5 * 5;

	n2 = CalcularQuantidade(notas, 2);
	notas -= n2 * 2;

	m100 = notas;

	m50 = CalcularQuantidade(moedas, 50);
	moedas -= m50 * 50;

	m25 = CalcularQuantidade(moedas, 25);
	moedas -= m25 * 25;

	m10 = CalcularQuantidade(moedas, 10);
	moedas -= m10 * 10;

	m5 = CalcularQuantidade(moedas, 5);
	moedas -= m5 * 5;

	m1 = moedas;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m100);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m1);

	return 0;
}

int CalcularQuantidade(int numero, int base) {
	int temp;

	temp = numero % base;
	temp = (numero - temp) / base;

	return temp;
}