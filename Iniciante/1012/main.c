#include <stdio.h>
#include <math.h>

#define PI  3.14159

int main() {
	int i;
	double n[3];

	for (i = 0; i < sizeof(n) / sizeof(n[0]); i ++) {
		scanf("%lf", &n[i]);
	}

	printf("TRIANGULO: %.3lf\n", ((n[0] * n[2]) / 2));
	printf("CIRCULO: %.3lf\n", (PI * pow(n[2], 2)));
	printf("TRAPEZIO: %.3lf\n", ((n[0] + n[1]) * n[2]) / 2);
	printf("QUADRADO: %.3lf\n", (pow(n[1], 2)));
	printf("RETANGULO: %.3lf\n", n[0] * n[1]);

	return 0;
}