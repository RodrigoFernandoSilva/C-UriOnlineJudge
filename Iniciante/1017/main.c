#include <stdio.h>

#define KML 12.0

int main() {
	int tempo;
	int veloc;

	scanf("%d", &tempo);
	scanf("%d", &veloc);

	printf("%.3lf\n", ((tempo * veloc) / KML));

	return 0;
}