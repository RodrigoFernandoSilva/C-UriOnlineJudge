#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
	double raio;

	scanf("%lf", &raio);

	raio = pow(raio, 3);

	printf("VOLUME = %.3lf\n", ((4.0/3.0) * PI * raio));

	return 0;
}