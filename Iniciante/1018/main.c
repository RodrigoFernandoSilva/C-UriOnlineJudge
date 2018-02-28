#include <stdio.h>

int main() {
	int n;
	int nBackup;

	int n100;
	int n50;
	int n20;
	int n10;
	int n5;
	int n2;

	scanf("%d", &n);
	nBackup = n;

	n100 = n % 100;
	n100 = (n - n100) / 100;
	n -= n100 * 100;

	n50 = n % 50;
	n50 = (n - n50) / 50;
	n -= n50 * 50;

	n20 = n % 20;
	n20 = (n - n20) / 20;
	n -= n20 * 20;

	n10 = n % 10;
	n10 = (n - n20) / 10;
	n -= n10 * 10;

	n5 = n % 5;
	n5 = (n - n10) / 5;
	n -= n5 * 5;

	n2 = n % 2;
	n2 = (n - n2) / 2;
	n -= n2 * 2;

	printf("%d\n", nBackup);
	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n5);
	printf("%d nota(s) de R$ 2,00\n", n2);
	printf("%d nota(s) de R$ 1,00\n", n);

	return 0;
}