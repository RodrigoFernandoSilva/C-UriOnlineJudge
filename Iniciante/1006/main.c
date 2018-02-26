#include <stdio.h>

#define peso1 2
#define peso2 3
#define peso3 5

int main() {

	double nota1;
	double nota2;
	double nota3;

	scanf("%lf", &nota1);
	scanf("%lf", &nota2);
	scanf("%lf", &nota3);

	nota1 *= peso1;
	nota2 *= peso2;
	nota3 *= peso3;

	printf("MEDIA = %.1lf\n", ((nota1 + nota2 + nota3) / (peso1 + peso2 + peso3)));

	return 0;
}