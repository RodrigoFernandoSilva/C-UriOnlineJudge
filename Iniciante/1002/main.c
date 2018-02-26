#include <stdio.h>

#define PI 3.14159;

int main() {

	double raio;

	scanf("%lf",& raio);

	raio *= raio;
	raio *= PI;

	printf("A=%.4lf\n", raio);

	return 0;
}