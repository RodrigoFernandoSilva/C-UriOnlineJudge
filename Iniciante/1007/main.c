#include <stdio.h>

int main() {
	int i;
	int n[4];

	for (i = 0; i < sizeof(n) / sizeof(n[0]); i ++) {
		scanf("%d", &n[i]);
	}

	printf("DIFERENCA = %d\n", (n[0] * n[1] - n[2] * n[3]));

	return 0;
}