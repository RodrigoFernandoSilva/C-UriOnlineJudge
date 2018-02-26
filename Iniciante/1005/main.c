#include <stdio.h>

#define peso1 3.5
#define peso2 7.5

int main() {

	double nota1;
	double nota2;
	double media;

	scanf("%lf", &nota1);
	scanf("%lf", &nota2);

	nota1 *= peso1;
	nota2 *= peso2;

	media = nota1 + nota2;

	media /= (peso1 + peso2);

	printf("MEDIA = %.5lf\n", media);

	return 0;
}